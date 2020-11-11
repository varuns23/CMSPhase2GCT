#include "bitonicSort32.h"
#include "../../JetObjects.h" 
//Main CAE block (compare and exchange)
GreaterSmaller AscendDescend(const Jet &x, const Jet &y){
#pragma HLS PIPELINE II=9
#pragma HLS INLINE
    GreaterSmaller s;

    s.greater = (x.et() > y.et()) ? x : y;
    s.smaller = (x.et() > y.et()) ? y : x;

    return s;
}

void FourinSmallFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3,
					Jet &y0, Jet &y1, Jet &y2, Jet &y3){
   #pragma HLS PIPELINE II=9
   #pragma HLS INLINE
    GreaterSmaller res;
        res = AscendDescend(x0, x2);
        y0 = res.smaller; y2 = res.greater;

        res = AscendDescend(x1, x3);
        y1 = res.smaller; y3 = res.greater;
}

void FourinGreatFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3,
					Jet &y0, Jet &y1, Jet &y2, Jet &y3){
   #pragma HLS PIPELINE II=9
   #pragma HLS INLINE
    GreaterSmaller res;
        res = AscendDescend(x0, x2);
        y0 = res.greater; y2 = res.smaller;

        res = AscendDescend(x1, x3);
        y1 = res.greater; y3 = res.smaller;
}

void EightinSmallFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3, const Jet &x4, const Jet &x5,
                const Jet &x6, const Jet &x7, Jet &y0, Jet &y1, Jet &y2, Jet &y3, Jet &y4, Jet &y5, Jet &y6, Jet &y7){
        #pragma HLS PIPELINE II=9
        #pragma HLS INLINE
        GreaterSmaller res;
        res = AscendDescend(x0, x4);
        y0 = res.smaller; y4 = res.greater;

        res = AscendDescend(x1, x5);
        y1 = res.smaller; y5 = res.greater;

        res = AscendDescend(x2, x6);
        y2 = res.smaller; y6 = res.greater;

        res = AscendDescend(x3, x7);
        y3 = res.smaller; y7 = res.greater;

}

void EightinGreatFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3, const Jet &x4, const Jet &x5,
                const Jet &x6, const Jet &x7, Jet &y0, Jet &y1, Jet &y2, Jet &y3, Jet &y4, Jet &y5, Jet &y6, Jet &y7){
        #pragma HLS PIPELINE II=9
       	#pragma HLS INLINE
        GreaterSmaller res;
        res = AscendDescend(x0, x4);
        y0 = res.greater; y4 = res.smaller;

        res = AscendDescend(x1, x5);
        y1 = res.greater; y5 = res.smaller;

        res = AscendDescend(x2, x6);
        y2 = res.greater; y6 = res.smaller;

        res = AscendDescend(x3, x7);
        y3 = res.greater; y7= res.smaller;

}

void SixteenSmallFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3, const Jet &x4, const Jet &x5,
                     const Jet &x6, const Jet &x7, const Jet &x8, const Jet &x9, const Jet &x10, const Jet &x11, const Jet &x12, 
                     const Jet &x13, const Jet &x14, const Jet &x15, Jet &y0, Jet &y1, Jet &y2, Jet &y3, Jet &y4, Jet &y5, Jet &y6, 
                    Jet &y7, Jet &y8, Jet &y9, Jet &y10, Jet &y11, Jet &y12, Jet &y13, Jet &y14, Jet &y15){
                    
        #pragma HLS PIPELINE II=9
        #pragma HLS INLINE
        GreaterSmaller res;

        res = AscendDescend(x0, x8);
        y0 = res.smaller; y8 = res.greater;

        res = AscendDescend(x1, x9);
        y1 = res.smaller; y9 = res.greater;

        res = AscendDescend(x2, x10);
        y2 = res.smaller; y10 = res.greater;

        res = AscendDescend(x3, x11);
        y3 = res.smaller; y11 = res.greater;

        res = AscendDescend(x4, x12);
        y4 = res.smaller; y12 = res.greater;

        res = AscendDescend(x5, x13);
        y5 = res.smaller; y13 = res.greater;

        res = AscendDescend(x6, x14);
        y6 = res.smaller; y14 = res.greater;

        res = AscendDescend(x7, x15);
        y7 = res.smaller; y15 = res.greater;
}

