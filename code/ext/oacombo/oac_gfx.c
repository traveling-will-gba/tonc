//======================================================================
//
//	oac_gfx, 64x32@4, 
//	+ palette 16 entries, not compressed
//	+ 32 tiles 4x4 metatiles not compressed
//	Total size: 32 + 1024 = 1056
//
//	Time-stamp: 2006-04-20, 20:30:22
//	Exported by Cearn's Usenti v1.7.4
//	(comments, kudos, flames to "daytshen@hotmail.com")
//
//======================================================================

const unsigned int oac_gfxPal[8]=
{
	0x0010673F,0x02100200,0x40104000,0x63184200,0x001F4210,0x03FF03E0,0x7C1F7C00,0x7FFF7FE0,
};

const unsigned int oac_gfxTiles[256]=
{
	0x00000000,0x00000000,0x00000000,0x90000000,0x09900000,0x00090000,0x00090000,0x00009000,
	0x99900000,0x00099900,0x00000099,0x00000000,0x00000000,0xE0000000,0x9E000000,0x99E00000,
	0x00000999,0x00999000,0x99000000,0x00000000,0x00000000,0x0000000E,0x000000E9,0x00000E99,
	0x00000000,0x00000000,0x00000000,0x00000009,0x00000990,0x00009000,0x00009000,0x00090000,
	0x00000900,0x00000900,0x00000090,0x00000090,0x00000090,0x00000090,0x00000009,0x99999999,
	0x99E00000,0x9E000000,0xE0000000,0x00000000,0x00000000,0xEE000000,0x99E00000,0x99E99999,
	0x00000E99,0x000000E9,0x0000000E,0x00000000,0x00000000,0x000000EE,0x00000E99,0x99999E99,
	0x00900000,0x00900000,0x09000000,0x09000000,0x09000000,0x09000000,0x90000000,0x99999999,

	0xEEEEEEEE,0x0000000E,0x000000E0,0x000000E0,0x000000E0,0x000000E0,0x00000E00,0x00000E00,
	0x99EEEEEE,0x99E00000,0xEE000000,0x00000000,0x00000000,0x90000000,0xE9000000,0xEE900000,
	0xEEEEEE99,0x00000E99,0x000000EE,0x00000000,0x00000000,0x00000009,0x0000009E,0x000009EE,
	0xEEEEEEEE,0xE0000000,0x0E000000,0x0E000000,0x0E000000,0x0E000000,0x00E00000,0x00E00000,
	0x0000E000,0x000E0000,0x000E0000,0x0EE00000,0xE0000000,0x00000000,0x00000000,0x00000000,
	0xEE900000,0xE9000000,0x90000000,0x00000000,0x00000000,0x000000EE,0x000EEE00,0xEEE00000,
	0x000009EE,0x0000009E,0x00000009,0x00000000,0x00000000,0xEE000000,0x00EEE000,0x00000EEE,
	0x000E0000,0x0000E000,0x0000E000,0x00000EE0,0x0000000E,0x00000000,0x00000000,0x00000000,

	0x00000000,0x00000000,0x00000000,0x90000000,0x09900000,0x00090000,0x00090000,0x00009000,
	0x99900000,0x00099900,0x00000099,0x00000000,0x00000000,0xE0000000,0x9E000000,0x99E00000,
	0x00000900,0x00000900,0x00000090,0x00000090,0x00000090,0x00000090,0x00000009,0x99999999,
	0x99E00000,0x9E000000,0xE0000000,0x00000000,0x00000000,0xEE000000,0x99E00000,0x99E99999,
	0x00000999,0x00999000,0x99000000,0x00000000,0x00000000,0x0000000E,0x000000E9,0x00000E99,
	0x00000000,0x00000000,0x00000000,0x00000009,0x00000990,0x00009000,0x00009000,0x00090000,
	0x00000E99,0x000000E9,0x0000000E,0x00000000,0x00000000,0x000000EE,0x00000E99,0x99999E99,
	0x00900000,0x00900000,0x09000000,0x09000000,0x09000000,0x09000000,0x90000000,0x99999999,

	0xEEEEEEEE,0x0000000E,0x000000E0,0x000000E0,0x000000E0,0x000000E0,0x00000E00,0x00000E00,
	0x99EEEEEE,0x99E00000,0xEE000000,0x00000000,0x00000000,0x90000000,0xE9000000,0xEE900000,
	0x0000E000,0x000E0000,0x000E0000,0x0EE00000,0xE0000000,0x00000000,0x00000000,0x00000000,
	0xEE900000,0xE9000000,0x90000000,0x00000000,0x00000000,0x000000EE,0x000EEE00,0xEEE00000,
	0xEEEEEE99,0x00000E99,0x000000EE,0x00000000,0x00000000,0x00000009,0x0000009E,0x000009EE,
	0xEEEEEEEE,0xE0000000,0x0E000000,0x0E000000,0x0E000000,0x0E000000,0x00E00000,0x00E00000,
	0x000009EE,0x0000009E,0x00000009,0x00000000,0x00000000,0xEE000000,0x00EEE000,0x00000EEE,
	0x000E0000,0x0000E000,0x0000E000,0x00000EE0,0x0000000E,0x00000000,0x00000000,0x00000000,
};

