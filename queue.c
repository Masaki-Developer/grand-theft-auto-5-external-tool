#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 3
#define BUFFER_SIZE 1252

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} LAS8u1yk_ctx_t;

void init_ctx(LAS8u1yk_ctx_t *ctx) {
    ctx->id = 4950;
    ctx->coefficient = 2.0;
    ctx->flags = 144;
}

int compute_CJTowDU(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} GGXGzEss_ctx_t;

void init_ctx(GGXGzEss_ctx_t *ctx) {
    ctx->id = 8481;
    ctx->coefficient = 9.0;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 3MhuVBJ9_ctx_t;

void init_ctx(3MhuVBJ9_ctx_t *ctx) {
    ctx->id = 3160;
    ctx->coefficient = 9.6;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} FCddhlPO_ctx_t;

void init_ctx(FCddhlPO_ctx_t *ctx) {
    ctx->id = 6106;
    ctx->coefficient = 4.0;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} xvptb2Hy_ctx_t;

void init_ctx(xvptb2Hy_ctx_t *ctx) {
    ctx->id = 7177;
    ctx->coefficient = 9.6;
    ctx->flags = 55;
}

int compute_vP7XpEe(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} E5QEtjtx_ctx_t;

void init_ctx(E5QEtjtx_ctx_t *ctx) {
    ctx->id = 2306;
    ctx->coefficient = 2.6;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 6Eg0a5al_ctx_t;

void init_ctx(6Eg0a5al_ctx_t *ctx) {
    ctx->id = 5579;
    ctx->coefficient = 5.2;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} oAZ3shP9_ctx_t;

void init_ctx(oAZ3shP9_ctx_t *ctx) {
    ctx->id = 8777;
    ctx->coefficient = 9.4;
    ctx->flags = 70;
}

int compute_MyCG1Au(int input) {
    int result = input * 11;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_KHpVemN(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 23XPVWBv_ctx_t;

void init_ctx(23XPVWBv_ctx_t *ctx) {
    ctx->id = 4208;
    ctx->coefficient = 8.0;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0zvOoLUO_ctx_t;

void init_ctx(0zvOoLUO_ctx_t *ctx) {
    ctx->id = 8561;
    ctx->coefficient = 8.2;
    ctx->flags = 178;
}

int compute_mqAtyxV(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_bLghL1z(int input) {
    int result = input * 14;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} wdFQRTfG_ctx_t;

void init_ctx(wdFQRTfG_ctx_t *ctx) {
    ctx->id = 9994;
    ctx->coefficient = 5.9;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} YRzTrogr_ctx_t;

void init_ctx(YRzTrogr_ctx_t *ctx) {
    ctx->id = 9360;
    ctx->coefficient = 6.4;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 34Os3jtw_ctx_t;

void init_ctx(34Os3jtw_ctx_t *ctx) {
    ctx->id = 3269;
    ctx->coefficient = 5.6;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 0hkLTNZA_ctx_t;

void init_ctx(0hkLTNZA_ctx_t *ctx) {
    ctx->id = 8145;
    ctx->coefficient = 0.4;
    ctx->flags = 108;
}

int compute_mJmoPb5(int input) {
    int result = input * 29;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_KHLt0yl(int input) {
    int result = input * 17;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} IgT5Jdau_ctx_t;

void init_ctx(IgT5Jdau_ctx_t *ctx) {
    ctx->id = 3283;
    ctx->coefficient = 7.3;
    ctx->flags = 145;
}

int compute_pRPVy9T(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} AbLVzr0d_ctx_t;

void init_ctx(AbLVzr0d_ctx_t *ctx) {
    ctx->id = 2342;
    ctx->coefficient = 0.3;
    ctx->flags = 41;
}

int compute_fZbOoSB(int input) {
    int result = input * 33;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} HANWF7xF_ctx_t;

void init_ctx(HANWF7xF_ctx_t *ctx) {
    ctx->id = 5395;
    ctx->coefficient = 1.6;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 7xWaGrRd_ctx_t;

void init_ctx(7xWaGrRd_ctx_t *ctx) {
    ctx->id = 4461;
    ctx->coefficient = 7.1;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} qFEH8VeN_ctx_t;

void init_ctx(qFEH8VeN_ctx_t *ctx) {
    ctx->id = 9821;
    ctx->coefficient = 5.6;
    ctx->flags = 191;
}

int compute_uzCUmXs(int input) {
    int result = input * 36;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_CwafTQc(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_YcqBG0D(int input) {
    int result = input * 19;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} sYIXx2FW_ctx_t;

void init_ctx(sYIXx2FW_ctx_t *ctx) {
    ctx->id = 3234;
    ctx->coefficient = 6.2;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} OZFIV7gN_ctx_t;

void init_ctx(OZFIV7gN_ctx_t *ctx) {
    ctx->id = 2691;
    ctx->coefficient = 1.9;
    ctx->flags = 115;
}

int compute_2pI6iaI(int input) {
    int result = input * 14;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} zPFt0adZ_ctx_t;

void init_ctx(zPFt0adZ_ctx_t *ctx) {
    ctx->id = 8563;
    ctx->coefficient = 4.8;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} FJjBBJ58_ctx_t;

void init_ctx(FJjBBJ58_ctx_t *ctx) {
    ctx->id = 7294;
    ctx->coefficient = 7.9;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} PmPQSi13_ctx_t;

void init_ctx(PmPQSi13_ctx_t *ctx) {
    ctx->id = 3291;
    ctx->coefficient = 7.1;
    ctx->flags = 97;
}

int compute_f7lEujq(int input) {
    int result = input * 58;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_aHLG33H(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} gswWZO26_ctx_t;

void init_ctx(gswWZO26_ctx_t *ctx) {
    ctx->id = 9412;
    ctx->coefficient = 4.8;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 4t9ndVpx_ctx_t;

void init_ctx(4t9ndVpx_ctx_t *ctx) {
    ctx->id = 3323;
    ctx->coefficient = 7.2;
    ctx->flags = 76;
}

int compute_7LOIfig(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_owsWikt(int input) {
    int result = input * 24;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_TTEBk7a(int input) {
    int result = input * 69;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_tRgBLUj(int input) {
    int result = input * 31;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 3ZcaspbU_ctx_t;

void init_ctx(3ZcaspbU_ctx_t *ctx) {
    ctx->id = 4934;
    ctx->coefficient = 6.9;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Fu3anhJu_ctx_t;

void init_ctx(Fu3anhJu_ctx_t *ctx) {
    ctx->id = 1030;
    ctx->coefficient = 6.0;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} F4sMphUz_ctx_t;

void init_ctx(F4sMphUz_ctx_t *ctx) {
    ctx->id = 7385;
    ctx->coefficient = 8.1;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ouATGyaw_ctx_t;

void init_ctx(ouATGyaw_ctx_t *ctx) {
    ctx->id = 1507;
    ctx->coefficient = 0.6;
    ctx->flags = 85;
}

int compute_X7kTzpa(int input) {
    int result = input * 18;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_cxUHU6E(int input) {
    int result = input * 62;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_mHawHmz(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 8uVJGDyg_ctx_t;

void init_ctx(8uVJGDyg_ctx_t *ctx) {
    ctx->id = 2285;
    ctx->coefficient = 5.0;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} KeBJceQx_ctx_t;

void init_ctx(KeBJceQx_ctx_t *ctx) {
    ctx->id = 7880;
    ctx->coefficient = 4.4;
    ctx->flags = 105;
}

int compute_LRCY2Fk(int input) {
    int result = input * 37;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} SbyIsTvT_ctx_t;

void init_ctx(SbyIsTvT_ctx_t *ctx) {
    ctx->id = 9358;
    ctx->coefficient = 6.0;
    ctx->flags = 122;
}

int compute_EgaHyGe(int input) {
    int result = input * 18;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_VoeqFiR(int input) {
    int result = input * 67;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} SU1ybEOv_ctx_t;

void init_ctx(SU1ybEOv_ctx_t *ctx) {
    ctx->id = 1312;
    ctx->coefficient = 5.1;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} JRn956Ly_ctx_t;

void init_ctx(JRn956Ly_ctx_t *ctx) {
    ctx->id = 8594;
    ctx->coefficient = 1.8;
    ctx->flags = 180;
}

int compute_wWQdplp(int input) {
    int result = input * 23;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} d6imDvmM_ctx_t;

void init_ctx(d6imDvmM_ctx_t *ctx) {
    ctx->id = 7473;
    ctx->coefficient = 7.7;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} rAqIF0HC_ctx_t;

void init_ctx(rAqIF0HC_ctx_t *ctx) {
    ctx->id = 8739;
    ctx->coefficient = 5.4;
    ctx->flags = 224;
}

int compute_pvVRnkF(int input) {
    int result = input * 57;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} M7iXQWpm_ctx_t;

void init_ctx(M7iXQWpm_ctx_t *ctx) {
    ctx->id = 9822;
    ctx->coefficient = 4.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} MuO5Kmfp_ctx_t;

void init_ctx(MuO5Kmfp_ctx_t *ctx) {
    ctx->id = 2330;
    ctx->coefficient = 2.3;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 6pqKLL2q_ctx_t;

void init_ctx(6pqKLL2q_ctx_t *ctx) {
    ctx->id = 3866;
    ctx->coefficient = 5.1;
    ctx->flags = 146;
}

int compute_2ZPEfGO(int input) {
    int result = input * 34;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 6U7yjfYN_ctx_t;

void init_ctx(6U7yjfYN_ctx_t *ctx) {
    ctx->id = 1009;
    ctx->coefficient = 8.9;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} F1rl6nnq_ctx_t;

void init_ctx(F1rl6nnq_ctx_t *ctx) {
    ctx->id = 7109;
    ctx->coefficient = 5.3;
    ctx->flags = 16;
}

int compute_7GTMjJY(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} KHDIhQiH_ctx_t;

void init_ctx(KHDIhQiH_ctx_t *ctx) {
    ctx->id = 3489;
    ctx->coefficient = 9.3;
    ctx->flags = 162;
}

int compute_sTErpbg(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} GbAjX7MY_ctx_t;

void init_ctx(GbAjX7MY_ctx_t *ctx) {
    ctx->id = 8588;
    ctx->coefficient = 7.1;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} WAdYUXKi_ctx_t;

void init_ctx(WAdYUXKi_ctx_t *ctx) {
    ctx->id = 2890;
    ctx->coefficient = 7.1;
    ctx->flags = 182;
}

int compute_T9kYI1t(int input) {
    int result = input * 23;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ihUUWf2B_ctx_t;

void init_ctx(ihUUWf2B_ctx_t *ctx) {
    ctx->id = 2833;
    ctx->coefficient = 4.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} XdInKyts_ctx_t;

void init_ctx(XdInKyts_ctx_t *ctx) {
    ctx->id = 5610;
    ctx->coefficient = 5.6;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} s6cAiphI_ctx_t;

void init_ctx(s6cAiphI_ctx_t *ctx) {
    ctx->id = 4375;
    ctx->coefficient = 9.7;
    ctx->flags = 160;
}

int compute_4eaC5xJ(int input) {
    int result = input * 67;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_FY47i3u(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} gz4HJJff_ctx_t;

void init_ctx(gz4HJJff_ctx_t *ctx) {
    ctx->id = 6310;
    ctx->coefficient = 5.1;
    ctx->flags = 161;
}

int compute_TORIUMO(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 23vTkKUt_ctx_t;

void init_ctx(23vTkKUt_ctx_t *ctx) {
    ctx->id = 6289;
    ctx->coefficient = 6.7;
    ctx->flags = 158;
}

int compute_qoP4lC9(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_khwu2Ee(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} QYXNPPMs_ctx_t;

void init_ctx(QYXNPPMs_ctx_t *ctx) {
    ctx->id = 8387;
    ctx->coefficient = 8.5;
    ctx->flags = 47;
}

int compute_6P5n0Nj(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 7XNDSo0A_ctx_t;

void init_ctx(7XNDSo0A_ctx_t *ctx) {
    ctx->id = 5827;
    ctx->coefficient = 8.1;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} InTirkru_ctx_t;

void init_ctx(InTirkru_ctx_t *ctx) {
    ctx->id = 1268;
    ctx->coefficient = 6.1;
    ctx->flags = 243;
}

int compute_JOSsGvk(int input) {
    int result = input * 3;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_HqtrZsX(int input) {
    int result = input * 42;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} DOFWpXug_ctx_t;

void init_ctx(DOFWpXug_ctx_t *ctx) {
    ctx->id = 2974;
    ctx->coefficient = 1.0;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} BcSFfdph_ctx_t;

void init_ctx(BcSFfdph_ctx_t *ctx) {
    ctx->id = 2588;
    ctx->coefficient = 3.9;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} O0kVUFXV_ctx_t;

void init_ctx(O0kVUFXV_ctx_t *ctx) {
    ctx->id = 9676;
    ctx->coefficient = 9.7;
    ctx->flags = 91;
}

int compute_cDDCqlV(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_ujyOs0b(int input) {
    int result = input * 67;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Np0iuJet_ctx_t;

void init_ctx(Np0iuJet_ctx_t *ctx) {
    ctx->id = 9680;
    ctx->coefficient = 1.3;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} cGDwwDeV_ctx_t;

void init_ctx(cGDwwDeV_ctx_t *ctx) {
    ctx->id = 2396;
    ctx->coefficient = 1.5;
    ctx->flags = 250;
}

int compute_hAJxv1O(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} P9hKMM3M_ctx_t;

void init_ctx(P9hKMM3M_ctx_t *ctx) {
    ctx->id = 4741;
    ctx->coefficient = 1.7;
    ctx->flags = 41;
}

int compute_mJI6dh7(int input) {
    int result = input * 19;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} xLC9E9R8_ctx_t;

void init_ctx(xLC9E9R8_ctx_t *ctx) {
    ctx->id = 7188;
    ctx->coefficient = 8.5;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} kAUNOODd_ctx_t;

void init_ctx(kAUNOODd_ctx_t *ctx) {
    ctx->id = 1645;
    ctx->coefficient = 3.9;
    ctx->flags = 72;
}

int compute_BqV7VrQ(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_mk5ob3h(int input) {
    int result = input * 6;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} WyeuEbnN_ctx_t;

void init_ctx(WyeuEbnN_ctx_t *ctx) {
    ctx->id = 4030;
    ctx->coefficient = 4.9;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} PK6hQq7r_ctx_t;

void init_ctx(PK6hQq7r_ctx_t *ctx) {
    ctx->id = 1458;
    ctx->coefficient = 1.0;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 0WryULge_ctx_t;

void init_ctx(0WryULge_ctx_t *ctx) {
    ctx->id = 6124;
    ctx->coefficient = 5.5;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} vvAkH8LP_ctx_t;

void init_ctx(vvAkH8LP_ctx_t *ctx) {
    ctx->id = 9948;
    ctx->coefficient = 7.9;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Op975qvb_ctx_t;

void init_ctx(Op975qvb_ctx_t *ctx) {
    ctx->id = 4952;
    ctx->coefficient = 2.0;
    ctx->flags = 56;
}

int compute_Qgek2Zj(int input) {
    int result = input * 29;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} sO5MzW4r_ctx_t;

void init_ctx(sO5MzW4r_ctx_t *ctx) {
    ctx->id = 8494;
    ctx->coefficient = 9.1;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} GY5YlPlX_ctx_t;

void init_ctx(GY5YlPlX_ctx_t *ctx) {
    ctx->id = 4802;
    ctx->coefficient = 2.6;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 10TXb1JZ_ctx_t;

void init_ctx(10TXb1JZ_ctx_t *ctx) {
    ctx->id = 3273;
    ctx->coefficient = 0.2;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 9yy92lZv_ctx_t;

void init_ctx(9yy92lZv_ctx_t *ctx) {
    ctx->id = 7405;
    ctx->coefficient = 7.5;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} v5B8e5iq_ctx_t;

void init_ctx(v5B8e5iq_ctx_t *ctx) {
    ctx->id = 1561;
    ctx->coefficient = 5.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 5zaYJHww_ctx_t;

void init_ctx(5zaYJHww_ctx_t *ctx) {
    ctx->id = 6678;
    ctx->coefficient = 6.2;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} SfLgaGQ9_ctx_t;

void init_ctx(SfLgaGQ9_ctx_t *ctx) {
    ctx->id = 1465;
    ctx->coefficient = 0.7;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} TklOpk9t_ctx_t;

void init_ctx(TklOpk9t_ctx_t *ctx) {
    ctx->id = 5585;
    ctx->coefficient = 1.0;
    ctx->flags = 157;
}

int compute_JWZvwpQ(int input) {
    int result = input * 28;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} OSA8oJSb_ctx_t;

void init_ctx(OSA8oJSb_ctx_t *ctx) {
    ctx->id = 6691;
    ctx->coefficient = 3.0;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} v8P4KHeJ_ctx_t;

void init_ctx(v8P4KHeJ_ctx_t *ctx) {
    ctx->id = 7769;
    ctx->coefficient = 5.1;
    ctx->flags = 187;
}

int compute_uoRqYBh(int input) {
    int result = input * 43;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} wmMIXnLY_ctx_t;

void init_ctx(wmMIXnLY_ctx_t *ctx) {
    ctx->id = 2505;
    ctx->coefficient = 0.8;
    ctx->flags = 201;
}

int compute_xl5Piwo(int input) {
    int result = input * 18;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} MgaPsZwE_ctx_t;

void init_ctx(MgaPsZwE_ctx_t *ctx) {
    ctx->id = 1113;
    ctx->coefficient = 2.3;
    ctx->flags = 220;
}

int compute_fDxW0MZ(int input) {
    int result = input * 41;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} J5C6zw4K_ctx_t;

void init_ctx(J5C6zw4K_ctx_t *ctx) {
    ctx->id = 1364;
    ctx->coefficient = 8.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 3eXMz0r0_ctx_t;

void init_ctx(3eXMz0r0_ctx_t *ctx) {
    ctx->id = 7746;
    ctx->coefficient = 1.2;
    ctx->flags = 244;
}

int compute_kO7haJW(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_NTAw8PJ(int input) {
    int result = input * 51;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 5LRm36eq_ctx_t;

void init_ctx(5LRm36eq_ctx_t *ctx) {
    ctx->id = 6530;
    ctx->coefficient = 2.7;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} 3Qm74YXo_ctx_t;

void init_ctx(3Qm74YXo_ctx_t *ctx) {
    ctx->id = 9739;
    ctx->coefficient = 1.5;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} yCI6dsgX_ctx_t;

void init_ctx(yCI6dsgX_ctx_t *ctx) {
    ctx->id = 7373;
    ctx->coefficient = 1.9;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Q0zSJA16_ctx_t;

void init_ctx(Q0zSJA16_ctx_t *ctx) {
    ctx->id = 8397;
    ctx->coefficient = 1.8;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} imz0t5NQ_ctx_t;

void init_ctx(imz0t5NQ_ctx_t *ctx) {
    ctx->id = 3806;
    ctx->coefficient = 3.5;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} AdjnSP8Q_ctx_t;

void init_ctx(AdjnSP8Q_ctx_t *ctx) {
    ctx->id = 3676;
    ctx->coefficient = 4.5;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 23pXoUob_ctx_t;

void init_ctx(23pXoUob_ctx_t *ctx) {
    ctx->id = 5134;
    ctx->coefficient = 4.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 34tTeAba_ctx_t;

void init_ctx(34tTeAba_ctx_t *ctx) {
    ctx->id = 5391;
    ctx->coefficient = 7.1;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 9TQBJ8s2_ctx_t;

void init_ctx(9TQBJ8s2_ctx_t *ctx) {
    ctx->id = 5555;
    ctx->coefficient = 2.2;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} lHZL4rcS_ctx_t;

void init_ctx(lHZL4rcS_ctx_t *ctx) {
    ctx->id = 4079;
    ctx->coefficient = 1.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} RkmWHFOA_ctx_t;

void init_ctx(RkmWHFOA_ctx_t *ctx) {
    ctx->id = 6948;
    ctx->coefficient = 9.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DKDDFYOI_ctx_t;

void init_ctx(DKDDFYOI_ctx_t *ctx) {
    ctx->id = 4301;
    ctx->coefficient = 7.2;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 9c4Qy0On_ctx_t;

void init_ctx(9c4Qy0On_ctx_t *ctx) {
    ctx->id = 2410;
    ctx->coefficient = 3.6;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} rLl5VSyG_ctx_t;

void init_ctx(rLl5VSyG_ctx_t *ctx) {
    ctx->id = 3073;
    ctx->coefficient = 5.4;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} geIAw7wQ_ctx_t;

void init_ctx(geIAw7wQ_ctx_t *ctx) {
    ctx->id = 2468;
    ctx->coefficient = 5.9;
    ctx->flags = 133;
}

int compute_Eu2HpQY(int input) {
    int result = input * 12;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} GXsqOnzI_ctx_t;

void init_ctx(GXsqOnzI_ctx_t *ctx) {
    ctx->id = 6845;
    ctx->coefficient = 1.2;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} bs26QDD9_ctx_t;

void init_ctx(bs26QDD9_ctx_t *ctx) {
    ctx->id = 4660;
    ctx->coefficient = 2.8;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} oBvtkdhl_ctx_t;

void init_ctx(oBvtkdhl_ctx_t *ctx) {
    ctx->id = 2204;
    ctx->coefficient = 1.4;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 7gj8DiGX_ctx_t;

void init_ctx(7gj8DiGX_ctx_t *ctx) {
    ctx->id = 1280;
    ctx->coefficient = 5.5;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2EaULI5T_ctx_t;

void init_ctx(2EaULI5T_ctx_t *ctx) {
    ctx->id = 7551;
    ctx->coefficient = 9.4;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} MzFHlNvY_ctx_t;

void init_ctx(MzFHlNvY_ctx_t *ctx) {
    ctx->id = 9312;
    ctx->coefficient = 9.4;
    ctx->flags = 92;
}

int compute_gGHLeXN(int input) {
    int result = input * 6;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} n0PoFVYW_ctx_t;

void init_ctx(n0PoFVYW_ctx_t *ctx) {
    ctx->id = 2314;
    ctx->coefficient = 8.4;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} KfGbXDSF_ctx_t;

void init_ctx(KfGbXDSF_ctx_t *ctx) {
    ctx->id = 9979;
    ctx->coefficient = 5.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} JcMK8pMd_ctx_t;

void init_ctx(JcMK8pMd_ctx_t *ctx) {
    ctx->id = 2004;
    ctx->coefficient = 0.5;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} BuPmNPCH_ctx_t;

void init_ctx(BuPmNPCH_ctx_t *ctx) {
    ctx->id = 5311;
    ctx->coefficient = 4.2;
    ctx->flags = 4;
}

int compute_SoefF0D(int input) {
    int result = input * 18;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} ECmogLVh_ctx_t;

void init_ctx(ECmogLVh_ctx_t *ctx) {
    ctx->id = 6755;
    ctx->coefficient = 4.5;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Q1anJSBm_ctx_t;

void init_ctx(Q1anJSBm_ctx_t *ctx) {
    ctx->id = 4450;
    ctx->coefficient = 6.3;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} T683BHJA_ctx_t;

void init_ctx(T683BHJA_ctx_t *ctx) {
    ctx->id = 6327;
    ctx->coefficient = 1.5;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} DMdJVGIB_ctx_t;

void init_ctx(DMdJVGIB_ctx_t *ctx) {
    ctx->id = 7899;
    ctx->coefficient = 4.0;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} rfXjq5xu_ctx_t;

void init_ctx(rfXjq5xu_ctx_t *ctx) {
    ctx->id = 7440;
    ctx->coefficient = 4.2;
    ctx->flags = 192;
}

int compute_tlfBTin(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} am1UqAMe_ctx_t;

void init_ctx(am1UqAMe_ctx_t *ctx) {
    ctx->id = 2009;
    ctx->coefficient = 2.0;
    ctx->flags = 246;
}

int compute_xwwIG1o(int input) {
    int result = input * 13;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_JTGzl1W(int input) {
    int result = input * 19;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_EgQS9Sr(int input) {
    int result = input * 21;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_uPfp55u(int input) {
    int result = input * 56;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} MJAcYwDx_ctx_t;

void init_ctx(MJAcYwDx_ctx_t *ctx) {
    ctx->id = 7160;
    ctx->coefficient = 9.8;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} VQIABGzN_ctx_t;

void init_ctx(VQIABGzN_ctx_t *ctx) {
    ctx->id = 3067;
    ctx->coefficient = 0.8;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} JP1N5dM2_ctx_t;

void init_ctx(JP1N5dM2_ctx_t *ctx) {
    ctx->id = 7916;
    ctx->coefficient = 9.6;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} qT6hFXUq_ctx_t;

void init_ctx(qT6hFXUq_ctx_t *ctx) {
    ctx->id = 9536;
    ctx->coefficient = 8.0;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} tDHXscsP_ctx_t;

void init_ctx(tDHXscsP_ctx_t *ctx) {
    ctx->id = 9026;
    ctx->coefficient = 2.6;
    ctx->flags = 2;
}

int compute_jRpb3l7(int input) {
    int result = input * 7;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} pjvutqUd_ctx_t;

void init_ctx(pjvutqUd_ctx_t *ctx) {
    ctx->id = 6914;
    ctx->coefficient = 8.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} OHeSudpe_ctx_t;

void init_ctx(OHeSudpe_ctx_t *ctx) {
    ctx->id = 9264;
    ctx->coefficient = 1.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} R68g3V6X_ctx_t;

void init_ctx(R68g3V6X_ctx_t *ctx) {
    ctx->id = 8120;
    ctx->coefficient = 9.6;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} M1zObkK9_ctx_t;

void init_ctx(M1zObkK9_ctx_t *ctx) {
    ctx->id = 1240;
    ctx->coefficient = 5.2;
    ctx->flags = 72;
}

int compute_SDMSKwQ(int input) {
    int result = input * 30;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_vivg0Nt(int input) {
    int result = input * 54;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_gifUmWk(int input) {
    int result = input * 58;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_mz3EwPx(int input) {
    int result = input * 59;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} r1wfHDcc_ctx_t;

void init_ctx(r1wfHDcc_ctx_t *ctx) {
    ctx->id = 7262;
    ctx->coefficient = 8.1;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} xWdXQpoC_ctx_t;

void init_ctx(xWdXQpoC_ctx_t *ctx) {
    ctx->id = 4961;
    ctx->coefficient = 6.7;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} hL5TVhqn_ctx_t;

void init_ctx(hL5TVhqn_ctx_t *ctx) {
    ctx->id = 2069;
    ctx->coefficient = 0.7;
    ctx->flags = 13;
}

int compute_UEpAQps(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} TCm0iorX_ctx_t;

void init_ctx(TCm0iorX_ctx_t *ctx) {
    ctx->id = 6049;
    ctx->coefficient = 0.8;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} fA0oiXth_ctx_t;

void init_ctx(fA0oiXth_ctx_t *ctx) {
    ctx->id = 2091;
    ctx->coefficient = 1.9;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} j2LjgExe_ctx_t;

void init_ctx(j2LjgExe_ctx_t *ctx) {
    ctx->id = 2014;
    ctx->coefficient = 9.1;
    ctx->flags = 187;
}

int compute_K5Ny9RG(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} D4iLAQTG_ctx_t;

void init_ctx(D4iLAQTG_ctx_t *ctx) {
    ctx->id = 4411;
    ctx->coefficient = 8.4;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} KSCy0UNy_ctx_t;

void init_ctx(KSCy0UNy_ctx_t *ctx) {
    ctx->id = 8813;
    ctx->coefficient = 2.2;
    ctx->flags = 63;
}

int compute_VvXZEYT(int input) {
    int result = input * 26;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 6Qo7pyWN_ctx_t;

void init_ctx(6Qo7pyWN_ctx_t *ctx) {
    ctx->id = 6773;
    ctx->coefficient = 9.8;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} H6eVGNmI_ctx_t;

void init_ctx(H6eVGNmI_ctx_t *ctx) {
    ctx->id = 8270;
    ctx->coefficient = 3.3;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 2wVH7A94_ctx_t;

void init_ctx(2wVH7A94_ctx_t *ctx) {
    ctx->id = 2443;
    ctx->coefficient = 8.4;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Frzw00XO_ctx_t;

void init_ctx(Frzw00XO_ctx_t *ctx) {
    ctx->id = 5344;
    ctx->coefficient = 6.5;
    ctx->flags = 46;
}

int compute_O63BczL(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_zBYo1Gt(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} sTZTVunq_ctx_t;

void init_ctx(sTZTVunq_ctx_t *ctx) {
    ctx->id = 7639;
    ctx->coefficient = 0.6;
    ctx->flags = 96;
}

int compute_NfF5nbm(int input) {
    int result = input * 7;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} DizpQzwn_ctx_t;

void init_ctx(DizpQzwn_ctx_t *ctx) {
    ctx->id = 2453;
    ctx->coefficient = 1.9;
    ctx->flags = 69;
}

int compute_JttniR1(int input) {
    int result = input * 47;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} JCE29RWQ_ctx_t;

void init_ctx(JCE29RWQ_ctx_t *ctx) {
    ctx->id = 6026;
    ctx->coefficient = 1.8;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} Sf4R7Cc2_ctx_t;

void init_ctx(Sf4R7Cc2_ctx_t *ctx) {
    ctx->id = 5358;
    ctx->coefficient = 0.7;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} CDDyPkly_ctx_t;

void init_ctx(CDDyPkly_ctx_t *ctx) {
    ctx->id = 2879;
    ctx->coefficient = 8.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} JBdies1N_ctx_t;

void init_ctx(JBdies1N_ctx_t *ctx) {
    ctx->id = 1254;
    ctx->coefficient = 9.8;
    ctx->flags = 221;
}

int compute_vtxceGw(int input) {
    int result = input * 9;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_hXG7SJD(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} g8SLmyuQ_ctx_t;

void init_ctx(g8SLmyuQ_ctx_t *ctx) {
    ctx->id = 1517;
    ctx->coefficient = 4.1;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 4VIV5GKP_ctx_t;

void init_ctx(4VIV5GKP_ctx_t *ctx) {
    ctx->id = 9657;
    ctx->coefficient = 4.6;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} GdCkG5D3_ctx_t;

void init_ctx(GdCkG5D3_ctx_t *ctx) {
    ctx->id = 5193;
    ctx->coefficient = 9.2;
    ctx->flags = 3;
}

int compute_MmYSfx0(int input) {
    int result = input * 45;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_fYJYM3m(int input) {
    int result = input * 38;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} KCiEZTuj_ctx_t;

void init_ctx(KCiEZTuj_ctx_t *ctx) {
    ctx->id = 9940;
    ctx->coefficient = 1.2;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} LItin2Yc_ctx_t;

void init_ctx(LItin2Yc_ctx_t *ctx) {
    ctx->id = 8036;
    ctx->coefficient = 2.0;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 24BJOChw_ctx_t;

void init_ctx(24BJOChw_ctx_t *ctx) {
    ctx->id = 3207;
    ctx->coefficient = 3.8;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} JtqjFHO9_ctx_t;

void init_ctx(JtqjFHO9_ctx_t *ctx) {
    ctx->id = 8875;
    ctx->coefficient = 2.1;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} PgZvo2MW_ctx_t;

void init_ctx(PgZvo2MW_ctx_t *ctx) {
    ctx->id = 9169;
    ctx->coefficient = 10.0;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} Ms24cgYb_ctx_t;

void init_ctx(Ms24cgYb_ctx_t *ctx) {
    ctx->id = 4460;
    ctx->coefficient = 3.5;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} I76YMeoS_ctx_t;

void init_ctx(I76YMeoS_ctx_t *ctx) {
    ctx->id = 5246;
    ctx->coefficient = 3.7;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7lVUko0R_ctx_t;

void init_ctx(7lVUko0R_ctx_t *ctx) {
    ctx->id = 2375;
    ctx->coefficient = 1.3;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} w5jgjtP3_ctx_t;

void init_ctx(w5jgjtP3_ctx_t *ctx) {
    ctx->id = 8200;
    ctx->coefficient = 6.2;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ePvvgE0Z_ctx_t;

void init_ctx(ePvvgE0Z_ctx_t *ctx) {
    ctx->id = 3587;
    ctx->coefficient = 9.7;
    ctx->flags = 58;
}

int compute_kf0sJYQ(int input) {
    int result = input * 70;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_QJOMSVU(int input) {
    int result = input * 28;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ZFaYnaJb_ctx_t;

void init_ctx(ZFaYnaJb_ctx_t *ctx) {
    ctx->id = 9637;
    ctx->coefficient = 6.6;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} NKGtnWfE_ctx_t;

void init_ctx(NKGtnWfE_ctx_t *ctx) {
    ctx->id = 3970;
    ctx->coefficient = 2.6;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ha4B76cM_ctx_t;

void init_ctx(ha4B76cM_ctx_t *ctx) {
    ctx->id = 4235;
    ctx->coefficient = 6.5;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} LMoKQwHg_ctx_t;

void init_ctx(LMoKQwHg_ctx_t *ctx) {
    ctx->id = 1939;
    ctx->coefficient = 3.2;
    ctx->flags = 48;
}

int compute_BFwhVPq(int input) {
    int result = input * 58;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Azvmw6Py_ctx_t;

void init_ctx(Azvmw6Py_ctx_t *ctx) {
    ctx->id = 4849;
    ctx->coefficient = 5.8;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} HqsKNuuq_ctx_t;

void init_ctx(HqsKNuuq_ctx_t *ctx) {
    ctx->id = 9078;
    ctx->coefficient = 2.6;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} XcINzgJp_ctx_t;

void init_ctx(XcINzgJp_ctx_t *ctx) {
    ctx->id = 8238;
    ctx->coefficient = 6.1;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} pvyZFJsk_ctx_t;

void init_ctx(pvyZFJsk_ctx_t *ctx) {
    ctx->id = 8969;
    ctx->coefficient = 0.1;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} w2lu48sV_ctx_t;

void init_ctx(w2lu48sV_ctx_t *ctx) {
    ctx->id = 9072;
    ctx->coefficient = 0.4;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} tqait8Ia_ctx_t;

void init_ctx(tqait8Ia_ctx_t *ctx) {
    ctx->id = 1323;
    ctx->coefficient = 1.6;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Ju53GYWI_ctx_t;

void init_ctx(Ju53GYWI_ctx_t *ctx) {
    ctx->id = 3177;
    ctx->coefficient = 2.4;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Y6gQGFbM_ctx_t;

void init_ctx(Y6gQGFbM_ctx_t *ctx) {
    ctx->id = 8769;
    ctx->coefficient = 3.7;
    ctx->flags = 98;
}

int compute_1Kl1PHD(int input) {
    int result = input * 48;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} VeFPYwF1_ctx_t;

void init_ctx(VeFPYwF1_ctx_t *ctx) {
    ctx->id = 7462;
    ctx->coefficient = 3.1;
    ctx->flags = 80;
}

int compute_ZXNbaYc(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 0upV6U7t_ctx_t;

void init_ctx(0upV6U7t_ctx_t *ctx) {
    ctx->id = 8652;
    ctx->coefficient = 0.9;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} qfxUCWub_ctx_t;

void init_ctx(qfxUCWub_ctx_t *ctx) {
    ctx->id = 9742;
    ctx->coefficient = 7.0;
    ctx->flags = 85;
}

int compute_yP5LTL3(int input) {
    int result = input * 55;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4Q2EhVv6_ctx_t;

void init_ctx(4Q2EhVv6_ctx_t *ctx) {
    ctx->id = 7708;
    ctx->coefficient = 8.5;
    ctx->flags = 16;
}

int compute_FfXNgs6(int input) {
    int result = input * 50;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

int compute_IosxMxk(int input) {
    int result = input * 7;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_FFxFq5y(int input) {
    int result = input * 50;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_YE9Knx5(int input) {
    int result = input * 17;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} nB16iSol_ctx_t;

void init_ctx(nB16iSol_ctx_t *ctx) {
    ctx->id = 3525;
    ctx->coefficient = 3.5;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ULXh2Yrq_ctx_t;

void init_ctx(ULXh2Yrq_ctx_t *ctx) {
    ctx->id = 5885;
    ctx->coefficient = 6.2;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} zEZw0HNj_ctx_t;

void init_ctx(zEZw0HNj_ctx_t *ctx) {
    ctx->id = 5329;
    ctx->coefficient = 5.7;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} dhyxPz05_ctx_t;

void init_ctx(dhyxPz05_ctx_t *ctx) {
    ctx->id = 2035;
    ctx->coefficient = 7.8;
    ctx->flags = 62;
}

int compute_XiUvB8F(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} U7nFvJb1_ctx_t;

void init_ctx(U7nFvJb1_ctx_t *ctx) {
    ctx->id = 6413;
    ctx->coefficient = 5.2;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} CmNvjsYX_ctx_t;

void init_ctx(CmNvjsYX_ctx_t *ctx) {
    ctx->id = 7994;
    ctx->coefficient = 7.7;
    ctx->flags = 162;
}

int compute_MjjXMaR(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} dkVamYYh_ctx_t;

void init_ctx(dkVamYYh_ctx_t *ctx) {
    ctx->id = 3633;
    ctx->coefficient = 3.0;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} YuCW8zOD_ctx_t;

void init_ctx(YuCW8zOD_ctx_t *ctx) {
    ctx->id = 7640;
    ctx->coefficient = 2.4;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} RR71nc3I_ctx_t;

void init_ctx(RR71nc3I_ctx_t *ctx) {
    ctx->id = 8410;
    ctx->coefficient = 2.5;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 4Gagwr3G_ctx_t;

void init_ctx(4Gagwr3G_ctx_t *ctx) {
    ctx->id = 7356;
    ctx->coefficient = 7.8;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} LTyzUez1_ctx_t;

void init_ctx(LTyzUez1_ctx_t *ctx) {
    ctx->id = 5156;
    ctx->coefficient = 9.7;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} K9IDt2AS_ctx_t;

void init_ctx(K9IDt2AS_ctx_t *ctx) {
    ctx->id = 3174;
    ctx->coefficient = 5.8;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 26Vcfct1_ctx_t;

void init_ctx(26Vcfct1_ctx_t *ctx) {
    ctx->id = 7943;
    ctx->coefficient = 1.3;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} geyQse7Y_ctx_t;

void init_ctx(geyQse7Y_ctx_t *ctx) {
    ctx->id = 1436;
    ctx->coefficient = 1.7;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} RxPrnml1_ctx_t;

void init_ctx(RxPrnml1_ctx_t *ctx) {
    ctx->id = 6498;
    ctx->coefficient = 4.3;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2aeGhvXO_ctx_t;

void init_ctx(2aeGhvXO_ctx_t *ctx) {
    ctx->id = 4588;
    ctx->coefficient = 7.5;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 9od7x49g_ctx_t;

void init_ctx(9od7x49g_ctx_t *ctx) {
    ctx->id = 6381;
    ctx->coefficient = 0.5;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} fqOikkrq_ctx_t;

void init_ctx(fqOikkrq_ctx_t *ctx) {
    ctx->id = 9852;
    ctx->coefficient = 9.6;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} mMLaSnoA_ctx_t;

void init_ctx(mMLaSnoA_ctx_t *ctx) {
    ctx->id = 1923;
    ctx->coefficient = 3.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} ol4Yp5Jt_ctx_t;

void init_ctx(ol4Yp5Jt_ctx_t *ctx) {
    ctx->id = 7316;
    ctx->coefficient = 1.3;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} a9KTtzUo_ctx_t;

void init_ctx(a9KTtzUo_ctx_t *ctx) {
    ctx->id = 7547;
    ctx->coefficient = 6.2;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} jTi7cKR9_ctx_t;

void init_ctx(jTi7cKR9_ctx_t *ctx) {
    ctx->id = 1884;
    ctx->coefficient = 4.1;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} BLyFI8U8_ctx_t;

void init_ctx(BLyFI8U8_ctx_t *ctx) {
    ctx->id = 3870;
    ctx->coefficient = 3.6;
    ctx->flags = 50;
}

int compute_3bUnR0G(int input) {
    int result = input * 6;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} of9qQD08_ctx_t;

void init_ctx(of9qQD08_ctx_t *ctx) {
    ctx->id = 3784;
    ctx->coefficient = 5.5;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} u4ZuHvbf_ctx_t;

void init_ctx(u4ZuHvbf_ctx_t *ctx) {
    ctx->id = 8484;
    ctx->coefficient = 4.6;
    ctx->flags = 104;
}

int compute_4lUZsFg(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} KWxGFD3Z_ctx_t;

void init_ctx(KWxGFD3Z_ctx_t *ctx) {
    ctx->id = 3839;
    ctx->coefficient = 1.9;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} efBRsFUf_ctx_t;

void init_ctx(efBRsFUf_ctx_t *ctx) {
    ctx->id = 9393;
    ctx->coefficient = 7.3;
    ctx->flags = 147;
}

int compute_d4Z3dOV(int input) {
    int result = input * 28;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_22jpRpz(int input) {
    int result = input * 46;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 2lnqMJ79_ctx_t;

void init_ctx(2lnqMJ79_ctx_t *ctx) {
    ctx->id = 9598;
    ctx->coefficient = 0.9;
    ctx->flags = 25;
}

int compute_ycfDl9C(int input) {
    int result = input * 65;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_394C75R(int input) {
    int result = input * 38;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_Z6opwaD(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_5qkgXXr(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 0PxkD4Zw_ctx_t;

void init_ctx(0PxkD4Zw_ctx_t *ctx) {
    ctx->id = 2025;
    ctx->coefficient = 3.5;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} SBarpSRr_ctx_t;

void init_ctx(SBarpSRr_ctx_t *ctx) {
    ctx->id = 1872;
    ctx->coefficient = 6.2;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} LJodWxzr_ctx_t;

void init_ctx(LJodWxzr_ctx_t *ctx) {
    ctx->id = 9217;
    ctx->coefficient = 10.0;
    ctx->flags = 151;
}

int compute_B2GsIs2(int input) {
    int result = input * 46;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} lS0W2DGa_ctx_t;

void init_ctx(lS0W2DGa_ctx_t *ctx) {
    ctx->id = 4069;
    ctx->coefficient = 5.0;
    ctx->flags = 79;
}

int compute_zKx8KOn(int input) {
    int result = input * 8;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} neC9iYT5_ctx_t;

void init_ctx(neC9iYT5_ctx_t *ctx) {
    ctx->id = 6396;
    ctx->coefficient = 7.4;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} GJ9u8XyQ_ctx_t;

void init_ctx(GJ9u8XyQ_ctx_t *ctx) {
    ctx->id = 9501;
    ctx->coefficient = 8.3;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} QDVl9dbm_ctx_t;

void init_ctx(QDVl9dbm_ctx_t *ctx) {
    ctx->id = 2206;
    ctx->coefficient = 3.7;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} Af7rA5wt_ctx_t;

void init_ctx(Af7rA5wt_ctx_t *ctx) {
    ctx->id = 6093;
    ctx->coefficient = 2.6;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} zT5IquqA_ctx_t;

void init_ctx(zT5IquqA_ctx_t *ctx) {
    ctx->id = 6296;
    ctx->coefficient = 4.9;
    ctx->flags = 248;
}

int compute_QI7ioER(int input) {
    int result = input * 64;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_2wbUt30(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Qc8V5dtS_ctx_t;

void init_ctx(Qc8V5dtS_ctx_t *ctx) {
    ctx->id = 5458;
    ctx->coefficient = 7.4;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 3BTLfzfQ_ctx_t;

void init_ctx(3BTLfzfQ_ctx_t *ctx) {
    ctx->id = 1432;
    ctx->coefficient = 7.4;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 4BlRrSl6_ctx_t;

void init_ctx(4BlRrSl6_ctx_t *ctx) {
    ctx->id = 1115;
    ctx->coefficient = 6.4;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} HmQFgM8z_ctx_t;

void init_ctx(HmQFgM8z_ctx_t *ctx) {
    ctx->id = 5185;
    ctx->coefficient = 1.9;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} fXx5Dz3J_ctx_t;

void init_ctx(fXx5Dz3J_ctx_t *ctx) {
    ctx->id = 7492;
    ctx->coefficient = 5.4;
    ctx->flags = 63;
}

int compute_zkproGx(int input) {
    int result = input * 50;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} CiSZQYzC_ctx_t;

void init_ctx(CiSZQYzC_ctx_t *ctx) {
    ctx->id = 1292;
    ctx->coefficient = 3.5;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} QRGbGOMo_ctx_t;

void init_ctx(QRGbGOMo_ctx_t *ctx) {
    ctx->id = 6483;
    ctx->coefficient = 0.2;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} fHkV7RBR_ctx_t;

void init_ctx(fHkV7RBR_ctx_t *ctx) {
    ctx->id = 4629;
    ctx->coefficient = 5.5;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} EJQI6B26_ctx_t;

void init_ctx(EJQI6B26_ctx_t *ctx) {
    ctx->id = 5298;
    ctx->coefficient = 8.0;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} nijgweJC_ctx_t;

void init_ctx(nijgweJC_ctx_t *ctx) {
    ctx->id = 2166;
    ctx->coefficient = 8.5;
    ctx->flags = 91;
}

int compute_rluMBcd(int input) {
    int result = input * 40;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} JztCwjNt_ctx_t;

void init_ctx(JztCwjNt_ctx_t *ctx) {
    ctx->id = 9515;
    ctx->coefficient = 5.5;
    ctx->flags = 6;
}

int compute_yRwCzo8(int input) {
    int result = input * 70;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} aW2U0W23_ctx_t;

void init_ctx(aW2U0W23_ctx_t *ctx) {
    ctx->id = 5363;
    ctx->coefficient = 3.4;
    ctx->flags = 32;
}

int compute_wnuQwv1(int input) {
    int result = input * 50;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_dmbQsRr(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 3GSdFFRS_ctx_t;

void init_ctx(3GSdFFRS_ctx_t *ctx) {
    ctx->id = 9251;
    ctx->coefficient = 2.0;
    ctx->flags = 100;
}

int compute_c31Q0vw(int input) {
    int result = input * 30;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} vg89UTXs_ctx_t;

void init_ctx(vg89UTXs_ctx_t *ctx) {
    ctx->id = 6229;
    ctx->coefficient = 0.3;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} jcUPJdOw_ctx_t;

void init_ctx(jcUPJdOw_ctx_t *ctx) {
    ctx->id = 5272;
    ctx->coefficient = 4.8;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} rMZCC90B_ctx_t;

void init_ctx(rMZCC90B_ctx_t *ctx) {
    ctx->id = 4825;
    ctx->coefficient = 7.0;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 2sl8CXcu_ctx_t;

void init_ctx(2sl8CXcu_ctx_t *ctx) {
    ctx->id = 7914;
    ctx->coefficient = 5.8;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} taOcNTEA_ctx_t;

void init_ctx(taOcNTEA_ctx_t *ctx) {
    ctx->id = 9202;
    ctx->coefficient = 6.4;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hLDjN8XC_ctx_t;

void init_ctx(hLDjN8XC_ctx_t *ctx) {
    ctx->id = 1638;
    ctx->coefficient = 2.8;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} cWoRY8Rd_ctx_t;

void init_ctx(cWoRY8Rd_ctx_t *ctx) {
    ctx->id = 7504;
    ctx->coefficient = 8.3;
    ctx->flags = 110;
}

int compute_i6h0Q30(int input) {
    int result = input * 30;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} WD8NEWKH_ctx_t;

void init_ctx(WD8NEWKH_ctx_t *ctx) {
    ctx->id = 5525;
    ctx->coefficient = 2.9;
    ctx->flags = 108;
}

int compute_WmwXAqK(int input) {
    int result = input * 48;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_CeuYoQB(int input) {
    int result = input * 60;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_jSJNhrY(int input) {
    int result = input * 46;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} zh6ZfL5F_ctx_t;

void init_ctx(zh6ZfL5F_ctx_t *ctx) {
    ctx->id = 7104;
    ctx->coefficient = 7.5;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} pAHmAbor_ctx_t;

void init_ctx(pAHmAbor_ctx_t *ctx) {
    ctx->id = 7090;
    ctx->coefficient = 4.0;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} PcABzLBX_ctx_t;

void init_ctx(PcABzLBX_ctx_t *ctx) {
    ctx->id = 5225;
    ctx->coefficient = 3.9;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} txgvsnvm_ctx_t;

void init_ctx(txgvsnvm_ctx_t *ctx) {
    ctx->id = 3448;
    ctx->coefficient = 8.4;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} RVOy3kVk_ctx_t;

void init_ctx(RVOy3kVk_ctx_t *ctx) {
    ctx->id = 9840;
    ctx->coefficient = 8.1;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} JhfC5wJz_ctx_t;

void init_ctx(JhfC5wJz_ctx_t *ctx) {
    ctx->id = 6145;
    ctx->coefficient = 5.2;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} E31INHyv_ctx_t;

void init_ctx(E31INHyv_ctx_t *ctx) {
    ctx->id = 8828;
    ctx->coefficient = 7.2;
    ctx->flags = 85;
}

int compute_TqQbwuU(int input) {
    int result = input * 4;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} fcaleDOZ_ctx_t;

void init_ctx(fcaleDOZ_ctx_t *ctx) {
    ctx->id = 1029;
    ctx->coefficient = 0.5;
    ctx->flags = 69;
}

int compute_56lU2Re(int input) {
    int result = input * 6;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_fa5DKrj(int input) {
    int result = input * 23;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_ICj6FQZ(int input) {
    int result = input * 62;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_d0jpbnw(int input) {
    int result = input * 70;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_QjxfKXq(int input) {
    int result = input * 63;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_QiwRE3L(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} tEQHhbtP_ctx_t;

void init_ctx(tEQHhbtP_ctx_t *ctx) {
    ctx->id = 5729;
    ctx->coefficient = 9.9;
    ctx->flags = 198;
}

int compute_TiVQ7t0(int input) {
    int result = input * 63;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_gdU6SDi(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_o2yC6iL(int input) {
    int result = input * 15;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} S2s1dDxa_ctx_t;

void init_ctx(S2s1dDxa_ctx_t *ctx) {
    ctx->id = 5320;
    ctx->coefficient = 9.7;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} VlRIlJEx_ctx_t;

void init_ctx(VlRIlJEx_ctx_t *ctx) {
    ctx->id = 8320;
    ctx->coefficient = 1.0;
    ctx->flags = 191;
}

int compute_9PqfS2F(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} Cewq0JTa_ctx_t;

void init_ctx(Cewq0JTa_ctx_t *ctx) {
    ctx->id = 5555;
    ctx->coefficient = 10.0;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} JkwKtSHu_ctx_t;

void init_ctx(JkwKtSHu_ctx_t *ctx) {
    ctx->id = 3992;
    ctx->coefficient = 4.4;
    ctx->flags = 185;
}

int compute_3tUt0dT(int input) {
    int result = input * 48;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} xiOZJzkq_ctx_t;

void init_ctx(xiOZJzkq_ctx_t *ctx) {
    ctx->id = 7862;
    ctx->coefficient = 6.8;
    ctx->flags = 215;
}

int compute_0n6f0MC(int input) {
    int result = input * 57;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} HppDrqFE_ctx_t;

void init_ctx(HppDrqFE_ctx_t *ctx) {
    ctx->id = 4202;
    ctx->coefficient = 7.3;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} wL2GU1Vr_ctx_t;

void init_ctx(wL2GU1Vr_ctx_t *ctx) {
    ctx->id = 4437;
    ctx->coefficient = 0.7;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} jugMNpPL_ctx_t;

void init_ctx(jugMNpPL_ctx_t *ctx) {
    ctx->id = 7960;
    ctx->coefficient = 4.0;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} o3xGm8VT_ctx_t;

void init_ctx(o3xGm8VT_ctx_t *ctx) {
    ctx->id = 5613;
    ctx->coefficient = 1.7;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} G60jlAJ4_ctx_t;

void init_ctx(G60jlAJ4_ctx_t *ctx) {
    ctx->id = 2454;
    ctx->coefficient = 1.9;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} D5EOMdEV_ctx_t;

void init_ctx(D5EOMdEV_ctx_t *ctx) {
    ctx->id = 8167;
    ctx->coefficient = 3.2;
    ctx->flags = 88;
}

int compute_8sW9VIn(int input) {
    int result = input * 54;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 6GS4OmNb_ctx_t;

void init_ctx(6GS4OmNb_ctx_t *ctx) {
    ctx->id = 7929;
    ctx->coefficient = 7.2;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} tC2KIJdr_ctx_t;

void init_ctx(tC2KIJdr_ctx_t *ctx) {
    ctx->id = 8951;
    ctx->coefficient = 6.8;
    ctx->flags = 33;
}

int compute_hSp9CRw(int input) {
    int result = input * 6;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} yEgiTOyl_ctx_t;

void init_ctx(yEgiTOyl_ctx_t *ctx) {
    ctx->id = 3168;
    ctx->coefficient = 5.5;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} kAtiXzJH_ctx_t;

void init_ctx(kAtiXzJH_ctx_t *ctx) {
    ctx->id = 5535;
    ctx->coefficient = 0.5;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} AKvhMn3t_ctx_t;

void init_ctx(AKvhMn3t_ctx_t *ctx) {
    ctx->id = 4133;
    ctx->coefficient = 9.7;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} YGRs2IAT_ctx_t;

void init_ctx(YGRs2IAT_ctx_t *ctx) {
    ctx->id = 4537;
    ctx->coefficient = 2.7;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} s8L8Zvta_ctx_t;

void init_ctx(s8L8Zvta_ctx_t *ctx) {
    ctx->id = 3429;
    ctx->coefficient = 5.8;
    ctx->flags = 25;
}

int compute_Zy29ySN(int input) {
    int result = input * 57;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_FR1gypR(int input) {
    int result = input * 41;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} JkJiR9FO_ctx_t;

void init_ctx(JkJiR9FO_ctx_t *ctx) {
    ctx->id = 8437;
    ctx->coefficient = 4.4;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} JjO2nhdz_ctx_t;

void init_ctx(JjO2nhdz_ctx_t *ctx) {
    ctx->id = 1232;
    ctx->coefficient = 3.6;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} PAMykHla_ctx_t;

void init_ctx(PAMykHla_ctx_t *ctx) {
    ctx->id = 4209;
    ctx->coefficient = 2.0;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ohKGJE8N_ctx_t;

void init_ctx(ohKGJE8N_ctx_t *ctx) {
    ctx->id = 2001;
    ctx->coefficient = 0.8;
    ctx->flags = 230;
}

int compute_xXMz6ep(int input) {
    int result = input * 52;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_RPKfcYr(int input) {
    int result = input * 59;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} wKmyaE8E_ctx_t;

void init_ctx(wKmyaE8E_ctx_t *ctx) {
    ctx->id = 4732;
    ctx->coefficient = 6.0;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} lXrP2qN2_ctx_t;

void init_ctx(lXrP2qN2_ctx_t *ctx) {
    ctx->id = 1197;
    ctx->coefficient = 5.5;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} uBx1HYDD_ctx_t;

void init_ctx(uBx1HYDD_ctx_t *ctx) {
    ctx->id = 3943;
    ctx->coefficient = 8.3;
    ctx->flags = 0;
}

int compute_zN7x9GM(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_7mvsOD0(int input) {
    int result = input * 32;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_5QC9etN(int input) {
    int result = input * 2;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} y9ozhofz_ctx_t;

void init_ctx(y9ozhofz_ctx_t *ctx) {
    ctx->id = 8042;
    ctx->coefficient = 1.2;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} l1XxhelV_ctx_t;

void init_ctx(l1XxhelV_ctx_t *ctx) {
    ctx->id = 6299;
    ctx->coefficient = 4.3;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} mYg0T5zt_ctx_t;

void init_ctx(mYg0T5zt_ctx_t *ctx) {
    ctx->id = 1612;
    ctx->coefficient = 4.0;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 2Mu95M5Y_ctx_t;

void init_ctx(2Mu95M5Y_ctx_t *ctx) {
    ctx->id = 8425;
    ctx->coefficient = 2.6;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} G4SghDZV_ctx_t;

void init_ctx(G4SghDZV_ctx_t *ctx) {
    ctx->id = 8377;
    ctx->coefficient = 6.5;
    ctx->flags = 185;
}

int compute_tqIeT6M(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} TQtT6O4J_ctx_t;

void init_ctx(TQtT6O4J_ctx_t *ctx) {
    ctx->id = 3183;
    ctx->coefficient = 8.7;
    ctx->flags = 48;
}

int compute_ddMQm6r(int input) {
    int result = input * 5;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Z97kZtsu_ctx_t;

void init_ctx(Z97kZtsu_ctx_t *ctx) {
    ctx->id = 6494;
    ctx->coefficient = 0.9;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} EDR0DHiz_ctx_t;

void init_ctx(EDR0DHiz_ctx_t *ctx) {
    ctx->id = 3275;
    ctx->coefficient = 9.6;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} GnxCXDyg_ctx_t;

void init_ctx(GnxCXDyg_ctx_t *ctx) {
    ctx->id = 8757;
    ctx->coefficient = 5.5;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} tSE92qTB_ctx_t;

void init_ctx(tSE92qTB_ctx_t *ctx) {
    ctx->id = 2806;
    ctx->coefficient = 7.7;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} OUTR9lgn_ctx_t;

void init_ctx(OUTR9lgn_ctx_t *ctx) {
    ctx->id = 2360;
    ctx->coefficient = 2.9;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} ppxuFrcu_ctx_t;

void init_ctx(ppxuFrcu_ctx_t *ctx) {
    ctx->id = 3927;
    ctx->coefficient = 4.4;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} lWvRa4yg_ctx_t;

void init_ctx(lWvRa4yg_ctx_t *ctx) {
    ctx->id = 8687;
    ctx->coefficient = 6.7;
    ctx->flags = 24;
}

int compute_EPqFcGI(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_9OR0mfB(int input) {
    int result = input * 52;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} gWqB33Mc_ctx_t;

void init_ctx(gWqB33Mc_ctx_t *ctx) {
    ctx->id = 5592;
    ctx->coefficient = 8.8;
    ctx->flags = 221;
}

int compute_1YPlA4q(int input) {
    int result = input * 44;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} VvF5YHOK_ctx_t;

void init_ctx(VvF5YHOK_ctx_t *ctx) {
    ctx->id = 2074;
    ctx->coefficient = 5.1;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} RSuGgrWm_ctx_t;

void init_ctx(RSuGgrWm_ctx_t *ctx) {
    ctx->id = 5801;
    ctx->coefficient = 5.6;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 1vLXiZ7o_ctx_t;

void init_ctx(1vLXiZ7o_ctx_t *ctx) {
    ctx->id = 3249;
    ctx->coefficient = 0.5;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} aRikBIJo_ctx_t;

void init_ctx(aRikBIJo_ctx_t *ctx) {
    ctx->id = 2129;
    ctx->coefficient = 0.9;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} hovYxEhm_ctx_t;

void init_ctx(hovYxEhm_ctx_t *ctx) {
    ctx->id = 7539;
    ctx->coefficient = 3.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} FmJW4WBi_ctx_t;

void init_ctx(FmJW4WBi_ctx_t *ctx) {
    ctx->id = 6169;
    ctx->coefficient = 3.6;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} NbeP9RMk_ctx_t;

void init_ctx(NbeP9RMk_ctx_t *ctx) {
    ctx->id = 9738;
    ctx->coefficient = 2.0;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} CqjHSccw_ctx_t;

void init_ctx(CqjHSccw_ctx_t *ctx) {
    ctx->id = 6413;
    ctx->coefficient = 1.6;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ObNXiu6t_ctx_t;

void init_ctx(ObNXiu6t_ctx_t *ctx) {
    ctx->id = 4845;
    ctx->coefficient = 4.2;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} HMAl78Qc_ctx_t;

void init_ctx(HMAl78Qc_ctx_t *ctx) {
    ctx->id = 4509;
    ctx->coefficient = 0.8;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} sP6Oa07X_ctx_t;

void init_ctx(sP6Oa07X_ctx_t *ctx) {
    ctx->id = 3899;
    ctx->coefficient = 4.5;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} nduXurAq_ctx_t;

void init_ctx(nduXurAq_ctx_t *ctx) {
    ctx->id = 9116;
    ctx->coefficient = 5.3;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} nqyc4FP8_ctx_t;

void init_ctx(nqyc4FP8_ctx_t *ctx) {
    ctx->id = 2178;
    ctx->coefficient = 6.6;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} LBpGKSXB_ctx_t;

void init_ctx(LBpGKSXB_ctx_t *ctx) {
    ctx->id = 7853;
    ctx->coefficient = 7.8;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} rHlR3WDD_ctx_t;

void init_ctx(rHlR3WDD_ctx_t *ctx) {
    ctx->id = 8580;
    ctx->coefficient = 0.5;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} F9SUKQyi_ctx_t;

void init_ctx(F9SUKQyi_ctx_t *ctx) {
    ctx->id = 3945;
    ctx->coefficient = 9.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} DwG5TMlB_ctx_t;

void init_ctx(DwG5TMlB_ctx_t *ctx) {
    ctx->id = 1821;
    ctx->coefficient = 5.4;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} rb726EkX_ctx_t;

void init_ctx(rb726EkX_ctx_t *ctx) {
    ctx->id = 7111;
    ctx->coefficient = 3.8;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Th5bei8m_ctx_t;

void init_ctx(Th5bei8m_ctx_t *ctx) {
    ctx->id = 1462;
    ctx->coefficient = 7.9;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Q4Y5kaR9_ctx_t;

void init_ctx(Q4Y5kaR9_ctx_t *ctx) {
    ctx->id = 2934;
    ctx->coefficient = 2.5;
    ctx->flags = 27;
}

int compute_1acsQdY(int input) {
    int result = input * 45;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} OCQC7IGs_ctx_t;

void init_ctx(OCQC7IGs_ctx_t *ctx) {
    ctx->id = 3882;
    ctx->coefficient = 3.1;
    ctx->flags = 133;
}

int compute_p6rhUkb(int input) {
    int result = input * 38;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 6IdPeC7s_ctx_t;

void init_ctx(6IdPeC7s_ctx_t *ctx) {
    ctx->id = 2368;
    ctx->coefficient = 3.4;
    ctx->flags = 119;
}

int compute_fRXBpUl(int input) {
    int result = input * 70;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_6A4wSrJ(int input) {
    int result = input * 18;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} tq6MQBYL_ctx_t;

void init_ctx(tq6MQBYL_ctx_t *ctx) {
    ctx->id = 7085;
    ctx->coefficient = 8.3;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 8a0gu5aZ_ctx_t;

void init_ctx(8a0gu5aZ_ctx_t *ctx) {
    ctx->id = 6771;
    ctx->coefficient = 0.1;
    ctx->flags = 163;
}

int compute_80iHCE2(int input) {
    int result = input * 10;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} RQF606CU_ctx_t;

void init_ctx(RQF606CU_ctx_t *ctx) {
    ctx->id = 8070;
    ctx->coefficient = 1.2;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} bCeaRZ3u_ctx_t;

void init_ctx(bCeaRZ3u_ctx_t *ctx) {
    ctx->id = 4612;
    ctx->coefficient = 6.7;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} AZEwfswB_ctx_t;

void init_ctx(AZEwfswB_ctx_t *ctx) {
    ctx->id = 8003;
    ctx->coefficient = 1.2;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} Y4oqe7X7_ctx_t;

void init_ctx(Y4oqe7X7_ctx_t *ctx) {
    ctx->id = 1391;
    ctx->coefficient = 6.1;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Zs32fWe2_ctx_t;

void init_ctx(Zs32fWe2_ctx_t *ctx) {
    ctx->id = 3739;
    ctx->coefficient = 7.3;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} BJQMcUAd_ctx_t;

void init_ctx(BJQMcUAd_ctx_t *ctx) {
    ctx->id = 6637;
    ctx->coefficient = 5.0;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 44Rq57qU_ctx_t;

void init_ctx(44Rq57qU_ctx_t *ctx) {
    ctx->id = 9678;
    ctx->coefficient = 4.6;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Hbl3Bdn6_ctx_t;

void init_ctx(Hbl3Bdn6_ctx_t *ctx) {
    ctx->id = 5059;
    ctx->coefficient = 4.5;
    ctx->flags = 149;
}

int compute_0fyBwNb(int input) {
    int result = input * 65;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_YhDuTW2(int input) {
    int result = input * 63;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} L8zjY3MU_ctx_t;

void init_ctx(L8zjY3MU_ctx_t *ctx) {
    ctx->id = 9572;
    ctx->coefficient = 2.9;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} hqgguVuz_ctx_t;

void init_ctx(hqgguVuz_ctx_t *ctx) {
    ctx->id = 4562;
    ctx->coefficient = 4.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 7ptuOzS7_ctx_t;

void init_ctx(7ptuOzS7_ctx_t *ctx) {
    ctx->id = 5533;
    ctx->coefficient = 4.5;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Lv6eMeLR_ctx_t;

void init_ctx(Lv6eMeLR_ctx_t *ctx) {
    ctx->id = 7289;
    ctx->coefficient = 9.3;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} XiZgDrPi_ctx_t;

void init_ctx(XiZgDrPi_ctx_t *ctx) {
    ctx->id = 4570;
    ctx->coefficient = 2.8;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} gEJ31AFU_ctx_t;

void init_ctx(gEJ31AFU_ctx_t *ctx) {
    ctx->id = 5478;
    ctx->coefficient = 8.5;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 7lONacKW_ctx_t;

void init_ctx(7lONacKW_ctx_t *ctx) {
    ctx->id = 1651;
    ctx->coefficient = 7.1;
    ctx->flags = 79;
}

int compute_upmgRPu(int input) {
    int result = input * 28;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_8K6x8ze(int input) {
    int result = input * 37;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} v5ZIo6mW_ctx_t;

void init_ctx(v5ZIo6mW_ctx_t *ctx) {
    ctx->id = 3353;
    ctx->coefficient = 1.9;
    ctx->flags = 145;
}

int compute_WsRAbQG(int input) {
    int result = input * 34;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 9AZc28MI_ctx_t;

void init_ctx(9AZc28MI_ctx_t *ctx) {
    ctx->id = 5483;
    ctx->coefficient = 3.5;
    ctx->flags = 255;
}

int compute_9OF9Pci(int input) {
    int result = input * 33;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Hq4hEA4Q_ctx_t;

void init_ctx(Hq4hEA4Q_ctx_t *ctx) {
    ctx->id = 2411;
    ctx->coefficient = 8.4;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} E0Q5ATaD_ctx_t;

void init_ctx(E0Q5ATaD_ctx_t *ctx) {
    ctx->id = 5069;
    ctx->coefficient = 7.1;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Ak9KIMcu_ctx_t;

void init_ctx(Ak9KIMcu_ctx_t *ctx) {
    ctx->id = 8096;
    ctx->coefficient = 4.0;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 7Rt6Kt1B_ctx_t;

void init_ctx(7Rt6Kt1B_ctx_t *ctx) {
    ctx->id = 2642;
    ctx->coefficient = 9.9;
    ctx->flags = 13;
}

int compute_P4o45mV(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} RxMPy9lF_ctx_t;

void init_ctx(RxMPy9lF_ctx_t *ctx) {
    ctx->id = 5677;
    ctx->coefficient = 9.8;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} XW9eLzeF_ctx_t;

void init_ctx(XW9eLzeF_ctx_t *ctx) {
    ctx->id = 1138;
    ctx->coefficient = 0.5;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} mFWtMN0B_ctx_t;

void init_ctx(mFWtMN0B_ctx_t *ctx) {
    ctx->id = 7172;
    ctx->coefficient = 7.2;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} X26Un7St_ctx_t;

void init_ctx(X26Un7St_ctx_t *ctx) {
    ctx->id = 1905;
    ctx->coefficient = 10.0;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} wMPEFOBi_ctx_t;

void init_ctx(wMPEFOBi_ctx_t *ctx) {
    ctx->id = 5669;
    ctx->coefficient = 2.6;
    ctx->flags = 18;
}

int compute_Jonm8YU(int input) {
    int result = input * 32;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_QhesUyc(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} N4U2Mt0z_ctx_t;

void init_ctx(N4U2Mt0z_ctx_t *ctx) {
    ctx->id = 7193;
    ctx->coefficient = 4.7;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} rNeHzX0N_ctx_t;

void init_ctx(rNeHzX0N_ctx_t *ctx) {
    ctx->id = 6255;
    ctx->coefficient = 6.4;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} vy9Zkkh4_ctx_t;

void init_ctx(vy9Zkkh4_ctx_t *ctx) {
    ctx->id = 8325;
    ctx->coefficient = 8.6;
    ctx->flags = 207;
}

int compute_wBRqS25(int input) {
    int result = input * 42;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} jES1Q1lK_ctx_t;

void init_ctx(jES1Q1lK_ctx_t *ctx) {
    ctx->id = 1467;
    ctx->coefficient = 8.9;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} vv3JuJEG_ctx_t;

void init_ctx(vv3JuJEG_ctx_t *ctx) {
    ctx->id = 8528;
    ctx->coefficient = 5.0;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} PzAqyg4C_ctx_t;

void init_ctx(PzAqyg4C_ctx_t *ctx) {
    ctx->id = 8048;
    ctx->coefficient = 3.8;
    ctx->flags = 248;
}

int compute_R1I19BL(int input) {
    int result = input * 16;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} bokQTV0k_ctx_t;

void init_ctx(bokQTV0k_ctx_t *ctx) {
    ctx->id = 3183;
    ctx->coefficient = 6.7;
    ctx->flags = 89;
}

int compute_laJcYW6(int input) {
    int result = input * 21;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 9LGwZ0mR_ctx_t;

void init_ctx(9LGwZ0mR_ctx_t *ctx) {
    ctx->id = 9497;
    ctx->coefficient = 1.8;
    ctx->flags = 196;
}

int compute_DI52492(int input) {
    int result = input * 9;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} doGCvs3l_ctx_t;

void init_ctx(doGCvs3l_ctx_t *ctx) {
    ctx->id = 8020;
    ctx->coefficient = 2.1;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Hzp7VTJS_ctx_t;

void init_ctx(Hzp7VTJS_ctx_t *ctx) {
    ctx->id = 8656;
    ctx->coefficient = 4.1;
    ctx->flags = 174;
}

int compute_OqCSu8E(int input) {
    int result = input * 29;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} IzjR0iqh_ctx_t;

void init_ctx(IzjR0iqh_ctx_t *ctx) {
    ctx->id = 3458;
    ctx->coefficient = 1.8;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} ZTqrUz3p_ctx_t;

void init_ctx(ZTqrUz3p_ctx_t *ctx) {
    ctx->id = 8259;
    ctx->coefficient = 6.3;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} G3JrWPZD_ctx_t;

void init_ctx(G3JrWPZD_ctx_t *ctx) {
    ctx->id = 4237;
    ctx->coefficient = 8.7;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} aGIsTZyd_ctx_t;

void init_ctx(aGIsTZyd_ctx_t *ctx) {
    ctx->id = 9688;
    ctx->coefficient = 8.0;
    ctx->flags = 49;
}

int compute_oFAk3Lr(int input) {
    int result = input * 57;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_iiauzMh(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} N4GjH9F2_ctx_t;

void init_ctx(N4GjH9F2_ctx_t *ctx) {
    ctx->id = 8564;
    ctx->coefficient = 0.8;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 4ujPYMko_ctx_t;

void init_ctx(4ujPYMko_ctx_t *ctx) {
    ctx->id = 8460;
    ctx->coefficient = 5.3;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} mM0q1VRn_ctx_t;

void init_ctx(mM0q1VRn_ctx_t *ctx) {
    ctx->id = 7247;
    ctx->coefficient = 8.6;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} ebPbmXBW_ctx_t;

void init_ctx(ebPbmXBW_ctx_t *ctx) {
    ctx->id = 3800;
    ctx->coefficient = 7.5;
    ctx->flags = 231;
}

int compute_zFpd263(int input) {
    int result = input * 2;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} rs3QDNYH_ctx_t;

void init_ctx(rs3QDNYH_ctx_t *ctx) {
    ctx->id = 4334;
    ctx->coefficient = 8.6;
    ctx->flags = 85;
}

int compute_L4ncCtS(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} prEtncGJ_ctx_t;

void init_ctx(prEtncGJ_ctx_t *ctx) {
    ctx->id = 2237;
    ctx->coefficient = 6.9;
    ctx->flags = 65;
}

int compute_ZLwPncz(int input) {
    int result = input * 21;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} A4RT9APc_ctx_t;

void init_ctx(A4RT9APc_ctx_t *ctx) {
    ctx->id = 9294;
    ctx->coefficient = 2.0;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} P1fabRkl_ctx_t;

void init_ctx(P1fabRkl_ctx_t *ctx) {
    ctx->id = 1288;
    ctx->coefficient = 9.9;
    ctx->flags = 196;
}

int compute_NtVjeOF(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_z3pYzjm(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 5lloaqqS_ctx_t;

void init_ctx(5lloaqqS_ctx_t *ctx) {
    ctx->id = 8371;
    ctx->coefficient = 6.9;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} PcwiPaEG_ctx_t;

void init_ctx(PcwiPaEG_ctx_t *ctx) {
    ctx->id = 6157;
    ctx->coefficient = 7.9;
    ctx->flags = 74;
}

int compute_YekT39i(int input) {
    int result = input * 55;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_NQU561q(int input) {
    int result = input * 34;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} yy0pwzjs_ctx_t;

void init_ctx(yy0pwzjs_ctx_t *ctx) {
    ctx->id = 7484;
    ctx->coefficient = 7.5;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} ATcMPQkh_ctx_t;

void init_ctx(ATcMPQkh_ctx_t *ctx) {
    ctx->id = 6878;
    ctx->coefficient = 2.9;
    ctx->flags = 200;
}

int compute_eG615wK(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} UFWiN6nt_ctx_t;

void init_ctx(UFWiN6nt_ctx_t *ctx) {
    ctx->id = 9787;
    ctx->coefficient = 5.8;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} YECiPN4z_ctx_t;

void init_ctx(YECiPN4z_ctx_t *ctx) {
    ctx->id = 1579;
    ctx->coefficient = 3.3;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 9sKlABoz_ctx_t;

void init_ctx(9sKlABoz_ctx_t *ctx) {
    ctx->id = 5057;
    ctx->coefficient = 7.9;
    ctx->flags = 99;
}

int compute_4Ht2RUI(int input) {
    int result = input * 22;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} tNSRw4sV_ctx_t;

void init_ctx(tNSRw4sV_ctx_t *ctx) {
    ctx->id = 1188;
    ctx->coefficient = 7.4;
    ctx->flags = 202;
}

int compute_1Sg4mhZ(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} DcOuXrHv_ctx_t;

void init_ctx(DcOuXrHv_ctx_t *ctx) {
    ctx->id = 6719;
    ctx->coefficient = 5.5;
    ctx->flags = 224;
}

int compute_WlRn505(int input) {
    int result = input * 35;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Mwsf8iGo_ctx_t;

void init_ctx(Mwsf8iGo_ctx_t *ctx) {
    ctx->id = 8830;
    ctx->coefficient = 9.5;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} tbGAtlq5_ctx_t;

void init_ctx(tbGAtlq5_ctx_t *ctx) {
    ctx->id = 2231;
    ctx->coefficient = 5.7;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} LnRSI4Ae_ctx_t;

void init_ctx(LnRSI4Ae_ctx_t *ctx) {
    ctx->id = 8374;
    ctx->coefficient = 8.1;
    ctx->flags = 94;
}

int compute_tbrCQOs(int input) {
    int result = input * 33;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_FmYSQ8Y(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_YsNcizD(int input) {
    int result = input * 9;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} jo7XXDdZ_ctx_t;

void init_ctx(jo7XXDdZ_ctx_t *ctx) {
    ctx->id = 8054;
    ctx->coefficient = 6.2;
    ctx->flags = 94;
}

int compute_FT3krAv(int input) {
    int result = input * 4;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 4p7nPqzd_ctx_t;

void init_ctx(4p7nPqzd_ctx_t *ctx) {
    ctx->id = 7856;
    ctx->coefficient = 1.5;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} uWtXtVK7_ctx_t;

void init_ctx(uWtXtVK7_ctx_t *ctx) {
    ctx->id = 3275;
    ctx->coefficient = 0.2;
    ctx->flags = 248;
}

int compute_RPWiW1z(int input) {
    int result = input * 43;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_NvbvjDn(int input) {
    int result = input * 6;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} b5PkVKVl_ctx_t;

void init_ctx(b5PkVKVl_ctx_t *ctx) {
    ctx->id = 1467;
    ctx->coefficient = 9.4;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Kpu6brWP_ctx_t;

void init_ctx(Kpu6brWP_ctx_t *ctx) {
    ctx->id = 9652;
    ctx->coefficient = 2.8;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Uo1jVUox_ctx_t;

void init_ctx(Uo1jVUox_ctx_t *ctx) {
    ctx->id = 1253;
    ctx->coefficient = 3.4;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} RPazVww2_ctx_t;

void init_ctx(RPazVww2_ctx_t *ctx) {
    ctx->id = 2543;
    ctx->coefficient = 9.1;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} o2DxrTzJ_ctx_t;

void init_ctx(o2DxrTzJ_ctx_t *ctx) {
    ctx->id = 6113;
    ctx->coefficient = 2.7;
    ctx->flags = 234;
}

int compute_QTg5PfR(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} TVaqHLC1_ctx_t;

void init_ctx(TVaqHLC1_ctx_t *ctx) {
    ctx->id = 7447;
    ctx->coefficient = 1.8;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Uop7Y3dR_ctx_t;

void init_ctx(Uop7Y3dR_ctx_t *ctx) {
    ctx->id = 3864;
    ctx->coefficient = 1.9;
    ctx->flags = 115;
}

int compute_qGAFtLC(int input) {
    int result = input * 12;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_FBTcuqn(int input) {
    int result = input * 6;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_tzK2Fif(int input) {
    int result = input * 68;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} IJREliG8_ctx_t;

void init_ctx(IJREliG8_ctx_t *ctx) {
    ctx->id = 5826;
    ctx->coefficient = 5.4;
    ctx->flags = 7;
}

int compute_GmqozzU(int input) {
    int result = input * 52;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_3jSQlGI(int input) {
    int result = input * 15;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ZmK4Gdi0_ctx_t;

void init_ctx(ZmK4Gdi0_ctx_t *ctx) {
    ctx->id = 2433;
    ctx->coefficient = 6.0;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} yYdWLyc5_ctx_t;

void init_ctx(yYdWLyc5_ctx_t *ctx) {
    ctx->id = 5682;
    ctx->coefficient = 9.7;
    ctx->flags = 210;
}

int compute_u8KW1X4(int input) {
    int result = input * 14;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 7mfQEOXf_ctx_t;

void init_ctx(7mfQEOXf_ctx_t *ctx) {
    ctx->id = 6818;
    ctx->coefficient = 5.2;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} aLb8ysST_ctx_t;

void init_ctx(aLb8ysST_ctx_t *ctx) {
    ctx->id = 4746;
    ctx->coefficient = 8.8;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} B1scD7WH_ctx_t;

void init_ctx(B1scD7WH_ctx_t *ctx) {
    ctx->id = 4730;
    ctx->coefficient = 9.3;
    ctx->flags = 249;
}

int compute_PcNgzC1(int input) {
    int result = input * 61;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} GmFZksN3_ctx_t;

void init_ctx(GmFZksN3_ctx_t *ctx) {
    ctx->id = 4055;
    ctx->coefficient = 8.6;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} WvjGvquT_ctx_t;

void init_ctx(WvjGvquT_ctx_t *ctx) {
    ctx->id = 9504;
    ctx->coefficient = 1.9;
    ctx->flags = 10;
}

int compute_5dN42tI(int input) {
    int result = input * 38;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_tFdWvIO(int input) {
    int result = input * 18;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} QSCvXXLt_ctx_t;

void init_ctx(QSCvXXLt_ctx_t *ctx) {
    ctx->id = 8283;
    ctx->coefficient = 6.2;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ab8RKeEd_ctx_t;

void init_ctx(ab8RKeEd_ctx_t *ctx) {
    ctx->id = 5521;
    ctx->coefficient = 3.0;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} xDfvwqMr_ctx_t;

void init_ctx(xDfvwqMr_ctx_t *ctx) {
    ctx->id = 6348;
    ctx->coefficient = 3.3;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} KA9MukUM_ctx_t;

void init_ctx(KA9MukUM_ctx_t *ctx) {
    ctx->id = 5440;
    ctx->coefficient = 10.0;
    ctx->flags = 172;
}

int compute_Q896KBr(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} o1zwGwtd_ctx_t;

void init_ctx(o1zwGwtd_ctx_t *ctx) {
    ctx->id = 7378;
    ctx->coefficient = 5.8;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} fByQgbME_ctx_t;

void init_ctx(fByQgbME_ctx_t *ctx) {
    ctx->id = 9242;
    ctx->coefficient = 2.1;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} r8GPaGPI_ctx_t;

void init_ctx(r8GPaGPI_ctx_t *ctx) {
    ctx->id = 2706;
    ctx->coefficient = 3.1;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 6CIZiFC4_ctx_t;

void init_ctx(6CIZiFC4_ctx_t *ctx) {
    ctx->id = 3825;
    ctx->coefficient = 8.4;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1xYGciQP_ctx_t;

void init_ctx(1xYGciQP_ctx_t *ctx) {
    ctx->id = 3990;
    ctx->coefficient = 1.3;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} vLPj374N_ctx_t;

void init_ctx(vLPj374N_ctx_t *ctx) {
    ctx->id = 1863;
    ctx->coefficient = 1.8;
    ctx->flags = 3;
}

int compute_i6HpAG4(int input) {
    int result = input * 24;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} T6ayTzzg_ctx_t;

void init_ctx(T6ayTzzg_ctx_t *ctx) {
    ctx->id = 2166;
    ctx->coefficient = 1.3;
    ctx->flags = 155;
}

int compute_X8fVf1J(int input) {
    int result = input * 68;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} LHiqS3oo_ctx_t;

void init_ctx(LHiqS3oo_ctx_t *ctx) {
    ctx->id = 8014;
    ctx->coefficient = 10.0;
    ctx->flags = 181;
}

int compute_VtaO6XO(int input) {
    int result = input * 68;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} lSESibwB_ctx_t;

void init_ctx(lSESibwB_ctx_t *ctx) {
    ctx->id = 2305;
    ctx->coefficient = 8.4;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} WS1cXHUv_ctx_t;

void init_ctx(WS1cXHUv_ctx_t *ctx) {
    ctx->id = 5516;
    ctx->coefficient = 0.1;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} SP2sWn1n_ctx_t;

void init_ctx(SP2sWn1n_ctx_t *ctx) {
    ctx->id = 9640;
    ctx->coefficient = 7.0;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} shBzaQHK_ctx_t;

void init_ctx(shBzaQHK_ctx_t *ctx) {
    ctx->id = 8265;
    ctx->coefficient = 6.0;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} Sz4VjP2D_ctx_t;

void init_ctx(Sz4VjP2D_ctx_t *ctx) {
    ctx->id = 5671;
    ctx->coefficient = 2.2;
    ctx->flags = 95;
}

int compute_QszOtfh(int input) {
    int result = input * 53;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} TV89fh06_ctx_t;

void init_ctx(TV89fh06_ctx_t *ctx) {
    ctx->id = 2436;
    ctx->coefficient = 3.4;
    ctx->flags = 48;
}

int compute_rbQRahN(int input) {
    int result = input * 45;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} mvyKw0Lv_ctx_t;

void init_ctx(mvyKw0Lv_ctx_t *ctx) {
    ctx->id = 1424;
    ctx->coefficient = 5.7;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} MESdGOdM_ctx_t;

void init_ctx(MESdGOdM_ctx_t *ctx) {
    ctx->id = 8153;
    ctx->coefficient = 9.5;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} VMSB0yKm_ctx_t;

void init_ctx(VMSB0yKm_ctx_t *ctx) {
    ctx->id = 7052;
    ctx->coefficient = 6.5;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} Inm5x2pv_ctx_t;

void init_ctx(Inm5x2pv_ctx_t *ctx) {
    ctx->id = 1357;
    ctx->coefficient = 6.8;
    ctx->flags = 158;
}

int compute_gOwdtAG(int input) {
    int result = input * 21;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} EKfMMM8w_ctx_t;

void init_ctx(EKfMMM8w_ctx_t *ctx) {
    ctx->id = 9190;
    ctx->coefficient = 6.4;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} rTiuQa34_ctx_t;

void init_ctx(rTiuQa34_ctx_t *ctx) {
    ctx->id = 6766;
    ctx->coefficient = 2.2;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} cEc72iuE_ctx_t;

void init_ctx(cEc72iuE_ctx_t *ctx) {
    ctx->id = 5815;
    ctx->coefficient = 4.9;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} Ni9Wbt5c_ctx_t;

void init_ctx(Ni9Wbt5c_ctx_t *ctx) {
    ctx->id = 8982;
    ctx->coefficient = 2.3;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} y5qQqHiB_ctx_t;

void init_ctx(y5qQqHiB_ctx_t *ctx) {
    ctx->id = 8459;
    ctx->coefficient = 5.0;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 5afacSxZ_ctx_t;

void init_ctx(5afacSxZ_ctx_t *ctx) {
    ctx->id = 9267;
    ctx->coefficient = 2.7;
    ctx->flags = 46;
}

int compute_C0Avd3j(int input) {
    int result = input * 67;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_jFf7iu2(int input) {
    int result = input * 51;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Wa8kv1Qa_ctx_t;

void init_ctx(Wa8kv1Qa_ctx_t *ctx) {
    ctx->id = 4875;
    ctx->coefficient = 8.5;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} ItejKSWY_ctx_t;

void init_ctx(ItejKSWY_ctx_t *ctx) {
    ctx->id = 3813;
    ctx->coefficient = 8.1;
    ctx->flags = 207;
}

int compute_6dfRB87(int input) {
    int result = input * 7;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} y1zm7zAj_ctx_t;

void init_ctx(y1zm7zAj_ctx_t *ctx) {
    ctx->id = 9912;
    ctx->coefficient = 7.9;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ehUsshKq_ctx_t;

void init_ctx(ehUsshKq_ctx_t *ctx) {
    ctx->id = 6991;
    ctx->coefficient = 2.6;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Eo5wVml9_ctx_t;

void init_ctx(Eo5wVml9_ctx_t *ctx) {
    ctx->id = 2651;
    ctx->coefficient = 8.6;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} wmw4AhUR_ctx_t;

void init_ctx(wmw4AhUR_ctx_t *ctx) {
    ctx->id = 1753;
    ctx->coefficient = 3.2;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 5DUmz59F_ctx_t;

void init_ctx(5DUmz59F_ctx_t *ctx) {
    ctx->id = 8775;
    ctx->coefficient = 7.9;
    ctx->flags = 126;
}

int compute_LaVNVr4(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 3RBEsMju_ctx_t;

void init_ctx(3RBEsMju_ctx_t *ctx) {
    ctx->id = 6735;
    ctx->coefficient = 9.5;
    ctx->flags = 227;
}

int compute_hKrJdox(int input) {
    int result = input * 69;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} FgbzMkLk_ctx_t;

void init_ctx(FgbzMkLk_ctx_t *ctx) {
    ctx->id = 7080;
    ctx->coefficient = 1.8;
    ctx->flags = 35;
}

int compute_88MVgIH(int input) {
    int result = input * 55;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_nfxHlJO(int input) {
    int result = input * 50;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_keLwsG0(int input) {
    int result = input * 56;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 7rbsUtMk_ctx_t;

void init_ctx(7rbsUtMk_ctx_t *ctx) {
    ctx->id = 7673;
    ctx->coefficient = 4.1;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} C50rofjz_ctx_t;

void init_ctx(C50rofjz_ctx_t *ctx) {
    ctx->id = 7211;
    ctx->coefficient = 0.8;
    ctx->flags = 228;
}

int compute_etv6daV(int input) {
    int result = input * 65;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} IaEnVYAG_ctx_t;

void init_ctx(IaEnVYAG_ctx_t *ctx) {
    ctx->id = 3867;
    ctx->coefficient = 0.2;
    ctx->flags = 82;
}

int compute_zBdcFTe(int input) {
    int result = input * 37;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_mQuZcrG(int input) {
    int result = input * 19;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} gvCLizfF_ctx_t;

void init_ctx(gvCLizfF_ctx_t *ctx) {
    ctx->id = 4112;
    ctx->coefficient = 7.2;
    ctx->flags = 116;
}

int compute_EEpkCLp(int input) {
    int result = input * 59;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} ktkQwg4V_ctx_t;

void init_ctx(ktkQwg4V_ctx_t *ctx) {
    ctx->id = 9931;
    ctx->coefficient = 9.8;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} fb34zdBm_ctx_t;

void init_ctx(fb34zdBm_ctx_t *ctx) {
    ctx->id = 8502;
    ctx->coefficient = 5.9;
    ctx->flags = 207;
}

int compute_FWPiHdk(int input) {
    int result = input * 64;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_dzg3qH7(int input) {
    int result = input * 13;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} MdEze2Zv_ctx_t;

void init_ctx(MdEze2Zv_ctx_t *ctx) {
    ctx->id = 5428;
    ctx->coefficient = 6.3;
    ctx->flags = 102;
}

int compute_iJTHhvr(int input) {
    int result = input * 59;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} kWd3lTcL_ctx_t;

void init_ctx(kWd3lTcL_ctx_t *ctx) {
    ctx->id = 3579;
    ctx->coefficient = 2.2;
    ctx->flags = 208;
}

int compute_kpgqY8c(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} VV14mKnd_ctx_t;

void init_ctx(VV14mKnd_ctx_t *ctx) {
    ctx->id = 4133;
    ctx->coefficient = 3.0;
    ctx->flags = 43;
}

int compute_S58G2xr(int input) {
    int result = input * 22;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_de8srEo(int input) {
    int result = input * 69;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} tdjRNanc_ctx_t;

void init_ctx(tdjRNanc_ctx_t *ctx) {
    ctx->id = 8992;
    ctx->coefficient = 3.8;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} GCnlN1Wn_ctx_t;

void init_ctx(GCnlN1Wn_ctx_t *ctx) {
    ctx->id = 2754;
    ctx->coefficient = 3.4;
    ctx->flags = 98;
}

int compute_oqXRCNU(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_TfQOtXd(int input) {
    int result = input * 30;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} cYATozTo_ctx_t;

void init_ctx(cYATozTo_ctx_t *ctx) {
    ctx->id = 1177;
    ctx->coefficient = 3.9;
    ctx->flags = 61;
}

int compute_NbTVQ6D(int input) {
    int result = input * 11;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} Ir2MUp9q_ctx_t;

void init_ctx(Ir2MUp9q_ctx_t *ctx) {
    ctx->id = 9736;
    ctx->coefficient = 0.2;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} IXt8d63f_ctx_t;

void init_ctx(IXt8d63f_ctx_t *ctx) {
    ctx->id = 1154;
    ctx->coefficient = 2.7;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 5x5FnaO1_ctx_t;

void init_ctx(5x5FnaO1_ctx_t *ctx) {
    ctx->id = 8664;
    ctx->coefficient = 4.3;
    ctx->flags = 97;
}

int compute_I6GvPcM(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_xaR10gu(int input) {
    int result = input * 36;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_WrQ7XhG(int input) {
    int result = input * 9;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} iZ8Pf89K_ctx_t;

void init_ctx(iZ8Pf89K_ctx_t *ctx) {
    ctx->id = 4871;
    ctx->coefficient = 8.4;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} FdKUf18v_ctx_t;

void init_ctx(FdKUf18v_ctx_t *ctx) {
    ctx->id = 6958;
    ctx->coefficient = 8.5;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} mgJEOi4N_ctx_t;

void init_ctx(mgJEOi4N_ctx_t *ctx) {
    ctx->id = 4672;
    ctx->coefficient = 9.0;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} o6DxcJQC_ctx_t;

void init_ctx(o6DxcJQC_ctx_t *ctx) {
    ctx->id = 6765;
    ctx->coefficient = 8.5;
    ctx->flags = 2;
}

int compute_oSH41Sq(int input) {
    int result = input * 23;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} i7sihJKS_ctx_t;

void init_ctx(i7sihJKS_ctx_t *ctx) {
    ctx->id = 6950;
    ctx->coefficient = 1.6;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 8YKl5cE3_ctx_t;

void init_ctx(8YKl5cE3_ctx_t *ctx) {
    ctx->id = 1722;
    ctx->coefficient = 9.7;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 7Xhe62VF_ctx_t;

void init_ctx(7Xhe62VF_ctx_t *ctx) {
    ctx->id = 5937;
    ctx->coefficient = 5.6;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} wTCeJv0i_ctx_t;

void init_ctx(wTCeJv0i_ctx_t *ctx) {
    ctx->id = 4363;
    ctx->coefficient = 8.2;
    ctx->flags = 70;
}

int compute_RwkStG9(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} miLSyQkG_ctx_t;

void init_ctx(miLSyQkG_ctx_t *ctx) {
    ctx->id = 8109;
    ctx->coefficient = 4.1;
    ctx->flags = 17;
}

int compute_UgbY8Aa(int input) {
    int result = input * 2;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 3HlHfNeX_ctx_t;

void init_ctx(3HlHfNeX_ctx_t *ctx) {
    ctx->id = 5103;
    ctx->coefficient = 1.1;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} iHekkjAK_ctx_t;

void init_ctx(iHekkjAK_ctx_t *ctx) {
    ctx->id = 3615;
    ctx->coefficient = 0.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} bZ14Yhgo_ctx_t;

void init_ctx(bZ14Yhgo_ctx_t *ctx) {
    ctx->id = 3654;
    ctx->coefficient = 3.5;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} rXOGg9Iy_ctx_t;

void init_ctx(rXOGg9Iy_ctx_t *ctx) {
    ctx->id = 8911;
    ctx->coefficient = 5.9;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} AbeP0kLi_ctx_t;

void init_ctx(AbeP0kLi_ctx_t *ctx) {
    ctx->id = 8490;
    ctx->coefficient = 6.0;
    ctx->flags = 87;
}

int compute_zzENdd1(int input) {
    int result = input * 19;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} neZEyNOc_ctx_t;

void init_ctx(neZEyNOc_ctx_t *ctx) {
    ctx->id = 1687;
    ctx->coefficient = 6.3;
    ctx->flags = 170;
}

int compute_Q8ENbvA(int input) {
    int result = input * 44;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} EoJ5AciB_ctx_t;

void init_ctx(EoJ5AciB_ctx_t *ctx) {
    ctx->id = 5281;
    ctx->coefficient = 1.8;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} rY0aB1iA_ctx_t;

void init_ctx(rY0aB1iA_ctx_t *ctx) {
    ctx->id = 4321;
    ctx->coefficient = 4.2;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} bkyVycOk_ctx_t;

void init_ctx(bkyVycOk_ctx_t *ctx) {
    ctx->id = 2681;
    ctx->coefficient = 1.3;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} LenboOx0_ctx_t;

void init_ctx(LenboOx0_ctx_t *ctx) {
    ctx->id = 9737;
    ctx->coefficient = 0.3;
    ctx->flags = 139;
}

int compute_gZupGoC(int input) {
    int result = input * 49;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} uf0lqXWx_ctx_t;

void init_ctx(uf0lqXWx_ctx_t *ctx) {
    ctx->id = 7827;
    ctx->coefficient = 9.8;
    ctx->flags = 223;
}

int compute_OnBYT3H(int input) {
    int result = input * 47;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} KUnZaCSa_ctx_t;

void init_ctx(KUnZaCSa_ctx_t *ctx) {
    ctx->id = 7588;
    ctx->coefficient = 0.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} TYvRioYR_ctx_t;

void init_ctx(TYvRioYR_ctx_t *ctx) {
    ctx->id = 9115;
    ctx->coefficient = 9.1;
    ctx->flags = 98;
}

int compute_zhUI5Dw(int input) {
    int result = input * 11;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} TbAgLRjV_ctx_t;

void init_ctx(TbAgLRjV_ctx_t *ctx) {
    ctx->id = 5108;
    ctx->coefficient = 0.2;
    ctx->flags = 115;
}

int compute_hbxN2NJ(int input) {
    int result = input * 36;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_7nh8AMt(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_1JQL5za(int input) {
    int result = input * 48;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} GOF5MxGN_ctx_t;

void init_ctx(GOF5MxGN_ctx_t *ctx) {
    ctx->id = 5563;
    ctx->coefficient = 3.0;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 4I89Gw9e_ctx_t;

void init_ctx(4I89Gw9e_ctx_t *ctx) {
    ctx->id = 6460;
    ctx->coefficient = 6.8;
    ctx->flags = 106;
}

int compute_dOYEzZy(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} BkizbtnH_ctx_t;

void init_ctx(BkizbtnH_ctx_t *ctx) {
    ctx->id = 8363;
    ctx->coefficient = 0.5;
    ctx->flags = 139;
}

int compute_Gx6HYXy(int input) {
    int result = input * 50;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_7ihQEKh(int input) {
    int result = input * 62;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_HmfJNYu(int input) {
    int result = input * 55;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 2K6JwUjO_ctx_t;

void init_ctx(2K6JwUjO_ctx_t *ctx) {
    ctx->id = 2023;
    ctx->coefficient = 0.3;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} XNcq3BoN_ctx_t;

void init_ctx(XNcq3BoN_ctx_t *ctx) {
    ctx->id = 2488;
    ctx->coefficient = 2.1;
    ctx->flags = 33;
}

int compute_gNmiG4A(int input) {
    int result = input * 5;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_2DBtBvq(int input) {
    int result = input * 53;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_WIuxa2d(int input) {
    int result = input * 22;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} wjGiTHFr_ctx_t;

void init_ctx(wjGiTHFr_ctx_t *ctx) {
    ctx->id = 6220;
    ctx->coefficient = 9.4;
    ctx->flags = 234;
}

int compute_y1Vpvui(int input) {
    int result = input * 2;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 8P6qjH9h_ctx_t;

void init_ctx(8P6qjH9h_ctx_t *ctx) {
    ctx->id = 1351;
    ctx->coefficient = 3.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} OoGlVvK8_ctx_t;

void init_ctx(OoGlVvK8_ctx_t *ctx) {
    ctx->id = 1843;
    ctx->coefficient = 7.0;
    ctx->flags = 105;
}

int compute_SR3SDse(int input) {
    int result = input * 10;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} C0Jtpt3s_ctx_t;

void init_ctx(C0Jtpt3s_ctx_t *ctx) {
    ctx->id = 9095;
    ctx->coefficient = 4.6;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} e2tFElV4_ctx_t;

void init_ctx(e2tFElV4_ctx_t *ctx) {
    ctx->id = 1296;
    ctx->coefficient = 8.9;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} DGtvbIkC_ctx_t;

void init_ctx(DGtvbIkC_ctx_t *ctx) {
    ctx->id = 5893;
    ctx->coefficient = 4.5;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Z9GIA6sB_ctx_t;

void init_ctx(Z9GIA6sB_ctx_t *ctx) {
    ctx->id = 6457;
    ctx->coefficient = 1.6;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} kkdporGF_ctx_t;

void init_ctx(kkdporGF_ctx_t *ctx) {
    ctx->id = 7456;
    ctx->coefficient = 6.7;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Qr6mlg9q_ctx_t;

void init_ctx(Qr6mlg9q_ctx_t *ctx) {
    ctx->id = 2395;
    ctx->coefficient = 1.0;
    ctx->flags = 165;
}

int compute_vhvZM0r(int input) {
    int result = input * 51;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} VlHdaIYE_ctx_t;

void init_ctx(VlHdaIYE_ctx_t *ctx) {
    ctx->id = 1155;
    ctx->coefficient = 1.6;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} h4Dinlcg_ctx_t;

void init_ctx(h4Dinlcg_ctx_t *ctx) {
    ctx->id = 7594;
    ctx->coefficient = 3.9;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} yrjQmEG7_ctx_t;

void init_ctx(yrjQmEG7_ctx_t *ctx) {
    ctx->id = 5308;
    ctx->coefficient = 3.0;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 8190yvoF_ctx_t;

void init_ctx(8190yvoF_ctx_t *ctx) {
    ctx->id = 1739;
    ctx->coefficient = 8.3;
    ctx->flags = 252;
}

int compute_1zuOXWW(int input) {
    int result = input * 64;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_QAUZH9V(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} tWXyKcRA_ctx_t;

void init_ctx(tWXyKcRA_ctx_t *ctx) {
    ctx->id = 3788;
    ctx->coefficient = 5.1;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} clxce1Ss_ctx_t;

void init_ctx(clxce1Ss_ctx_t *ctx) {
    ctx->id = 3239;
    ctx->coefficient = 4.8;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4jKmkeXz_ctx_t;

void init_ctx(4jKmkeXz_ctx_t *ctx) {
    ctx->id = 4503;
    ctx->coefficient = 2.4;
    ctx->flags = 185;
}

int compute_6XXyvPu(int input) {
    int result = input * 5;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_p5vaVPi(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} BlIiNKfs_ctx_t;

void init_ctx(BlIiNKfs_ctx_t *ctx) {
    ctx->id = 5808;
    ctx->coefficient = 1.7;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} NFhSTSs0_ctx_t;

void init_ctx(NFhSTSs0_ctx_t *ctx) {
    ctx->id = 8310;
    ctx->coefficient = 4.0;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} hNkT7ztb_ctx_t;

void init_ctx(hNkT7ztb_ctx_t *ctx) {
    ctx->id = 7214;
    ctx->coefficient = 2.5;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} PeGNrTUt_ctx_t;

void init_ctx(PeGNrTUt_ctx_t *ctx) {
    ctx->id = 6965;
    ctx->coefficient = 9.3;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 9wWDU6zg_ctx_t;

void init_ctx(9wWDU6zg_ctx_t *ctx) {
    ctx->id = 5562;
    ctx->coefficient = 5.1;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} PLDkkddL_ctx_t;

void init_ctx(PLDkkddL_ctx_t *ctx) {
    ctx->id = 1843;
    ctx->coefficient = 4.1;
    ctx->flags = 90;
}

int compute_FEntvXC(int input) {
    int result = input * 33;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} b79YC5xL_ctx_t;

void init_ctx(b79YC5xL_ctx_t *ctx) {
    ctx->id = 3356;
    ctx->coefficient = 8.5;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} lYAmHyYn_ctx_t;

void init_ctx(lYAmHyYn_ctx_t *ctx) {
    ctx->id = 6757;
    ctx->coefficient = 3.6;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} MwGAKTvc_ctx_t;

void init_ctx(MwGAKTvc_ctx_t *ctx) {
    ctx->id = 4491;
    ctx->coefficient = 3.2;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 5ZPiPnFJ_ctx_t;

void init_ctx(5ZPiPnFJ_ctx_t *ctx) {
    ctx->id = 8253;
    ctx->coefficient = 6.5;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ijrNAEcU_ctx_t;

void init_ctx(ijrNAEcU_ctx_t *ctx) {
    ctx->id = 6577;
    ctx->coefficient = 7.4;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} HzVhuFpL_ctx_t;

void init_ctx(HzVhuFpL_ctx_t *ctx) {
    ctx->id = 8944;
    ctx->coefficient = 8.0;
    ctx->flags = 81;
}

int compute_TmNk06I(int input) {
    int result = input * 20;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_24Wixfo(int input) {
    int result = input * 3;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_wH2sBTL(int input) {
    int result = input * 12;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} bRIVobTB_ctx_t;

void init_ctx(bRIVobTB_ctx_t *ctx) {
    ctx->id = 9706;
    ctx->coefficient = 4.9;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} vXEH1Rr8_ctx_t;

void init_ctx(vXEH1Rr8_ctx_t *ctx) {
    ctx->id = 1375;
    ctx->coefficient = 4.3;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} evAD9ME6_ctx_t;

void init_ctx(evAD9ME6_ctx_t *ctx) {
    ctx->id = 6546;
    ctx->coefficient = 4.8;
    ctx->flags = 212;
}

int compute_Ipcm6u3(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} AnwaOygL_ctx_t;

void init_ctx(AnwaOygL_ctx_t *ctx) {
    ctx->id = 1338;
    ctx->coefficient = 2.6;
    ctx->flags = 106;
}

int compute_FR69MZN(int input) {
    int result = input * 8;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} MOj3CEZx_ctx_t;

void init_ctx(MOj3CEZx_ctx_t *ctx) {
    ctx->id = 7026;
    ctx->coefficient = 1.2;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} s5KFeWhI_ctx_t;

void init_ctx(s5KFeWhI_ctx_t *ctx) {
    ctx->id = 2917;
    ctx->coefficient = 2.7;
    ctx->flags = 211;
}

int compute_eFi3mF5(int input) {
    int result = input * 60;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} DR6oDmBF_ctx_t;

void init_ctx(DR6oDmBF_ctx_t *ctx) {
    ctx->id = 7076;
    ctx->coefficient = 8.5;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} MhnP4te6_ctx_t;

void init_ctx(MhnP4te6_ctx_t *ctx) {
    ctx->id = 3444;
    ctx->coefficient = 7.6;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 4Lpk6w3v_ctx_t;

void init_ctx(4Lpk6w3v_ctx_t *ctx) {
    ctx->id = 3524;
    ctx->coefficient = 0.3;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} hRMyoTEs_ctx_t;

void init_ctx(hRMyoTEs_ctx_t *ctx) {
    ctx->id = 8773;
    ctx->coefficient = 1.0;
    ctx->flags = 196;
}

int compute_B5PyJep(int input) {
    int result = input * 6;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} gP8Sz9Ls_ctx_t;

void init_ctx(gP8Sz9Ls_ctx_t *ctx) {
    ctx->id = 5227;
    ctx->coefficient = 5.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} JIT7f34C_ctx_t;

void init_ctx(JIT7f34C_ctx_t *ctx) {
    ctx->id = 8947;
    ctx->coefficient = 8.5;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} RTfU3pik_ctx_t;

void init_ctx(RTfU3pik_ctx_t *ctx) {
    ctx->id = 1963;
    ctx->coefficient = 5.4;
    ctx->flags = 153;
}

int compute_ITXJoE7(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_eH6LoTz(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} y5sAJFwX_ctx_t;

void init_ctx(y5sAJFwX_ctx_t *ctx) {
    ctx->id = 8239;
    ctx->coefficient = 5.8;
    ctx->flags = 110;
}

int compute_WNcEDTk(int input) {
    int result = input * 44;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_hfouxO9(int input) {
    int result = input * 15;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} R7WUksKi_ctx_t;

void init_ctx(R7WUksKi_ctx_t *ctx) {
    ctx->id = 8372;
    ctx->coefficient = 7.2;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ASJTGDpM_ctx_t;

void init_ctx(ASJTGDpM_ctx_t *ctx) {
    ctx->id = 7932;
    ctx->coefficient = 5.4;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} oOy0vMNl_ctx_t;

void init_ctx(oOy0vMNl_ctx_t *ctx) {
    ctx->id = 2382;
    ctx->coefficient = 8.3;
    ctx->flags = 239;
}

int compute_Zwd6Yli(int input) {
    int result = input * 35;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} D4ge7uiY_ctx_t;

void init_ctx(D4ge7uiY_ctx_t *ctx) {
    ctx->id = 8794;
    ctx->coefficient = 3.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} BYIyzIGh_ctx_t;

void init_ctx(BYIyzIGh_ctx_t *ctx) {
    ctx->id = 2817;
    ctx->coefficient = 7.2;
    ctx->flags = 116;
}

int compute_Cfkt39j(int input) {
    int result = input * 43;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} TVRx9lYI_ctx_t;

void init_ctx(TVRx9lYI_ctx_t *ctx) {
    ctx->id = 2377;
    ctx->coefficient = 7.4;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} d2rtW7J5_ctx_t;

void init_ctx(d2rtW7J5_ctx_t *ctx) {
    ctx->id = 6428;
    ctx->coefficient = 1.3;
    ctx->flags = 150;
}

int compute_2h38nqE(int input) {
    int result = input * 16;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} xWNM5UY3_ctx_t;

void init_ctx(xWNM5UY3_ctx_t *ctx) {
    ctx->id = 5795;
    ctx->coefficient = 8.1;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} ljOgZgII_ctx_t;

void init_ctx(ljOgZgII_ctx_t *ctx) {
    ctx->id = 7260;
    ctx->coefficient = 3.0;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} rLZMKbe1_ctx_t;

void init_ctx(rLZMKbe1_ctx_t *ctx) {
    ctx->id = 8108;
    ctx->coefficient = 7.1;
    ctx->flags = 230;
}

int compute_wve0VOJ(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} DiDutNjZ_ctx_t;

void init_ctx(DiDutNjZ_ctx_t *ctx) {
    ctx->id = 2698;
    ctx->coefficient = 5.2;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} MvCXSM1Y_ctx_t;

void init_ctx(MvCXSM1Y_ctx_t *ctx) {
    ctx->id = 6990;
    ctx->coefficient = 3.7;
    ctx->flags = 194;
}

int compute_9I0dMOL(int input) {
    int result = input * 30;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_oNiBB4F(int input) {
    int result = input * 14;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} neVI5j0T_ctx_t;

void init_ctx(neVI5j0T_ctx_t *ctx) {
    ctx->id = 1797;
    ctx->coefficient = 5.6;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Ll0IGxIU_ctx_t;

void init_ctx(Ll0IGxIU_ctx_t *ctx) {
    ctx->id = 6264;
    ctx->coefficient = 9.9;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} umPVjqUF_ctx_t;

void init_ctx(umPVjqUF_ctx_t *ctx) {
    ctx->id = 3520;
    ctx->coefficient = 4.3;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 1WQuqJth_ctx_t;

void init_ctx(1WQuqJth_ctx_t *ctx) {
    ctx->id = 1774;
    ctx->coefficient = 8.2;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Eq90RSpe_ctx_t;

void init_ctx(Eq90RSpe_ctx_t *ctx) {
    ctx->id = 2253;
    ctx->coefficient = 2.0;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} r0uLpxJx_ctx_t;

void init_ctx(r0uLpxJx_ctx_t *ctx) {
    ctx->id = 9388;
    ctx->coefficient = 4.2;
    ctx->flags = 56;
}

int compute_BQztHts(int input) {
    int result = input * 2;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} N6D1s0kh_ctx_t;

void init_ctx(N6D1s0kh_ctx_t *ctx) {
    ctx->id = 7725;
    ctx->coefficient = 8.8;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ED3kUZI9_ctx_t;

void init_ctx(ED3kUZI9_ctx_t *ctx) {
    ctx->id = 4832;
    ctx->coefficient = 3.2;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 5FjK8GMF_ctx_t;

void init_ctx(5FjK8GMF_ctx_t *ctx) {
    ctx->id = 4187;
    ctx->coefficient = 4.3;
    ctx->flags = 3;
}

int compute_HtU8s7n(int input) {
    int result = input * 48;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} BmD2LQCa_ctx_t;

void init_ctx(BmD2LQCa_ctx_t *ctx) {
    ctx->id = 9491;
    ctx->coefficient = 0.9;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} eNrq3MF9_ctx_t;

void init_ctx(eNrq3MF9_ctx_t *ctx) {
    ctx->id = 2146;
    ctx->coefficient = 2.3;
    ctx->flags = 111;
}

int compute_3X06PVe(int input) {
    int result = input * 17;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_jzKNdhp(int input) {
    int result = input * 69;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} zzgtMDpM_ctx_t;

void init_ctx(zzgtMDpM_ctx_t *ctx) {
    ctx->id = 5819;
    ctx->coefficient = 7.6;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} MCejUHC0_ctx_t;

void init_ctx(MCejUHC0_ctx_t *ctx) {
    ctx->id = 5293;
    ctx->coefficient = 0.8;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Tc3xBb6I_ctx_t;

void init_ctx(Tc3xBb6I_ctx_t *ctx) {
    ctx->id = 9603;
    ctx->coefficient = 3.9;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} NWG9b3LJ_ctx_t;

void init_ctx(NWG9b3LJ_ctx_t *ctx) {
    ctx->id = 6838;
    ctx->coefficient = 5.3;
    ctx->flags = 167;
}

int compute_SZJr8Vf(int input) {
    int result = input * 49;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 3h1tYQC4_ctx_t;

void init_ctx(3h1tYQC4_ctx_t *ctx) {
    ctx->id = 3686;
    ctx->coefficient = 1.8;
    ctx->flags = 172;
}

int compute_i694igR(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} d45Dmqu2_ctx_t;

void init_ctx(d45Dmqu2_ctx_t *ctx) {
    ctx->id = 1698;
    ctx->coefficient = 9.0;
    ctx->flags = 150;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} F4BlPKvi_ctx_t;

void init_ctx(F4BlPKvi_ctx_t *ctx) {
    ctx->id = 4564;
    ctx->coefficient = 4.6;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} vfQKjm9p_ctx_t;

void init_ctx(vfQKjm9p_ctx_t *ctx) {
    ctx->id = 4881;
    ctx->coefficient = 9.7;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} rVx4lWGA_ctx_t;

void init_ctx(rVx4lWGA_ctx_t *ctx) {
    ctx->id = 3215;
    ctx->coefficient = 5.3;
    ctx->flags = 143;
}

int compute_9RN40L3(int input) {
    int result = input * 18;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} P0Bvt9z9_ctx_t;

void init_ctx(P0Bvt9z9_ctx_t *ctx) {
    ctx->id = 8178;
    ctx->coefficient = 6.2;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} mWCvIbDl_ctx_t;

void init_ctx(mWCvIbDl_ctx_t *ctx) {
    ctx->id = 8635;
    ctx->coefficient = 5.1;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} WwV6U1gH_ctx_t;

void init_ctx(WwV6U1gH_ctx_t *ctx) {
    ctx->id = 7757;
    ctx->coefficient = 4.7;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} HvrlvKS9_ctx_t;

void init_ctx(HvrlvKS9_ctx_t *ctx) {
    ctx->id = 6074;
    ctx->coefficient = 5.0;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} jtfa2S6L_ctx_t;

void init_ctx(jtfa2S6L_ctx_t *ctx) {
    ctx->id = 4157;
    ctx->coefficient = 4.3;
    ctx->flags = 131;
}

int compute_FMscPJ1(int input) {
    int result = input * 15;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} OQyzaezP_ctx_t;

void init_ctx(OQyzaezP_ctx_t *ctx) {
    ctx->id = 9889;
    ctx->coefficient = 5.4;
    ctx->flags = 46;
}

int compute_fdWMaui(int input) {
    int result = input * 49;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_oTtphmj(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_C2IssQ8(int input) {
    int result = input * 15;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_syTCVSq(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_Trjna0L(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_rKePumY(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} FbeDu3om_ctx_t;

void init_ctx(FbeDu3om_ctx_t *ctx) {
    ctx->id = 7544;
    ctx->coefficient = 3.1;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} TLsV5JwI_ctx_t;

void init_ctx(TLsV5JwI_ctx_t *ctx) {
    ctx->id = 3107;
    ctx->coefficient = 9.2;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} sgskswZS_ctx_t;

void init_ctx(sgskswZS_ctx_t *ctx) {
    ctx->id = 5377;
    ctx->coefficient = 8.9;
    ctx->flags = 74;
}

int compute_HW8gETW(int input) {
    int result = input * 46;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ppRnl3Xv_ctx_t;

void init_ctx(ppRnl3Xv_ctx_t *ctx) {
    ctx->id = 7124;
    ctx->coefficient = 6.0;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} iGPk5zGn_ctx_t;

void init_ctx(iGPk5zGn_ctx_t *ctx) {
    ctx->id = 5217;
    ctx->coefficient = 6.0;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} zi0rCvyG_ctx_t;

void init_ctx(zi0rCvyG_ctx_t *ctx) {
    ctx->id = 7544;
    ctx->coefficient = 2.5;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} HBZIMHOS_ctx_t;

void init_ctx(HBZIMHOS_ctx_t *ctx) {
    ctx->id = 6997;
    ctx->coefficient = 3.9;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} z92YBAZg_ctx_t;

void init_ctx(z92YBAZg_ctx_t *ctx) {
    ctx->id = 9130;
    ctx->coefficient = 8.9;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} DPYVLnQp_ctx_t;

void init_ctx(DPYVLnQp_ctx_t *ctx) {
    ctx->id = 7793;
    ctx->coefficient = 4.7;
    ctx->flags = 93;
}

int compute_3o1gsnM(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_HBGF7K1(int input) {
    int result = input * 42;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} fkz3zCYm_ctx_t;

void init_ctx(fkz3zCYm_ctx_t *ctx) {
    ctx->id = 9099;
    ctx->coefficient = 0.4;
    ctx->flags = 160;
}

int compute_0a2xS26(int input) {
    int result = input * 25;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} RgM2Oqsb_ctx_t;

void init_ctx(RgM2Oqsb_ctx_t *ctx) {
    ctx->id = 5488;
    ctx->coefficient = 2.3;
    ctx->flags = 130;
}

int compute_83ToqLS(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_QLffahe(int input) {
    int result = input * 18;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 6IgOS0iN_ctx_t;

void init_ctx(6IgOS0iN_ctx_t *ctx) {
    ctx->id = 5393;
    ctx->coefficient = 1.5;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} UmzMpo5n_ctx_t;

void init_ctx(UmzMpo5n_ctx_t *ctx) {
    ctx->id = 7152;
    ctx->coefficient = 1.1;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} YFwllLkg_ctx_t;

void init_ctx(YFwllLkg_ctx_t *ctx) {
    ctx->id = 8143;
    ctx->coefficient = 8.4;
    ctx->flags = 17;
}

int compute_yjhrwSh(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} RNXBnY12_ctx_t;

void init_ctx(RNXBnY12_ctx_t *ctx) {
    ctx->id = 9884;
    ctx->coefficient = 1.0;
    ctx->flags = 100;
}

int compute_wMjssQH(int input) {
    int result = input * 68;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} iljr0dqp_ctx_t;

void init_ctx(iljr0dqp_ctx_t *ctx) {
    ctx->id = 4983;
    ctx->coefficient = 5.4;
    ctx->flags = 124;
}

int compute_vba3680(int input) {
    int result = input * 14;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_A3UbRhK(int input) {
    int result = input * 8;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_FasnIeG(int input) {
    int result = input * 63;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} 78m7HZZ7_ctx_t;

void init_ctx(78m7HZZ7_ctx_t *ctx) {
    ctx->id = 2132;
    ctx->coefficient = 5.5;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} ww56QTfa_ctx_t;

void init_ctx(ww56QTfa_ctx_t *ctx) {
    ctx->id = 4638;
    ctx->coefficient = 3.3;
    ctx->flags = 142;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} tyoL6HNN_ctx_t;

void init_ctx(tyoL6HNN_ctx_t *ctx) {
    ctx->id = 2338;
    ctx->coefficient = 9.3;
    ctx->flags = 227;
}

int compute_bgVajPx(int input) {
    int result = input * 59;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} aDCH4Ybd_ctx_t;

void init_ctx(aDCH4Ybd_ctx_t *ctx) {
    ctx->id = 3233;
    ctx->coefficient = 9.8;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 7yUzDXgd_ctx_t;

void init_ctx(7yUzDXgd_ctx_t *ctx) {
    ctx->id = 2945;
    ctx->coefficient = 6.0;
    ctx->flags = 82;
}

int compute_ms2l5U0(int input) {
    int result = input * 66;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} oKSElCcY_ctx_t;

void init_ctx(oKSElCcY_ctx_t *ctx) {
    ctx->id = 4707;
    ctx->coefficient = 5.0;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} HcEHJOmI_ctx_t;

void init_ctx(HcEHJOmI_ctx_t *ctx) {
    ctx->id = 2135;
    ctx->coefficient = 3.0;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} po1TIctH_ctx_t;

void init_ctx(po1TIctH_ctx_t *ctx) {
    ctx->id = 8693;
    ctx->coefficient = 5.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} zNXLpFfP_ctx_t;

void init_ctx(zNXLpFfP_ctx_t *ctx) {
    ctx->id = 2863;
    ctx->coefficient = 5.8;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} rYSxGC5m_ctx_t;

void init_ctx(rYSxGC5m_ctx_t *ctx) {
    ctx->id = 6331;
    ctx->coefficient = 7.5;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} M95ouH4W_ctx_t;

void init_ctx(M95ouH4W_ctx_t *ctx) {
    ctx->id = 8917;
    ctx->coefficient = 2.7;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} CooVp7pT_ctx_t;

void init_ctx(CooVp7pT_ctx_t *ctx) {
    ctx->id = 3025;
    ctx->coefficient = 8.2;
    ctx->flags = 26;
}

int compute_QD0L61T(int input) {
    int result = input * 41;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} korC0qE8_ctx_t;

void init_ctx(korC0qE8_ctx_t *ctx) {
    ctx->id = 2511;
    ctx->coefficient = 7.7;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} KkIQcLZc_ctx_t;

void init_ctx(KkIQcLZc_ctx_t *ctx) {
    ctx->id = 1551;
    ctx->coefficient = 9.4;
    ctx->flags = 29;
}

int compute_mI3uFi8(int input) {
    int result = input * 19;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_cQBNCR1(int input) {
    int result = input * 34;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

int compute_yjLiXx7(int input) {
    int result = input * 6;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2fqa1z8e_ctx_t;

void init_ctx(2fqa1z8e_ctx_t *ctx) {
    ctx->id = 5351;
    ctx->coefficient = 6.6;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} YRgteAUZ_ctx_t;

void init_ctx(YRgteAUZ_ctx_t *ctx) {
    ctx->id = 6422;
    ctx->coefficient = 4.2;
    ctx->flags = 84;
}

int compute_GGfF1Ql(int input) {
    int result = input * 6;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} wgpdfoPO_ctx_t;

void init_ctx(wgpdfoPO_ctx_t *ctx) {
    ctx->id = 2714;
    ctx->coefficient = 0.3;
    ctx->flags = 187;
}

int compute_GU60weM(int input) {
    int result = input * 67;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} QNmJnAyy_ctx_t;

void init_ctx(QNmJnAyy_ctx_t *ctx) {
    ctx->id = 1151;
    ctx->coefficient = 1.2;
    ctx->flags = 13;
}

int compute_C7mOyyu(int input) {
    int result = input * 60;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_8UfMBHz(int input) {
    int result = input * 58;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} lAp4x1cQ_ctx_t;

void init_ctx(lAp4x1cQ_ctx_t *ctx) {
    ctx->id = 4917;
    ctx->coefficient = 8.6;
    ctx->flags = 147;
}

int compute_Tf7laOB(int input) {
    int result = input * 39;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} RKCnSt6q_ctx_t;

void init_ctx(RKCnSt6q_ctx_t *ctx) {
    ctx->id = 5561;
    ctx->coefficient = 2.2;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} aPMcGGOW_ctx_t;

void init_ctx(aPMcGGOW_ctx_t *ctx) {
    ctx->id = 8540;
    ctx->coefficient = 9.6;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} CKKciHrY_ctx_t;

void init_ctx(CKKciHrY_ctx_t *ctx) {
    ctx->id = 9391;
    ctx->coefficient = 5.7;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} B0coJslN_ctx_t;

void init_ctx(B0coJslN_ctx_t *ctx) {
    ctx->id = 3625;
    ctx->coefficient = 8.9;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} cmtEfzho_ctx_t;

void init_ctx(cmtEfzho_ctx_t *ctx) {
    ctx->id = 3480;
    ctx->coefficient = 6.9;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} XCYragMy_ctx_t;

void init_ctx(XCYragMy_ctx_t *ctx) {
    ctx->id = 5909;
    ctx->coefficient = 8.7;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 1CcXTZ9D_ctx_t;

void init_ctx(1CcXTZ9D_ctx_t *ctx) {
    ctx->id = 8096;
    ctx->coefficient = 7.5;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} x9XAuEKD_ctx_t;

void init_ctx(x9XAuEKD_ctx_t *ctx) {
    ctx->id = 3918;
    ctx->coefficient = 8.1;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} QWmvZR97_ctx_t;

void init_ctx(QWmvZR97_ctx_t *ctx) {
    ctx->id = 9593;
    ctx->coefficient = 8.1;
    ctx->flags = 141;
}

int compute_jYY1icj(int input) {
    int result = input * 62;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} RLrwMo2z_ctx_t;

void init_ctx(RLrwMo2z_ctx_t *ctx) {
    ctx->id = 3546;
    ctx->coefficient = 5.9;
    ctx->flags = 107;
}

int compute_Xum94yW(int input) {
    int result = input * 59;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} JTztiFjA_ctx_t;

void init_ctx(JTztiFjA_ctx_t *ctx) {
    ctx->id = 2633;
    ctx->coefficient = 4.2;
    ctx->flags = 201;
}

int compute_5tTHLVW(int input) {
    int result = input * 56;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} IsVdKhWX_ctx_t;

void init_ctx(IsVdKhWX_ctx_t *ctx) {
    ctx->id = 7135;
    ctx->coefficient = 4.0;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} aLOo85fC_ctx_t;

void init_ctx(aLOo85fC_ctx_t *ctx) {
    ctx->id = 7091;
    ctx->coefficient = 0.2;
    ctx->flags = 164;
}

int compute_m0Q8RDe(int input) {
    int result = input * 18;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} WA4bHwk3_ctx_t;

void init_ctx(WA4bHwk3_ctx_t *ctx) {
    ctx->id = 9673;
    ctx->coefficient = 8.4;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} K6ZedLfR_ctx_t;

void init_ctx(K6ZedLfR_ctx_t *ctx) {
    ctx->id = 1098;
    ctx->coefficient = 1.0;
    ctx->flags = 25;
}

int compute_jPFIdl1(int input) {
    int result = input * 14;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} nkEwCKDK_ctx_t;

void init_ctx(nkEwCKDK_ctx_t *ctx) {
    ctx->id = 7332;
    ctx->coefficient = 4.8;
    ctx->flags = 19;
}

int compute_WVsU86s(int input) {
    int result = input * 68;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_PfofFpQ(int input) {
    int result = input * 4;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} YdS3EuW3_ctx_t;

void init_ctx(YdS3EuW3_ctx_t *ctx) {
    ctx->id = 8636;
    ctx->coefficient = 3.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4KWYYdGL_ctx_t;

void init_ctx(4KWYYdGL_ctx_t *ctx) {
    ctx->id = 1088;
    ctx->coefficient = 9.1;
    ctx->flags = 55;
}

int compute_YGIkl3w(int input) {
    int result = input * 70;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_Bhbe57o(int input) {
    int result = input * 26;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 00sRHe9Q_ctx_t;

void init_ctx(00sRHe9Q_ctx_t *ctx) {
    ctx->id = 2582;
    ctx->coefficient = 6.0;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} WUpyQaFG_ctx_t;

void init_ctx(WUpyQaFG_ctx_t *ctx) {
    ctx->id = 2656;
    ctx->coefficient = 9.1;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} C49sl94u_ctx_t;

void init_ctx(C49sl94u_ctx_t *ctx) {
    ctx->id = 1069;
    ctx->coefficient = 4.3;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 14GZVp17_ctx_t;

void init_ctx(14GZVp17_ctx_t *ctx) {
    ctx->id = 7771;
    ctx->coefficient = 8.3;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} XVKZyQAE_ctx_t;

void init_ctx(XVKZyQAE_ctx_t *ctx) {
    ctx->id = 6675;
    ctx->coefficient = 8.3;
    ctx->flags = 228;
}

int compute_FSYj7re(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 6kJFHaIw_ctx_t;

void init_ctx(6kJFHaIw_ctx_t *ctx) {
    ctx->id = 5629;
    ctx->coefficient = 3.3;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 3VH28Z4p_ctx_t;

void init_ctx(3VH28Z4p_ctx_t *ctx) {
    ctx->id = 6346;
    ctx->coefficient = 6.4;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} WHXbwJ3f_ctx_t;

void init_ctx(WHXbwJ3f_ctx_t *ctx) {
    ctx->id = 7603;
    ctx->coefficient = 7.4;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 9shmBJiY_ctx_t;

void init_ctx(9shmBJiY_ctx_t *ctx) {
    ctx->id = 3678;
    ctx->coefficient = 0.5;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} pKU4lCJX_ctx_t;

void init_ctx(pKU4lCJX_ctx_t *ctx) {
    ctx->id = 8748;
    ctx->coefficient = 3.0;
    ctx->flags = 179;
}

int compute_XtPw2fb(int input) {
    int result = input * 63;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_7bv1RiZ(int input) {
    int result = input * 38;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_LmfG57V(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 9P5D8P65_ctx_t;

void init_ctx(9P5D8P65_ctx_t *ctx) {
    ctx->id = 8165;
    ctx->coefficient = 5.2;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} rvmN5ol3_ctx_t;

void init_ctx(rvmN5ol3_ctx_t *ctx) {
    ctx->id = 4909;
    ctx->coefficient = 1.6;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} nKgOVDZN_ctx_t;

void init_ctx(nKgOVDZN_ctx_t *ctx) {
    ctx->id = 6753;
    ctx->coefficient = 3.7;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} fxiBVmpu_ctx_t;

void init_ctx(fxiBVmpu_ctx_t *ctx) {
    ctx->id = 8753;
    ctx->coefficient = 0.6;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} W1VYir3Z_ctx_t;

void init_ctx(W1VYir3Z_ctx_t *ctx) {
    ctx->id = 9582;
    ctx->coefficient = 5.2;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 8aDQWpbY_ctx_t;

void init_ctx(8aDQWpbY_ctx_t *ctx) {
    ctx->id = 9364;
    ctx->coefficient = 8.3;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} HmLXAwWf_ctx_t;

void init_ctx(HmLXAwWf_ctx_t *ctx) {
    ctx->id = 3026;
    ctx->coefficient = 6.3;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} BLydrJ8l_ctx_t;

void init_ctx(BLydrJ8l_ctx_t *ctx) {
    ctx->id = 3957;
    ctx->coefficient = 3.5;
    ctx->flags = 154;
}

int compute_ldCk66X(int input) {
    int result = input * 56;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_WaUjCUk(int input) {
    int result = input * 14;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} bGjuv228_ctx_t;

void init_ctx(bGjuv228_ctx_t *ctx) {
    ctx->id = 8315;
    ctx->coefficient = 2.0;
    ctx->flags = 156;
}

int compute_FxaHUu8(int input) {
    int result = input * 54;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} Rykuv8R6_ctx_t;

void init_ctx(Rykuv8R6_ctx_t *ctx) {
    ctx->id = 2665;
    ctx->coefficient = 5.3;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} J0ygAOU0_ctx_t;

void init_ctx(J0ygAOU0_ctx_t *ctx) {
    ctx->id = 7473;
    ctx->coefficient = 1.9;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} VsYlrewj_ctx_t;

void init_ctx(VsYlrewj_ctx_t *ctx) {
    ctx->id = 4709;
    ctx->coefficient = 7.4;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} BXZAzarm_ctx_t;

void init_ctx(BXZAzarm_ctx_t *ctx) {
    ctx->id = 3340;
    ctx->coefficient = 6.1;
    ctx->flags = 191;
}

int compute_SwxEQlY(int input) {
    int result = input * 42;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RlwQjZzg_ctx_t;

void init_ctx(RlwQjZzg_ctx_t *ctx) {
    ctx->id = 2778;
    ctx->coefficient = 7.3;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ECre7saz_ctx_t;

void init_ctx(ECre7saz_ctx_t *ctx) {
    ctx->id = 7104;
    ctx->coefficient = 4.4;
    ctx->flags = 204;
}

int compute_cgbg9R4(int input) {
    int result = input * 21;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 30pCUKH4_ctx_t;

void init_ctx(30pCUKH4_ctx_t *ctx) {
    ctx->id = 7114;
    ctx->coefficient = 6.5;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} w6RId1OA_ctx_t;

void init_ctx(w6RId1OA_ctx_t *ctx) {
    ctx->id = 3716;
    ctx->coefficient = 9.4;
    ctx->flags = 177;
}

int compute_ao7CJhA(int input) {
    int result = input * 15;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} nfHJ2b2K_ctx_t;

void init_ctx(nfHJ2b2K_ctx_t *ctx) {
    ctx->id = 6335;
    ctx->coefficient = 4.1;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} UQxnniLM_ctx_t;

void init_ctx(UQxnniLM_ctx_t *ctx) {
    ctx->id = 7060;
    ctx->coefficient = 2.5;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} NbTNmHMB_ctx_t;

void init_ctx(NbTNmHMB_ctx_t *ctx) {
    ctx->id = 3710;
    ctx->coefficient = 2.8;
    ctx->flags = 6;
}

int compute_NZKOleL(int input) {
    int result = input * 40;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} zwvbeLfo_ctx_t;

void init_ctx(zwvbeLfo_ctx_t *ctx) {
    ctx->id = 5036;
    ctx->coefficient = 4.2;
    ctx->flags = 189;
}

int compute_xw81wQc(int input) {
    int result = input * 25;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_rWdHzao(int input) {
    int result = input * 49;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} T9ggVpzp_ctx_t;

void init_ctx(T9ggVpzp_ctx_t *ctx) {
    ctx->id = 9274;
    ctx->coefficient = 6.3;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} UYqGNvUT_ctx_t;

void init_ctx(UYqGNvUT_ctx_t *ctx) {
    ctx->id = 9622;
    ctx->coefficient = 4.4;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} QyxacJ4M_ctx_t;

void init_ctx(QyxacJ4M_ctx_t *ctx) {
    ctx->id = 1963;
    ctx->coefficient = 1.5;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} ztrtUNR7_ctx_t;

void init_ctx(ztrtUNR7_ctx_t *ctx) {
    ctx->id = 4353;
    ctx->coefficient = 0.7;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} Lfov0pfY_ctx_t;

void init_ctx(Lfov0pfY_ctx_t *ctx) {
    ctx->id = 9191;
    ctx->coefficient = 6.7;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 3sR3WCMC_ctx_t;

void init_ctx(3sR3WCMC_ctx_t *ctx) {
    ctx->id = 2327;
    ctx->coefficient = 0.5;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} kCCXHXPQ_ctx_t;

void init_ctx(kCCXHXPQ_ctx_t *ctx) {
    ctx->id = 4367;
    ctx->coefficient = 8.5;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} mBDaFioT_ctx_t;

void init_ctx(mBDaFioT_ctx_t *ctx) {
    ctx->id = 5037;
    ctx->coefficient = 7.4;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} RoxIAOTs_ctx_t;

void init_ctx(RoxIAOTs_ctx_t *ctx) {
    ctx->id = 9185;
    ctx->coefficient = 8.3;
    ctx->flags = 184;
}

int compute_3yQrJmq(int input) {
    int result = input * 58;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} VZQgrVv7_ctx_t;

void init_ctx(VZQgrVv7_ctx_t *ctx) {
    ctx->id = 9397;
    ctx->coefficient = 7.1;
    ctx->flags = 18;
}

int compute_nWx2Lq8(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_0qXF4T4(int input) {
    int result = input * 55;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} IM7VjALS_ctx_t;

void init_ctx(IM7VjALS_ctx_t *ctx) {
    ctx->id = 4625;
    ctx->coefficient = 1.1;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} xydmaMMb_ctx_t;

void init_ctx(xydmaMMb_ctx_t *ctx) {
    ctx->id = 5358;
    ctx->coefficient = 8.6;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} gGI0eAVv_ctx_t;

void init_ctx(gGI0eAVv_ctx_t *ctx) {
    ctx->id = 7130;
    ctx->coefficient = 3.0;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} ZgaguoQ6_ctx_t;

void init_ctx(ZgaguoQ6_ctx_t *ctx) {
    ctx->id = 9942;
    ctx->coefficient = 5.3;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} qf8yYuGl_ctx_t;

void init_ctx(qf8yYuGl_ctx_t *ctx) {
    ctx->id = 3957;
    ctx->coefficient = 4.0;
    ctx->flags = 183;
}

int compute_M7i7igK(int input) {
    int result = input * 68;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} LCNZyZFI_ctx_t;

void init_ctx(LCNZyZFI_ctx_t *ctx) {
    ctx->id = 7623;
    ctx->coefficient = 4.5;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} VZkcO4YZ_ctx_t;

void init_ctx(VZkcO4YZ_ctx_t *ctx) {
    ctx->id = 8229;
    ctx->coefficient = 9.1;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} iPvE0TUL_ctx_t;

void init_ctx(iPvE0TUL_ctx_t *ctx) {
    ctx->id = 3498;
    ctx->coefficient = 1.5;
    ctx->flags = 167;
}

int compute_eO4ItpT(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} tZmZtTVv_ctx_t;

void init_ctx(tZmZtTVv_ctx_t *ctx) {
    ctx->id = 7053;
    ctx->coefficient = 6.1;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} aBaKAZUE_ctx_t;

void init_ctx(aBaKAZUE_ctx_t *ctx) {
    ctx->id = 2533;
    ctx->coefficient = 9.8;
    ctx->flags = 223;
}

int compute_5mfmaaj(int input) {
    int result = input * 46;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} eyaWre7k_ctx_t;

void init_ctx(eyaWre7k_ctx_t *ctx) {
    ctx->id = 3365;
    ctx->coefficient = 5.7;
    ctx->flags = 178;
}

int compute_p5DWo6l(int input) {
    int result = input * 59;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_M4cRN8v(int input) {
    int result = input * 52;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} LjPMvKNr_ctx_t;

void init_ctx(LjPMvKNr_ctx_t *ctx) {
    ctx->id = 1578;
    ctx->coefficient = 8.9;
    ctx->flags = 101;
}

int compute_S7oOIsn(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} HkdkKKpW_ctx_t;

void init_ctx(HkdkKKpW_ctx_t *ctx) {
    ctx->id = 7146;
    ctx->coefficient = 2.1;
    ctx->flags = 89;
}

int compute_wP9LDDY(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} cnZEiWTm_ctx_t;

void init_ctx(cnZEiWTm_ctx_t *ctx) {
    ctx->id = 6258;
    ctx->coefficient = 8.7;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} LfB7ZWXb_ctx_t;

void init_ctx(LfB7ZWXb_ctx_t *ctx) {
    ctx->id = 2007;
    ctx->coefficient = 9.8;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} sApPF9tL_ctx_t;

void init_ctx(sApPF9tL_ctx_t *ctx) {
    ctx->id = 7600;
    ctx->coefficient = 8.1;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} vmp2qd9v_ctx_t;

void init_ctx(vmp2qd9v_ctx_t *ctx) {
    ctx->id = 6173;
    ctx->coefficient = 4.9;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 6HuHCvEQ_ctx_t;

void init_ctx(6HuHCvEQ_ctx_t *ctx) {
    ctx->id = 6861;
    ctx->coefficient = 1.6;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} ew2kdsoB_ctx_t;

void init_ctx(ew2kdsoB_ctx_t *ctx) {
    ctx->id = 5751;
    ctx->coefficient = 9.1;
    ctx->flags = 54;
}

int compute_G31l5ys(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_uAr9Ai6(int input) {
    int result = input * 45;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_pLQXzma(int input) {
    int result = input * 58;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 4lewM4WJ_ctx_t;

void init_ctx(4lewM4WJ_ctx_t *ctx) {
    ctx->id = 8155;
    ctx->coefficient = 0.1;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} rs2vMpLL_ctx_t;

void init_ctx(rs2vMpLL_ctx_t *ctx) {
    ctx->id = 9616;
    ctx->coefficient = 7.0;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} TFZM5FXa_ctx_t;

void init_ctx(TFZM5FXa_ctx_t *ctx) {
    ctx->id = 6618;
    ctx->coefficient = 4.4;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} TYW3zZsu_ctx_t;

void init_ctx(TYW3zZsu_ctx_t *ctx) {
    ctx->id = 7516;
    ctx->coefficient = 4.8;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} mrIswjOq_ctx_t;

void init_ctx(mrIswjOq_ctx_t *ctx) {
    ctx->id = 5573;
    ctx->coefficient = 3.1;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Ub78J7bB_ctx_t;

void init_ctx(Ub78J7bB_ctx_t *ctx) {
    ctx->id = 5709;
    ctx->coefficient = 3.3;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 2MEsASf7_ctx_t;

void init_ctx(2MEsASf7_ctx_t *ctx) {
    ctx->id = 4993;
    ctx->coefficient = 6.8;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} UGKBiHqG_ctx_t;

void init_ctx(UGKBiHqG_ctx_t *ctx) {
    ctx->id = 7367;
    ctx->coefficient = 2.2;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 6nWfZaLw_ctx_t;

void init_ctx(6nWfZaLw_ctx_t *ctx) {
    ctx->id = 6309;
    ctx->coefficient = 5.3;
    ctx->flags = 141;
}

int compute_sQx8ytD(int input) {
    int result = input * 46;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} LC0YxsaO_ctx_t;

void init_ctx(LC0YxsaO_ctx_t *ctx) {
    ctx->id = 3190;
    ctx->coefficient = 0.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} prxc9LBK_ctx_t;

void init_ctx(prxc9LBK_ctx_t *ctx) {
    ctx->id = 4600;
    ctx->coefficient = 9.0;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} jk19PGvQ_ctx_t;

void init_ctx(jk19PGvQ_ctx_t *ctx) {
    ctx->id = 8118;
    ctx->coefficient = 6.3;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} hZSRyJAX_ctx_t;

void init_ctx(hZSRyJAX_ctx_t *ctx) {
    ctx->id = 6577;
    ctx->coefficient = 8.1;
    ctx->flags = 112;
}

int compute_h3SmkTS(int input) {
    int result = input * 14;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} iVPGFVfU_ctx_t;

void init_ctx(iVPGFVfU_ctx_t *ctx) {
    ctx->id = 3320;
    ctx->coefficient = 2.6;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 2W69QfWe_ctx_t;

void init_ctx(2W69QfWe_ctx_t *ctx) {
    ctx->id = 7099;
    ctx->coefficient = 5.8;
    ctx->flags = 150;
}

int compute_EheQM9N(int input) {
    int result = input * 56;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} tV45wyrc_ctx_t;

void init_ctx(tV45wyrc_ctx_t *ctx) {
    ctx->id = 9868;
    ctx->coefficient = 8.3;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} NZcpLHQT_ctx_t;

void init_ctx(NZcpLHQT_ctx_t *ctx) {
    ctx->id = 4331;
    ctx->coefficient = 4.7;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Gs38m3Jl_ctx_t;

void init_ctx(Gs38m3Jl_ctx_t *ctx) {
    ctx->id = 4098;
    ctx->coefficient = 2.7;
    ctx->flags = 208;
}

int compute_0gEdcHm(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} UoBZN2zS_ctx_t;

void init_ctx(UoBZN2zS_ctx_t *ctx) {
    ctx->id = 3417;
    ctx->coefficient = 8.6;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} NAgbHDAo_ctx_t;

void init_ctx(NAgbHDAo_ctx_t *ctx) {
    ctx->id = 1763;
    ctx->coefficient = 3.5;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} LC0p83Dd_ctx_t;

void init_ctx(LC0p83Dd_ctx_t *ctx) {
    ctx->id = 4292;
    ctx->coefficient = 2.6;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} sCTKRVLL_ctx_t;

void init_ctx(sCTKRVLL_ctx_t *ctx) {
    ctx->id = 5431;
    ctx->coefficient = 4.1;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} VE9UJXAH_ctx_t;

void init_ctx(VE9UJXAH_ctx_t *ctx) {
    ctx->id = 2001;
    ctx->coefficient = 1.5;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} F9nNPtyy_ctx_t;

void init_ctx(F9nNPtyy_ctx_t *ctx) {
    ctx->id = 7520;
    ctx->coefficient = 4.6;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} hOGlCw0w_ctx_t;

void init_ctx(hOGlCw0w_ctx_t *ctx) {
    ctx->id = 9473;
    ctx->coefficient = 5.2;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} cJIrqhgq_ctx_t;

void init_ctx(cJIrqhgq_ctx_t *ctx) {
    ctx->id = 3087;
    ctx->coefficient = 2.9;
    ctx->flags = 127;
}

int compute_6WizbI8(int input) {
    int result = input * 47;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} MMkzgOwI_ctx_t;

void init_ctx(MMkzgOwI_ctx_t *ctx) {
    ctx->id = 5263;
    ctx->coefficient = 3.5;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} raOJ73D3_ctx_t;

void init_ctx(raOJ73D3_ctx_t *ctx) {
    ctx->id = 1343;
    ctx->coefficient = 5.2;
    ctx->flags = 191;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 7kMP9s0s_ctx_t;

void init_ctx(7kMP9s0s_ctx_t *ctx) {
    ctx->id = 5032;
    ctx->coefficient = 1.7;
    ctx->flags = 29;
}

int compute_g9JLCKX(int input) {
    int result = input * 30;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} AqxiwU5i_ctx_t;

void init_ctx(AqxiwU5i_ctx_t *ctx) {
    ctx->id = 4614;
    ctx->coefficient = 9.2;
    ctx->flags = 132;
}

