//
// obj_demo.c
// testing various sprite related things
//
// (20031003 - 20060924, Cearn)

#include <string.h>
#include "toolbox.h"
#include "metr.h"

OBJ_ATTR obj_buffer[128];
OBJ_AFFINE *obj_aff_buffer= (OBJ_AFFINE*)obj_buffer;

struct attr {
    uint8_t y;
    uint8_t om : 2;
    uint8_t gm : 2; 
    uint8_t mos : 1;
    uint8_t cm : 1;
    uint8_t ef : 2;

    uint16_t x : 9;
    uint8_t aid : 5;
    uint8_t sz : 2;

    uint16_t tid : 10;
    uint8_t pr : 2;
    uint8_t pb : 4;

    uint16_t filler;
};

// testing a few sprite things
// D-pad: move 
// SELECT: switch palette
// START: toggle mapping mode
// A: horizontal flip
// B: vertical flip
// L & R shift starting tile
void obj_test()
{
	int x= 96, y= 32;
	u32 tid=0, pb=0;		// tile id, pal-bank

	OBJ_ATTR *metr= &obj_buffer[0];

    metr->attr0 = ATTR0_SQUARE;
    metr->attr1 = ATTR1_SIZE_64;
    metr->attr2 = ATTR2_PALBANK(pb) | tid;

	OBJ_ATTR *metr2= &obj_buffer[1];

    u32 tid2=64, pb2=0;

    metr2->attr0 = ATTR0_SQUARE;
    metr2->attr1 = ATTR1_SIZE_64;
    metr2->attr2 = ATTR2_PALBANK(pb2) | tid2;

    struct attr *aux1 = metr;
    struct attr *aux2 = metr2;

    aux1->x = 1;
    aux1->y = 40;

    aux2->x = 60;
    aux2->y = 40;
    
//	obj_set_attr(metr, 
//		ATTR0_SQUARE,				// Square, regular sprite
//		ATTR1_SIZE_64,					// 64x64p, 
//		ATTR2_PALBANK(pb) | tid);		// palbank 0, tile 0

	// position sprite (redundant here; the _real_ position
	// is set further down
//	obj_set_pos(metr, x, y);
//    metr->attr0 = y;
//    metr->attr1 = x;
//    metr->attr0=0;
//    metr->attr0 = 200;

	while(1)
	{
		vid_vsync();
		key_poll();

		oam_copy(oam_mem, obj_buffer, 128);	// only need to update one
	}
}

int main()
{
	// Places the glyphs of a 4bpp boxed metroid sprite 
	//   into LOW obj memory (cbb == 4)
	memcpy(&tile_mem[4][0], metrTiles, metrTilesLen);
	memcpy(&tile_mem[4][64], metrTiles, metrTilesLen);
	memcpy(pal_obj_mem, metrPal, metrPalLen);

	oam_init(obj_buffer, 128);
	REG_DISPCNT= DCNT_OBJ | DCNT_OBJ_1D;

	obj_test();

	while(1);

	return 0;
}
