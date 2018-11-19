/*	STANDARD I/O HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */

#ifndef __STDIO__
#define __STDIO__	1

#ifndef NULL
#ifdef __cplusplus
#define NULL	0
#else
#define NULL	(void *)0
#endif
#endif

#ifndef __SIZE_T__
#define __SIZE_T__	1
typedef unsigned int size_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*	function declarations
 */
char getchar(void);
char *gets(char *s);
int printf(const char *format, ...);
char putchar(char c);
int puts(const char *s);
int scanf(const char *format, ...);
int sscanf(char *s, const char *format, ...);
int sprintf(char *s, const char *format, ...);

#ifdef __cplusplus
}
#endif

/*	system parameters
 */
#define BUFSIZ 	512
#define EOF	-1

#endif
