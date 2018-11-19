/*	C99 INTEGER WIDTH TYPES HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */
#ifndef __INTTYPES__
#define __INTTYPES__

#include <stdint.h>

/*	int8_t formats
 */
#define	PRId8		"cd"
#define	PRIdLEAST8	"cd"
#define	PRIdFAST8	"cd"

#define	PRIi8		"ci"
#define	PRIiLEAST8	"ci"
#define	PRIiFAST8	"ci"

#define	PRIo8		"co"
#define	PRIoLEAST8	"co"
#define	PRIoFAST8	"co"

#define	PRIu8		"cu"
#define	PRIuLEAST8	"cu"
#define	PRIuFAST8	"cu"

#define	PRIx8		"cx"
#define	PRIxLEAST8	"cx"
#define	PRIxFAST8	"cx"

#define	PRIX8		"cX"
#define	PRIXLEAST8	"cX"
#define	PRIXFAST8	"cX"

#define	SCNd8		"cd"
#define	SCNdLEAST8	"cd"
#define	SCNdFAST8	"cd"

#define	SCNi8		"ci"
#define	SCNiLEAST8	"ci"
#define	SCNiFAST8	"ci"

#define	SCNo8		"co"
#define	SCNoLEAST8	"co"
#define	SCNoFAST8	"co"

#define	SCNu8		"cu"
#define	SCNuLEAST8	"cu"
#define	SCNuFAST8	"cu"

#define	SCNx8		"cx"
#define	SCNxLEAST8	"cx"
#define	SCNxFAST8	"cx"

/*	int16_t formats
 */
#define	PRId16		"d"
#define	PRIdLEAST16	"d"
#define	PRIdFAST16	"d"

#define	PRIi16		"i"
#define	PRIiLEAST16	"i"
#define	PRIiFAST16	"i"

#define	PRIo16		"o"
#define	PRIoLEAST16	"o"
#define	PRIoFAST16	"o"

#define	PRIu16		"u"
#define	PRIuLEAST16	"u"
#define	PRIuFAST16	"u"

#define	PRIx16		"x"
#define	PRIxLEAST16	"x"
#define	PRIxFAST16	"x"

#define	PRIX16		"X"
#define	PRIXLEAST16	"X"
#define	PRIXFAST16	"X"

#define	SCNd16		"d"
#define	SCNdLEAST16	"d"
#define	SCNdFAST16	"d"

#define	SCNi16		"i"
#define	SCNiLEAST16	"i"
#define	SCNiFAST16	"i"

#define	SCNo16		"o"
#define	SCNoLEAST16	"o"
#define	SCNoFAST16	"o"

#define	SCNu16		"u"
#define	SCNuLEAST16	"u"
#define	SCNuFAST16	"u"

#define	SCNx16		"x"
#define	SCNxLEAST16	"x"
#define	SCNxFAST16	"x"

/*	int32_t formats
 */
#define	PRId32		"ld"
#define	PRIdLEAST32	"ld"
#define	PRIdFAST32	"ld"

#define	PRIi32		"li"
#define	PRIiLEAST32	"li"
#define	PRIiFAST32	"li"

#define	PRIo32		"lo"
#define	PRIoLEAST32	"lo"
#define	PRIoFAST32	"lo"

#define	PRIu32		"lu"
#define	PRIuLEAST32	"lu"
#define	PRIuFAST32	"lu"

#define	PRIx32		"lx"
#define	PRIxLEAST32	"lx"
#define	PRIxFAST32	"lx"

#define	PRIX32		"lX"
#define	PRIXLEAST32	"lX"
#define	PRIXFAST32	"lX"

#define	SCNd32		"ld"
#define	SCNdLEAST32	"ld"
#define	SCNdFAST32	"ld"

#define	SCNi32		"li"
#define	SCNiLEAST32	"li"
#define	SCNiFAST32	"li"

#define	SCNo32		"lo"
#define	SCNoLEAST32	"lo"
#define	SCNoFAST32	"lo"

#define	SCNu32		"lu"
#define	SCNuLEAST32	"lu"
#define	SCNuFAST32	"lu"

#define	SCNx32		"lx"
#define	SCNxLEAST32	"lx"
#define	SCNxFAST32	"lx"

/*	intptr_t formats
 */
#define	PRIdPTR		PRId16
#define	PRIiPTR		PRIi16

#define	PRIoPTR		PRIo16
#define	PRIuPTR		PRIu16
#define	PRIxPTR		PRIx16

#define	SCNdPTR		SCNd16
#define	SCNiPTR		SCNi16
#define	PRIXPTR		PRIX16

#define	SCNoPTR		SCNo16
#define	SCNuPTR		SCNu16
#define	SCNxPTR		SCNx16

#endif
