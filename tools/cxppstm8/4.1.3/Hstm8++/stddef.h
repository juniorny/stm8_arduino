/*	STANDARD DEFINITIONS HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */
#ifndef __STDDEF__
#define __STDDEF__	1

#ifndef __SIZE_T__
#define __SIZE_T__	1
typedef unsigned int size_t;
#endif

#ifndef __cplusplus
#ifndef __WCHAR_T__
#define __WCHAR_T__	1
typedef char wchar_t;
#endif
#endif

typedef int ptrdiff_t;

#ifndef NULL
#ifdef __cplusplus
#define NULL	0
#else
#define NULL	(void *)0
#endif
#endif

#define offsetof(styp, mbr) ((size_t)&(((styp *)0)->mbr))

#endif
