/*	MATHEMATICAL FUNCTIONS HEADER
 *	Copyright (c) 2018 by COSMIC Software
 */
#ifndef __MATH__
#define __MATH__	1

#define HUGE_VAL 1E38

#ifdef __cplusplus
extern "C" {
#endif

double acos(double x);
double asin(double x);
double atan(double x);
double atan2(double y, double x);
double ceil(double x);
double cos(double x);
double cosh(double x);
double exp(double x);
double fabs(double x);
double floor(double x);
double fmod(double x, double y);
double frexp(double x, int *pexp);
double ldexp(double x, int exp);
double log(double x);
double log10(double x);
double modf(double value, double *pd);
double pow(double x, double y);
double sin(double x);
double sinh(double x);
double sqrt(double x);
double tan(double x);
double tanh(double x);

#ifdef __cplusplus
}

#ifndef min
#define min(x, y)	(((x) < (y)) ? (x) : (y))
#endif

#ifndef max
#define max(x, y)	(((x) > (y)) ? (x) : (y))
#endif

#ifndef round
#define round(x)	floor((x) + 0.5)
#endif

#endif

#endif
