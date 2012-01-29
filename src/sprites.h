#ifndef _SPRITES_H
#define _SPRITES_H

/*****************************************\
*                                         *
* SPRITES.H - A couple of routines to     *
*             decode and encode TTD .GRF  *
*             sprites                     *
*                                         *
*                                         *
* Copyright (C) 2000 by Josef Drexler     *
*               <jdrexler@julian.uwo.ca>  *
*                                         *
* Permission granted to copy and redist-  *
* ribute under the terms of the GNU GPL.  *
* For more info please read the file      *
* COPYING which should have come with     *
* this file.                              *
*                                         *
\*****************************************/

#include <stdio.h>
#include <stdarg.h>

#include "pcxfile.h"
#include "typesize.h"

// Define some of the bits in SpriteInfo::info
#define DONOTCROP(info) (info & 64)
#define HASTRANSPARENCY(info) (info & 8)
#define SIZEISCOMPRESSED(info) (info & 2)


// minimum and maximum overlap to search for in the compression routines
#define MINOVERLAP 3
#define MAXOVERLAP 15	// must be <= 15 b/o how it's encoded


/** Information about a single sprite. */
struct SpriteInfo {
	U8 info;  ///< Info byte; bit 1: size is compressed size, bit 3: tile transparancy, value 0xFF: special sprite.
	U8 ydim;  ///< Number of lines in the sprite.
	U16 xdim; ///< Number of columns in the sprite.
	S16 xrel; ///< Horizontal offset
	S16 yrel; ///< Vertical offset

	void writetobuffer(U8 *buffer);
	void readfromfile(const char *action, FILE *grf);
};

class spriteinfowriter : public bandnotify {
	public:
	virtual void addsprite(int /*x*/, SpriteInfo /*info*/) { };
	virtual void adddata(U16 /*size*/, U8 * /*data*/) { };
};

class spritestorage {
	public:
	virtual ~spritestorage(){}
	virtual void newsprite() {};
	virtual void setsize(int /*sx*/, int /*sy*/) {};
	virtual int  curspritex() {return 0;};
	virtual void newrow() {};
	virtual void nextpixel(U8 /*colour*/) {};
	virtual void spritedone(int /*sx*/, int /*sy*/) {};
	virtual void spritedone() {};
};


extern int maxx, maxy, maxs;

int decodesprite(FILE *grf, spritestorage *store, spriteinfowriter *writer);

U16 getlasttilesize();
U16 encodetile(FILE *grf, const U8 *image, long imgsize, U8 background, int sx, int sy, SpriteInfo inf, int docompress, int spriteno);
U16 encoderegular(FILE *grf, const U8 *image, long imgsize, SpriteInfo inf, int docompress, int spriteno);
void writespritesize(const char *action, unsigned int spritesize, FILE *grf);
void writeword(const char *action, unsigned int value, FILE *grf);
void writedword(const char *action, unsigned int value, FILE *grf);

unsigned int readspritesize(const char *action, FILE *grf);
U16 readword(const char *action, FILE *grf);
U32 readdword(const char *action, FILE *grf);

#endif /* _SPRITES_H */
