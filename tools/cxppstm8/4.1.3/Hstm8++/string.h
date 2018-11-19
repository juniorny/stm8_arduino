/*	STRING TYPES HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */

#ifndef __STRING__
#define __STRING__	1

#ifndef NULL
#ifdef __cplusplus
#define NULL	0
#else
#define NULL	(void *)0
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*	function declarations
 */
char *strcat(char *s1, const char *s2);
char *strchr(const char *s, char c);
char *strcpy(char *s1, const char *s2);
char *strncat(char *s1, const char *s2, unsigned int n);
char *strncpy(char *s1, const char *s2, unsigned int n);
char *strpbrk(const char *s1, const char *s2);
char *strrchr(const char *s, char c);
char *strstr(const char *s1, const char *s2);
int memcmp(const void *s1, const void *s2, unsigned int n);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, unsigned int n);
unsigned int strcspn(char *s1, char *s2);
unsigned int strlen(const char *s);
unsigned int strspn(char *s1, char *s2);
void *memchr(const char *s, char c, unsigned int n);
void *memcpy(void *s1, const void *s2, unsigned int n);
void *memmove(void *s1, const void *s2, unsigned int n);
void *memset(void *s, char c, unsigned int n);

#ifdef __cplusplus
}
#endif

#endif
