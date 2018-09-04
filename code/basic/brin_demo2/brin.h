
//{{BLOCK(brin)

//======================================================================
//
//	brin, 512x256@4, 
//	+ palette 256 entries, not compressed
//	+ 1638 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 64x32 
//	Total size: 512 + 52416 + 4096 = 57024
//
//	Time-stamp: 2018-04-02, 22:05:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BRIN_H
#define GRIT_BRIN_H

#define brinTilesLen 52416
extern const unsigned short brinTiles[26208];

#define brinMapLen 4096
extern const unsigned short brinMap[2048];

#define brinPalLen 512
extern const unsigned short brinPal[256];

#endif // GRIT_BRIN_H

//}}BLOCK(brin)
