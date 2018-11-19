/*	SETJMP/LONGJMP HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */

#ifndef __SETJMP__
#define __SETJMP__	1

/*	size of info
 */
#define _JMPSIZ	5

/*	type declaration
 */
typedef char jmp_buf[_JMPSIZ];

#ifdef __cplusplus
extern "C" {
#endif

/*	function declarations
 */
int setjmp(jmp_buf env);
void longjmp(jmp_buf env, int val);

#ifdef __cplusplus
}
#endif

#endif