void SixteenGreatFir(const Jet &x0, const Jet &x1, const Jet &x2, const Jet &x3, const Jet &x4, const Jet &x5,
                     const Jet &x6, const Jet &x7, const Jet &x8, const Jet &x9, const Jet &x10, const Jet &x11, const Jet &x12, 
                     const Jet &x13, const Jet &x14, const Jet &x15, Jet &y0, Jet &y1, Jet &y2, Jet &y3, Jet &y4, Jet &y5, Jet &y6, 
                    Jet &y7, Jet &y8, Jet &y9, Jet &y10, Jet &y11, Jet &y12, Jet &y13, Jet &y14, Jet &y15){
                    
        #pragma HLS PIPELINE II=9
        #pragma HLS INLINE
        GreaterSmaller res;

       res = AscendDescend(x0, x8);
        y0 = res.greater; y8 = res.smaller;

        res = AscendDescend(x1, x9);
        y1 = res.greater; y9 = res.smaller;

        res = AscendDescend(x2, x10);
        y2 = res.greater; y10 = res.smaller;

        res = AscendDescend(x3, x11);
        y3 = res.greater; y11 = res.smaller;

        res = AscendDescend(x4, x12);
        y4 = res.greater; y12 = res.smaller;

        res = AscendDescend(x5, x13);
        y5 = res.greater; y13 = res.smaller;

        res = AscendDescend(x6, x14);
        y6 = res.greater; y14 = res.smaller;

        res = AscendDescend(x7, x15);
        y7 = res.greater; y15 = res.smaller;
}

void bitonicSort32(Jet in[N], Jet out[N]){
#pragma HLS PIPELINE II=9

#pragma HLS ARRAY_PARTITION variable=in
#pragma HLS ARRAY_PARTITION variable=out

GreaterSmaller result;

Jet a[N], b[N], c[N], d[N], e[N], f[N], g[N], h[N], l[N], m[N], n[N], o[N], p[N], q[N];
#pragma HLS ARRAY_PARTITION variable=a
#pragma HLS ARRAY_PARTITION variable=b
#pragma HLS ARRAY_PARTITION variable=c
#pragma HLS ARRAY_PARTITION variable=d
#pragma HLS ARRAY_PARTITION variable=e
#pragma HLS ARRAY_PARTITION variable=f
#pragma HLS ARRAY_PARTITION variable=g
#pragma HLS ARRAY_PARTITION variable=h
#pragma HLS ARRAY_PARTITION variable=l
#pragma HLS ARRAY_PARTITION variable=m
#pragma HLS ARRAY_PARTITION variable=n
#pragma HLS ARRAY_PARTITION variable=o
#pragma HLS ARRAY_PARTITION variable=p
#pragma HLS ARRAY_PARTITION variable=q

//.........................Starting first stage..........................//

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(in[4*i], in[4*i+1]);
    a[4*i] = result.smaller; a[4*i+1] = result.greater; 
}

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(in[4*i+2], in[4*i+3]);
    a[4*i+2] = result.greater; a[4*i+3] = result.smaller; 
}

//.........................Starting second stage..........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinSmallFir(a[8*i], a[8*i+1], a[8*i+2], a[8*i+3], b[8*i], b[8*i+1], b[8*i+2], b[8*i+3]);
    FourinGreatFir(a[8*i+4], a[8*i+5], a[8*i+6], a[8*i+7], b[8*i+4], b[8*i+5], b[8*i+6], b[8*i+7]); 
}

//....................Starting third stage..............................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(b[8*i], b[8*i+1]);
    c[8*i] = result.smaller; c[8*i+1] = result.greater; 
 
    result = AscendDescend(b[8*i+2], b[8*i+3]);
    c[8*i+2] = result.smaller; c[8*i+3] = result.greater;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(b[8*i+4], b[8*i+5]);
    c[8*i+4] = result.greater; c[8*i+5] = result.smaller; 

    result = AscendDescend(b[8*i+6], b[8*i+7]);
    c[8*i+6] = result.greater; c[8*i+7] = result.smaller;
}

//.....................Starting fourth stage..............................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
EightinSmallFir(c[16*i+0], c[16*i+1], c[16*i+2], c[16*i+3], c[16*i+4], c[16*i+5], c[16*i+6], c[16*i+7],
                 d[16*i+0], d[16*i+1], d[16*i+2], d[16*i+3], d[16*i+4], d[16*i+5], d[16*i+6], d[16*i+7]);
EightinGreatFir(c[16*i+8], c[16*i+9], c[16*i+10], c[16*i+11], c[16*i+12], c[16*i+13], c[16*i+14], c[16*i+15],
                 d[16*i+8], d[16*i+9], d[16*i+10], d[16*i+11], d[16*i+12], d[16*i+13], d[16*i+14], d[16*i+15]);
}

//.....................Starting fifth stage................................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
        FourinSmallFir(d[16*i], d[16*i+1], d[16*i+2], d[16*i+3], e[16*i], e[16*i+1], e[16*i+2], e[16*i+3]);
        FourinSmallFir(d[16*i+4], d[16*i+5], d[16*i+6], d[16*i+7], e[16*i+4], e[16*i+5], e[16*i+6], e[16*i+7]);
        FourinGreatFir(d[16*i+8], d[16*i+9], d[16*i+10], d[16*i+11], e[16*i+8], e[16*i+9], e[16*i+10], e[16*i+11]);
        FourinGreatFir(d[16*i+12], d[16*i+13], d[16*i+14], d[16*i+15], e[16*i+12], e[16*i+13], e[16*i+14], e[16*i+15]);
}

