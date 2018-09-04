
//{{BLOCK(background_gba)

//======================================================================
//
//	background_gba, 240x160@4, 
//	+ palette 256 entries, not compressed
//	+ 471 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 30x20 
//	Total size: 512 + 15072 + 1200 = 16784
//
//	Time-stamp: 2018-04-02, 21:06:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.15
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BACKGROUND_GBA_H
#define GRIT_BACKGROUND_GBA_H

#define background_gbaTilesLen 15072
extern const unsigned int background_gbaTiles[3768];

#define background_gbaMapLen 1200
extern const unsigned short background_gbaMap[600];

#define background_gbaPalLen 512
extern const unsigned short background_gbaPal[256];

#endif // GRIT_BACKGROUND_GBA_H

//}}BLOCK(background_gba)
