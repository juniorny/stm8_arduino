/*	GENERAL LIBRARY FUNCTIONS HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */
#ifndef __STDLIB__
#define __STDLIB__	1

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define MB_CUR_MAX 1
#define RAND_MAX 32767

#ifndef __SIZE_T__
#define __SIZE_T__	1
typedef unsigned int size_t;
#endif

#ifndef __cplusplus
#ifndef __WCHAR_T__
#define __WCHAR_T__	1
typedef char wchar_t;
#endif

#ifndef NULL
#define NULL	(void *)0
#endif
#else
#ifndef NULL
#define NULL	0
#endif
#endif

typedef struct {
	int quot;
	int rem;
	} div_t;

typedef struct {
	long quot;
	long rem;
	} ldiv_t;

#ifdef __cplusplus
extern "C" {
#endif

int abs(int i);
double atof(char *nptr);
int atoi(char *nptr);
long atol(char *nptr);
void *calloc(unsigned int nelem, unsigned int elsize);
div_t div(int numer, int denom);
void exit(int status);
void free(void *ptr);
long labs(long l);
ldiv_t ldiv(long numer, long denom);
void *malloc(unsigned int size);
int rand(void);
void *realloc(void *ptr, unsigned int size);
void srand(unsigned int seed);
double strtod(char *s, char **endptr);
long strtol(char *s, char **endptr, int base);

void yield(void);
int _swap16(int);
long _swap32(long);

unsigned int isqrt(unsigned int);
unsigned int lsqrt(unsigned long);
int _checksum(void);
int _checksumx(void);
int _checksum16(void);
int _checksum16x(void);
int _checkcrc16(void);
int _checkcrc16x(void);
char _fctcpy(char);

#ifdef __cplusplus
}
#endif

#define abort() exit(1)
#define strtoul strtol

#endif
