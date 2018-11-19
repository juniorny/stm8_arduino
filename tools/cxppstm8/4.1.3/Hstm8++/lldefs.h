/*	EMULATED LONG LONG HEADER
 *	Copyright (c) 2017 by COSMIC Software
 */

#ifndef __LLDEFS__
#define __LLDEFS__	1

/*	type declaration
 */
typedef struct _lglg_ {
	unsigned long high;
	unsigned long low;
	} _lglg_;

#ifdef __cplusplus
extern "C" {
#endif

/*	function declarations
 */
_lglg_ _lland_(_lglg_ *, _lglg_ *);
_lglg_ _llor_(_lglg_ *, _lglg_ *);
_lglg_ _llxor_(_lglg_ *, _lglg_ *);
_lglg_ _lladd_(_lglg_ *, _lglg_ *);
_lglg_ _llsub_(_lglg_ *, _lglg_ *);
_lglg_ _llmul_(_lglg_ *, _lglg_ *);
_lglg_ _lldiv_(_lglg_ *, _lglg_ *);
_lglg_ _lludv_(_lglg_ *, _lglg_ *);
_lglg_ _llmod_(_lglg_ *, _lglg_ *);
_lglg_ _llumd_(_lglg_ *, _lglg_ *);
_lglg_ _lllsh_(_lglg_ *, char);
_lglg_ _llrshs_(_lglg_ *, char);
_lglg_ _llrshu_(_lglg_ *, char);
_lglg_ _llneg_(_lglg_ *);
_lglg_ _llcom_(_lglg_ *);
_lglg_ _llinc_(_lglg_ *);
_lglg_ _lldec_(_lglg_ *);
_lglg_ _llsets_(long);
_lglg_ _llsetu_(unsigned long);
char _llcmp_(char, _lglg_ *, _lglg_ *);

#ifdef __cplusplus
}
#endif

#endif