//.....................Starting sixth stage..............................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i], e[2*i+1]);
    f[2*i] = result.smaller; f[2*i+1] = result.greater;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+8], e[2*i+9]);
    f[2*i+8] = result.greater; f[2*i+9] = result.smaller;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+16], e[2*i+17]);
    f[2*i+16] = result.smaller; f[2*i+17] = result.greater;
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    result = AscendDescend(e[2*i+24], e[2*i+25]);
    f[2*i+24] = result.greater; f[2*i+25] = result.smaller;
}

//.....................Starting seventh stage.............................//

SixteenSmallFir(f[0], f[1], f[2], f[3], f[4], f[5], f[6], f[7],
                 f[8], f[9], f[10], f[11], f[12], f[13], f[14], f[15], 
                 g[0], g[1], g[2], g[3], g[4], g[5], g[6], g[7], g[8], 
                 g[9], g[10], g[11], g[12], g[13], g[14], g[15]);
SixteenGreatFir(f[16], f[17], f[18], f[19], f[20], f[21], f[22], f[23],
                 f[24], f[25], f[26], f[27], f[28], f[29], f[30], f[31], 
                 g[16], g[17], g[18], g[19], g[20], g[21], g[22], g[23], g[24], 
                 g[25], g[26], g[27], g[28], g[29], g[30], g[31]);


//.....................Starting eighth stage..............................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    EightinSmallFir(g[8*i], g[8*i+1], g[8*i+2], g[8*i+3], g[8*i+4], g[8*i+5], g[8*i+6], g[8*i+7],
                 h[8*i], h[8*i+1], h[8*i+2], h[8*i+3], h[8*i+4], h[8*i+5], h[8*i+6], h[8*i+7]);
}

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    EightinGreatFir(g[8*i+16], g[8*i+17], g[8*i+18], g[8*i+19], g[8*i+20], g[8*i+21], g[8*i+22], g[8*i+23],
                 h[8*i+16], h[8*i+17], h[8*i+18], h[8*i+19], h[8*i+20], h[8*i+21], h[8*i+22], h[8*i+23]);
}

//.....................Starting ninth stage................................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinSmallFir(h[4*i], h[4*i+1], h[4*i+2], h[4*i+3], l[4*i], l[4*i+1], l[4*i+2], l[4*i+3]);
}

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    FourinGreatFir(h[4*i+16], h[4*i+17], h[4*i+18], h[4*i+19], l[4*i+16], l[4*i+17], l[4*i+18], l[4*i+19]);
}

//.....................Starting tenth stage...............................//

for(dloop_t i=0; i<N/4; i++)
{
    #pragma HLS unroll
    result = AscendDescend(l[2*i], l[2*i+1]);
    m[2*i] = result.smaller; m[2*i+1] = result.greater;
}

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    result = AscendDescend(l[2*i+16], l[2*i+17]);
    m[2*i+16] = result.greater; m[2*i+17] = result.smaller;
}

//.....................Starting eleventh stage.............................//

for(dloop_t i=0; i<N/2; i++){
    #pragma HLS unroll
    result = AscendDescend(m[i], m[i+16]);
    n[i] = result.smaller; n[i+16] = result.greater;
}

//.....................Starting twelfth stage............................//

for(dloop_t i=0; i<N/16; i++){
    #pragma HLS unroll
    SixteenSmallFir(n[16*i], n[16*i+1], n[16*i+2], n[16*i+3], n[16*i+4], n[16*i+5], n[16*i+6], n[16*i+7],
                 n[16*i+8], n[16*i+9], n[16*i+10], n[16*i+11], n[16*i+12], n[16*i+13], n[16*i+14], n[16*i+15], 
                 o[16*i+0], o[16*i+1], o[16*i+2], o[16*i+3], o[16*i+4], o[16*i+5], o[16*i+6], o[16*i+7], o[16*i+8], 
                 o[16*i+9], o[16*i+10], o[16*i+11], o[16*i+12], o[16*i+13], o[16*i+14], o[16*i+15]);
}

//.....................Starting thirteenth stage..........................//

for(dloop_t i=0; i<N/8; i++){
    #pragma HLS unroll
    EightinSmallFir(o[8*i], o[8*i+1], o[8*i+2], o[8*i+3], o[8*i+4], o[8*i+5], o[8*i+6], o[8*i+7],
                p[8*i], p[8*i+1], p[8*i+2], p[8*i+3], p[8*i+4], p[8*i+5], p[8*i+6], p[8*i+7]);
}

//.....................Starting fourteenth stage............................//

for(dloop_t i=0; i<N/4; i++){
    #pragma HLS unroll
    FourinSmallFir(p[4*i], p[4*i+1], p[4*i+2], p[4*i+3], q[4*i], q[4*i+1], q[4*i+2], q[4*i+3]);
}

//.....................Starting fifteenth stage..............................//

for(dloop_t i=0; i<N/2; i++){
    #pragma HLS unroll
    result = AscendDescend(q[2*i], q[2*i+1]);
    out[2*i] = result.smaller; out[2*i+1] = result.greater;
}



}

