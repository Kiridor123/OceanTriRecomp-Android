// mh3_fma_compat.h
// Respaldo por software de los intrínsecos FMA cuando se compila sin soporte FMA
// (p.ej. -march=x86-64-v2). Con __FMA__ definido no hace nada.
//  - ps/ss: el producto de dos floats es exacto en double, se suma en double y se redondea a float
//           (coincide con el FMA por hardware salvo casos extremadamente raros de doble redondeo).
//  - pd/sd: fma() de libm por carril (exacto, más lento).
#pragma once
#include <immintrin.h>
#include <math.h>

#if !defined(__FMA__) && (defined(__x86_64__) || defined(_M_X64))

static inline __m128 mh3_neg_ps(__m128 x) { return _mm_xor_ps(x, _mm_set1_ps(-0.0f)); }
static inline __m128d mh3_neg_pd(__m128d x) { return _mm_xor_pd(x, _mm_set1_pd(-0.0)); }

static inline __m128 mh3_fmadd_ps(__m128 a, __m128 b, __m128 c) {
    __m128d lo = _mm_add_pd(_mm_mul_pd(_mm_cvtps_pd(a), _mm_cvtps_pd(b)), _mm_cvtps_pd(c));
    __m128d hi = _mm_add_pd(_mm_mul_pd(_mm_cvtps_pd(_mm_movehl_ps(a, a)), _mm_cvtps_pd(_mm_movehl_ps(b, b))),
                            _mm_cvtps_pd(_mm_movehl_ps(c, c)));
    return _mm_movelh_ps(_mm_cvtpd_ps(lo), _mm_cvtpd_ps(hi));
}
static inline __m128 mh3_fmsub_ps(__m128 a, __m128 b, __m128 c)  { return mh3_fmadd_ps(a, b, mh3_neg_ps(c)); }
static inline __m128 mh3_fnmadd_ps(__m128 a, __m128 b, __m128 c) { return mh3_fmadd_ps(mh3_neg_ps(a), b, c); }
static inline __m128 mh3_fnmsub_ps(__m128 a, __m128 b, __m128 c) { return mh3_fmadd_ps(mh3_neg_ps(a), b, mh3_neg_ps(c)); }

static inline __m128 mh3_fmadd_ss(__m128 a, __m128 b, __m128 c) {
    float r = (float)((double)_mm_cvtss_f32(a) * (double)_mm_cvtss_f32(b) + (double)_mm_cvtss_f32(c));
    return _mm_move_ss(a, _mm_set_ss(r));
}
static inline __m128 mh3_fmsub_ss(__m128 a, __m128 b, __m128 c)  { return mh3_fmadd_ss(a, b, mh3_neg_ps(c)); }
static inline __m128 mh3_fnmadd_ss(__m128 a, __m128 b, __m128 c) { return mh3_fmadd_ss(mh3_neg_ps(a), b, c); }
static inline __m128 mh3_fnmsub_ss(__m128 a, __m128 b, __m128 c) { return mh3_fmadd_ss(mh3_neg_ps(a), b, mh3_neg_ps(c)); }

static inline __m128d mh3_fmadd_pd(__m128d a, __m128d b, __m128d c) {
    double x[2], y[2], z[2];
    _mm_storeu_pd(x, a); _mm_storeu_pd(y, b); _mm_storeu_pd(z, c);
    return _mm_set_pd(fma(x[1], y[1], z[1]), fma(x[0], y[0], z[0]));
}
static inline __m128d mh3_fmsub_pd(__m128d a, __m128d b, __m128d c)  { return mh3_fmadd_pd(a, b, mh3_neg_pd(c)); }
static inline __m128d mh3_fnmadd_pd(__m128d a, __m128d b, __m128d c) { return mh3_fmadd_pd(mh3_neg_pd(a), b, c); }
static inline __m128d mh3_fnmsub_pd(__m128d a, __m128d b, __m128d c) { return mh3_fmadd_pd(mh3_neg_pd(a), b, mh3_neg_pd(c)); }

static inline __m128d mh3_fmadd_sd(__m128d a, __m128d b, __m128d c) {
    return _mm_move_sd(a, _mm_set_sd(fma(_mm_cvtsd_f64(a), _mm_cvtsd_f64(b), _mm_cvtsd_f64(c))));
}
static inline __m128d mh3_fmsub_sd(__m128d a, __m128d b, __m128d c)  { return mh3_fmadd_sd(a, b, mh3_neg_pd(c)); }
static inline __m128d mh3_fnmadd_sd(__m128d a, __m128d b, __m128d c) { return mh3_fmadd_sd(mh3_neg_pd(a), b, c); }
static inline __m128d mh3_fnmsub_sd(__m128d a, __m128d b, __m128d c) { return mh3_fmadd_sd(mh3_neg_pd(a), b, mh3_neg_pd(c)); }

#define _mm_fmadd_ps  mh3_fmadd_ps
#define _mm_fmsub_ps  mh3_fmsub_ps
#define _mm_fnmadd_ps mh3_fnmadd_ps
#define _mm_fnmsub_ps mh3_fnmsub_ps
#define _mm_fmadd_ss  mh3_fmadd_ss
#define _mm_fmsub_ss  mh3_fmsub_ss
#define _mm_fnmadd_ss mh3_fnmadd_ss
#define _mm_fnmsub_ss mh3_fnmsub_ss
#define _mm_fmadd_pd  mh3_fmadd_pd
#define _mm_fmsub_pd  mh3_fmsub_pd
#define _mm_fnmadd_pd mh3_fnmadd_pd
#define _mm_fnmsub_pd mh3_fnmsub_pd
#define _mm_fmadd_sd  mh3_fmadd_sd
#define _mm_fmsub_sd  mh3_fmsub_sd
#define _mm_fnmadd_sd mh3_fnmadd_sd
#define _mm_fnmsub_sd mh3_fnmsub_sd

#endif