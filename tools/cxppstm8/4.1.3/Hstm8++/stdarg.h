/*	VARIABLE ARGUMENT LIST HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */

#ifndef __STDARG__
#define __STDARG__	1

/*	type declarations
 */
typedef char *va_list;

/*	macro declarations
 */
#define va_start(ap, arg) ((ap) = (@near char *)&(arg) + sizeof(arg))
#define va_arg(ap, ty) ((ap) += sizeof @(ty), *(ty *)((ap) - sizeof(ty)))
#define va_end(ap) ap

#ifdef __cplusplus
extern "C" {
#endif

/*	io functions using va_list
 */
int vprintf(const char *format, va_list ap);
int vsprintf(char *s, const char *format, va_list ap);

#ifdef __cplusplus
}
#endif

#endif
