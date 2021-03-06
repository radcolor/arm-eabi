/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define WCGR0 96
#define DOM_CC_X_AND_Y 0
#define WCGR1 97
#define SP_REGNUM 13
#define APSRGE_REGNUM 105
#define VFPCC_REGNUM 101
#define CMP_CMN 2
#define CMP_CMP 0
#define NUM_OF_COND_CMP 4
#define R0_REGNUM 0
#define VPR_REGNUM 106
#define DOM_CC_X_OR_Y 2
#define APSRQ_REGNUM 104
#define CMN_CMN 3
#define CMN_CMP 1
#define FDPIC_REGNUM 9
#define CC_REGNUM 100
#define LAST_ARM_REGNUM 15
#define PC_REGNUM 15
#define R4_REGNUM 4
#define LR_REGNUM 14
#define R1_REGNUM 1
#define DOM_CC_NX_OR_Y 1
#define IP_REGNUM 12
#define WCGR2 98
#define WCGR3 99

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOTSYM_OFF = 20,
  UNSPEC_THUMB1_CASESI = 21,
  UNSPEC_RBIT = 22,
  UNSPEC_SYMBOL_OFFSET = 23,
  UNSPEC_MEMORY_BARRIER = 24,
  UNSPEC_UNALIGNED_LOAD = 25,
  UNSPEC_UNALIGNED_STORE = 26,
  UNSPEC_PIC_UNIFIED = 27,
  UNSPEC_Q_SET = 28,
  UNSPEC_GE_SET = 29,
  UNSPEC_APSR_READ = 30,
  UNSPEC_LL = 31,
  UNSPEC_VRINTZ = 32,
  UNSPEC_VRINTP = 33,
  UNSPEC_VRINTM = 34,
  UNSPEC_VRINTR = 35,
  UNSPEC_VRINTX = 36,
  UNSPEC_VRINTA = 37,
  UNSPEC_PROBE_STACK = 38,
  UNSPEC_NONSECURE_MEM = 39,
  UNSPEC_SP_SET = 40,
  UNSPEC_SP_TEST = 41,
  UNSPEC_PIC_RESTORE = 42,
  UNSPEC_SXTAB16 = 43,
  UNSPEC_UXTAB16 = 44,
  UNSPEC_SXTB16 = 45,
  UNSPEC_UXTB16 = 46,
  UNSPEC_QADD8 = 47,
  UNSPEC_QSUB8 = 48,
  UNSPEC_SHADD8 = 49,
  UNSPEC_SHSUB8 = 50,
  UNSPEC_UHADD8 = 51,
  UNSPEC_UHSUB8 = 52,
  UNSPEC_UQADD8 = 53,
  UNSPEC_UQSUB8 = 54,
  UNSPEC_QADD16 = 55,
  UNSPEC_QASX = 56,
  UNSPEC_QSAX = 57,
  UNSPEC_QSUB16 = 58,
  UNSPEC_SHADD16 = 59,
  UNSPEC_SHASX = 60,
  UNSPEC_SHSAX = 61,
  UNSPEC_SHSUB16 = 62,
  UNSPEC_UHADD16 = 63,
  UNSPEC_UHASX = 64,
  UNSPEC_UHSAX = 65,
  UNSPEC_UHSUB16 = 66,
  UNSPEC_UQADD16 = 67,
  UNSPEC_UQASX = 68,
  UNSPEC_UQSAX = 69,
  UNSPEC_UQSUB16 = 70,
  UNSPEC_SMUSD = 71,
  UNSPEC_SMUSDX = 72,
  UNSPEC_USAD8 = 73,
  UNSPEC_USADA8 = 74,
  UNSPEC_SMLALD = 75,
  UNSPEC_SMLALDX = 76,
  UNSPEC_SMLSLD = 77,
  UNSPEC_SMLSLDX = 78,
  UNSPEC_SMLAWB = 79,
  UNSPEC_SMLAWT = 80,
  UNSPEC_SEL = 81,
  UNSPEC_SADD8 = 82,
  UNSPEC_SSUB8 = 83,
  UNSPEC_UADD8 = 84,
  UNSPEC_USUB8 = 85,
  UNSPEC_SADD16 = 86,
  UNSPEC_SASX = 87,
  UNSPEC_SSAX = 88,
  UNSPEC_SSUB16 = 89,
  UNSPEC_UADD16 = 90,
  UNSPEC_UASX = 91,
  UNSPEC_USAX = 92,
  UNSPEC_USUB16 = 93,
  UNSPEC_SMLAD = 94,
  UNSPEC_SMLADX = 95,
  UNSPEC_SMLSD = 96,
  UNSPEC_SMLSDX = 97,
  UNSPEC_SMUAD = 98,
  UNSPEC_SMUADX = 99,
  UNSPEC_SSAT16 = 100,
  UNSPEC_USAT16 = 101,
  UNSPEC_CDE = 102,
  UNSPEC_CDEA = 103,
  UNSPEC_VCDE = 104,
  UNSPEC_VCDEA = 105,
  UNSPEC_DLS = 106,
  UNSPEC_WADDC = 107,
  UNSPEC_WABS = 108,
  UNSPEC_WQMULWMR = 109,
  UNSPEC_WQMULMR = 110,
  UNSPEC_WQMULWM = 111,
  UNSPEC_WQMULM = 112,
  UNSPEC_WQMIAxyn = 113,
  UNSPEC_WQMIAxy = 114,
  UNSPEC_TANDC = 115,
  UNSPEC_TORC = 116,
  UNSPEC_TORVSC = 117,
  UNSPEC_TEXTRC = 118,
  UNSPEC_GET_FPSCR_NZCVQC = 119,
  UNSPEC_ASHIFT_SIGNED = 120,
  UNSPEC_ASHIFT_UNSIGNED = 121,
  UNSPEC_CRC32B = 122,
  UNSPEC_CRC32H = 123,
  UNSPEC_CRC32W = 124,
  UNSPEC_CRC32CB = 125,
  UNSPEC_CRC32CH = 126,
  UNSPEC_CRC32CW = 127,
  UNSPEC_AESD = 128,
  UNSPEC_AESE = 129,
  UNSPEC_AESIMC = 130,
  UNSPEC_AESMC = 131,
  UNSPEC_AES_PROTECT = 132,
  UNSPEC_SHA1C = 133,
  UNSPEC_SHA1M = 134,
  UNSPEC_SHA1P = 135,
  UNSPEC_SHA1H = 136,
  UNSPEC_SHA1SU0 = 137,
  UNSPEC_SHA1SU1 = 138,
  UNSPEC_SHA256H = 139,
  UNSPEC_SHA256H2 = 140,
  UNSPEC_SHA256SU0 = 141,
  UNSPEC_SHA256SU1 = 142,
  UNSPEC_VMULLP64 = 143,
  UNSPEC_LOAD_COUNT = 144,
  UNSPEC_VABAL_S = 145,
  UNSPEC_VABAL_U = 146,
  UNSPEC_VABD_F = 147,
  UNSPEC_VABD_S = 148,
  UNSPEC_VABD_U = 149,
  UNSPEC_VABDL_S = 150,
  UNSPEC_VABDL_U = 151,
  UNSPEC_VADD = 152,
  UNSPEC_VADDHN = 153,
  UNSPEC_VRADDHN = 154,
  UNSPEC_VADDL_S = 155,
  UNSPEC_VADDL_U = 156,
  UNSPEC_VADDW_S = 157,
  UNSPEC_VADDW_U = 158,
  UNSPEC_VBSL = 159,
  UNSPEC_VCAGE = 160,
  UNSPEC_VCAGT = 161,
  UNSPEC_VCALE = 162,
  UNSPEC_VCALT = 163,
  UNSPEC_VCEQ = 164,
  UNSPEC_VCGE = 165,
  UNSPEC_VCGEU = 166,
  UNSPEC_VCGT = 167,
  UNSPEC_VCGTU = 168,
  UNSPEC_VCLS = 169,
  UNSPEC_VCONCAT = 170,
  UNSPEC_VCVT = 171,
  UNSPEC_VCVT_S = 172,
  UNSPEC_VCVT_U = 173,
  UNSPEC_VCVT_S_N = 174,
  UNSPEC_VCVT_U_N = 175,
  UNSPEC_VCVT_HF_S_N = 176,
  UNSPEC_VCVT_HF_U_N = 177,
  UNSPEC_VCVT_SI_S_N = 178,
  UNSPEC_VCVT_SI_U_N = 179,
  UNSPEC_VCVTH_S = 180,
  UNSPEC_VCVTH_U = 181,
  UNSPEC_VCVTA_S = 182,
  UNSPEC_VCVTA_U = 183,
  UNSPEC_VCVTM_S = 184,
  UNSPEC_VCVTM_U = 185,
  UNSPEC_VCVTN_S = 186,
  UNSPEC_VCVTN_U = 187,
  UNSPEC_VCVTP_S = 188,
  UNSPEC_VCVTP_U = 189,
  UNSPEC_VEXT = 190,
  UNSPEC_VHADD_S = 191,
  UNSPEC_VHADD_U = 192,
  UNSPEC_VRHADD_S = 193,
  UNSPEC_VRHADD_U = 194,
  UNSPEC_VHSUB_S = 195,
  UNSPEC_VHSUB_U = 196,
  UNSPEC_VLD1 = 197,
  UNSPEC_VLD1_LANE = 198,
  UNSPEC_VLD2 = 199,
  UNSPEC_VLD2_DUP = 200,
  UNSPEC_VLD2_LANE = 201,
  UNSPEC_VLD3 = 202,
  UNSPEC_VLD3A = 203,
  UNSPEC_VLD3B = 204,
  UNSPEC_VLD3_DUP = 205,
  UNSPEC_VLD3_LANE = 206,
  UNSPEC_VLD4 = 207,
  UNSPEC_VLD4A = 208,
  UNSPEC_VLD4B = 209,
  UNSPEC_VLD4_DUP = 210,
  UNSPEC_VLD4_LANE = 211,
  UNSPEC_VMAX = 212,
  UNSPEC_VMAX_U = 213,
  UNSPEC_VMAXNM = 214,
  UNSPEC_VMIN = 215,
  UNSPEC_VMIN_U = 216,
  UNSPEC_VMINNM = 217,
  UNSPEC_VMLA = 218,
  UNSPEC_VMLA_LANE = 219,
  UNSPEC_VMLAL_S = 220,
  UNSPEC_VMLAL_U = 221,
  UNSPEC_VMLAL_S_LANE = 222,
  UNSPEC_VMLAL_U_LANE = 223,
  UNSPEC_VMLS = 224,
  UNSPEC_VMLS_LANE = 225,
  UNSPEC_VMLSL_S = 226,
  UNSPEC_VMLSL_U = 227,
  UNSPEC_VMLSL_S_LANE = 228,
  UNSPEC_VMLSL_U_LANE = 229,
  UNSPEC_VMLSL_LANE = 230,
  UNSPEC_VFMA_LANE = 231,
  UNSPEC_VFMS_LANE = 232,
  UNSPEC_VMOVL_S = 233,
  UNSPEC_VMOVL_U = 234,
  UNSPEC_VMOVN = 235,
  UNSPEC_VMUL = 236,
  UNSPEC_VMULL_P = 237,
  UNSPEC_VMULL_S = 238,
  UNSPEC_VMULL_U = 239,
  UNSPEC_VMUL_LANE = 240,
  UNSPEC_VMULL_S_LANE = 241,
  UNSPEC_VMULL_U_LANE = 242,
  UNSPEC_VPADAL_S = 243,
  UNSPEC_VPADAL_U = 244,
  UNSPEC_VPADD = 245,
  UNSPEC_VPADDL_S = 246,
  UNSPEC_VPADDL_U = 247,
  UNSPEC_VPMAX = 248,
  UNSPEC_VPMAX_U = 249,
  UNSPEC_VPMIN = 250,
  UNSPEC_VPMIN_U = 251,
  UNSPEC_VPSMAX = 252,
  UNSPEC_VPSMIN = 253,
  UNSPEC_VPUMAX = 254,
  UNSPEC_VPUMIN = 255,
  UNSPEC_VQABS = 256,
  UNSPEC_VQADD_S = 257,
  UNSPEC_VQADD_U = 258,
  UNSPEC_VQDMLAL = 259,
  UNSPEC_VQDMLAL_LANE = 260,
  UNSPEC_VQDMLSL = 261,
  UNSPEC_VQDMLSL_LANE = 262,
  UNSPEC_VQDMULH = 263,
  UNSPEC_VQDMULH_LANE = 264,
  UNSPEC_VQRDMULH = 265,
  UNSPEC_VQRDMULH_LANE = 266,
  UNSPEC_VQDMULL = 267,
  UNSPEC_VQDMULL_LANE = 268,
  UNSPEC_VQMOVN_S = 269,
  UNSPEC_VQMOVN_U = 270,
  UNSPEC_VQMOVUN = 271,
  UNSPEC_VQNEG = 272,
  UNSPEC_VQSHL_S = 273,
  UNSPEC_VQSHL_U = 274,
  UNSPEC_VQRSHL_S = 275,
  UNSPEC_VQRSHL_U = 276,
  UNSPEC_VQSHL_S_N = 277,
  UNSPEC_VQSHL_U_N = 278,
  UNSPEC_VQSHLU_N = 279,
  UNSPEC_VQSHRN_S_N = 280,
  UNSPEC_VQSHRN_U_N = 281,
  UNSPEC_VQRSHRN_S_N = 282,
  UNSPEC_VQRSHRN_U_N = 283,
  UNSPEC_VQSHRUN_N = 284,
  UNSPEC_VQRSHRUN_N = 285,
  UNSPEC_VQSUB_S = 286,
  UNSPEC_VQSUB_U = 287,
  UNSPEC_VRECPE = 288,
  UNSPEC_VRECPS = 289,
  UNSPEC_VREV16 = 290,
  UNSPEC_VREV32 = 291,
  UNSPEC_VREV64 = 292,
  UNSPEC_VRSQRTE = 293,
  UNSPEC_VRSQRTS = 294,
  UNSPEC_VSHL_S = 295,
  UNSPEC_VSHL_U = 296,
  UNSPEC_VRSHL_S = 297,
  UNSPEC_VRSHL_U = 298,
  UNSPEC_VSHLL_S_N = 299,
  UNSPEC_VSHLL_U_N = 300,
  UNSPEC_VSHL_N = 301,
  UNSPEC_VSHR_S_N = 302,
  UNSPEC_VSHR_U_N = 303,
  UNSPEC_VRSHR_S_N = 304,
  UNSPEC_VRSHR_U_N = 305,
  UNSPEC_VSHRN_N = 306,
  UNSPEC_VRSHRN_N = 307,
  UNSPEC_VSLI = 308,
  UNSPEC_VSRA_S_N = 309,
  UNSPEC_VSRA_U_N = 310,
  UNSPEC_VRSRA_S_N = 311,
  UNSPEC_VRSRA_U_N = 312,
  UNSPEC_VSRI = 313,
  UNSPEC_VST1 = 314,
  UNSPEC_VST1_LANE = 315,
  UNSPEC_VST2 = 316,
  UNSPEC_VST2_LANE = 317,
  UNSPEC_VST3 = 318,
  UNSPEC_VST3A = 319,
  UNSPEC_VST3B = 320,
  UNSPEC_VST3_LANE = 321,
  UNSPEC_VST4 = 322,
  UNSPEC_VST4A = 323,
  UNSPEC_VST4B = 324,
  UNSPEC_VST4_LANE = 325,
  UNSPEC_VSTRUCTDUMMY = 326,
  UNSPEC_VSUB = 327,
  UNSPEC_VSUBHN = 328,
  UNSPEC_VRSUBHN = 329,
  UNSPEC_VSUBL_S = 330,
  UNSPEC_VSUBL_U = 331,
  UNSPEC_VSUBW_S = 332,
  UNSPEC_VSUBW_U = 333,
  UNSPEC_VTBL = 334,
  UNSPEC_VTBX = 335,
  UNSPEC_VTRN1 = 336,
  UNSPEC_VTRN2 = 337,
  UNSPEC_VTST = 338,
  UNSPEC_VUZP1 = 339,
  UNSPEC_VUZP2 = 340,
  UNSPEC_VZIP1 = 341,
  UNSPEC_VZIP2 = 342,
  UNSPEC_MISALIGNED_ACCESS = 343,
  UNSPEC_VCLE = 344,
  UNSPEC_VCLT = 345,
  UNSPEC_NVRINTZ = 346,
  UNSPEC_NVRINTP = 347,
  UNSPEC_NVRINTM = 348,
  UNSPEC_NVRINTX = 349,
  UNSPEC_NVRINTA = 350,
  UNSPEC_NVRINTN = 351,
  UNSPEC_VQRDMLAH = 352,
  UNSPEC_VQRDMLSH = 353,
  UNSPEC_VRND = 354,
  UNSPEC_VRNDA = 355,
  UNSPEC_VRNDI = 356,
  UNSPEC_VRNDM = 357,
  UNSPEC_VRNDN = 358,
  UNSPEC_VRNDP = 359,
  UNSPEC_VRNDX = 360,
  UNSPEC_DOT_S = 361,
  UNSPEC_DOT_U = 362,
  UNSPEC_DOT_US = 363,
  UNSPEC_DOT_SU = 364,
  UNSPEC_VFML_LO = 365,
  UNSPEC_VFML_HI = 366,
  UNSPEC_VCADD90 = 367,
  UNSPEC_VCADD270 = 368,
  UNSPEC_VCMLA = 369,
  UNSPEC_VCMLA90 = 370,
  UNSPEC_VCMLA180 = 371,
  UNSPEC_VCMLA270 = 372,
  UNSPEC_VCMLA_CONJ = 373,
  UNSPEC_VCMLA180_CONJ = 374,
  UNSPEC_VCMUL = 375,
  UNSPEC_VCMUL90 = 376,
  UNSPEC_VCMUL180 = 377,
  UNSPEC_VCMUL270 = 378,
  UNSPEC_VCMUL_CONJ = 379,
  UNSPEC_MATMUL_S = 380,
  UNSPEC_MATMUL_U = 381,
  UNSPEC_MATMUL_US = 382,
  UNSPEC_BFCVT = 383,
  UNSPEC_BFCVT_HIGH = 384,
  UNSPEC_BFMMLA = 385,
  UNSPEC_BFMAB = 386,
  UNSPEC_BFMAT = 387,
  VST4Q = 388,
  VRNDXQ_F = 389,
  VRNDQ_F = 390,
  VRNDPQ_F = 391,
  VRNDNQ_F = 392,
  VRNDMQ_F = 393,
  VRNDAQ_F = 394,
  VREV64Q_F = 395,
  VDUPQ_N_F = 396,
  VREV32Q_F = 397,
  VCVTTQ_F32_F16 = 398,
  VCVTBQ_F32_F16 = 399,
  VCVTQ_TO_F_S = 400,
  VQNEGQ_S = 401,
  VCVTQ_TO_F_U = 402,
  VREV16Q_S = 403,
  VREV16Q_U = 404,
  VADDLVQ_S = 405,
  VMVNQ_N_S = 406,
  VMVNQ_N_U = 407,
  VCVTAQ_S = 408,
  VCVTAQ_U = 409,
  VREV64Q_S = 410,
  VREV64Q_U = 411,
  VQABSQ_S = 412,
  VDUPQ_N_U = 413,
  VDUPQ_N_S = 414,
  VCLSQ_S = 415,
  VADDVQ_S = 416,
  VADDVQ_U = 417,
  VREV32Q_U = 418,
  VREV32Q_S = 419,
  VMOVLTQ_U = 420,
  VMOVLTQ_S = 421,
  VMOVLBQ_S = 422,
  VMOVLBQ_U = 423,
  VCVTQ_FROM_F_S = 424,
  VCVTQ_FROM_F_U = 425,
  VCVTPQ_S = 426,
  VCVTPQ_U = 427,
  VCVTNQ_S = 428,
  VCVTNQ_U = 429,
  VCVTMQ_S = 430,
  VCVTMQ_U = 431,
  VADDLVQ_U = 432,
  VCTP8Q = 433,
  VCTP16Q = 434,
  VCTP32Q = 435,
  VCTP64Q = 436,
  VPNOT = 437,
  VCREATEQ_F = 438,
  VCVTQ_N_TO_F_S = 439,
  VCVTQ_N_TO_F_U = 440,
  VBRSRQ_N_F = 441,
  VSUBQ_N_F = 442,
  VCREATEQ_U = 443,
  VCREATEQ_S = 444,
  VSHRQ_N_S = 445,
  VSHRQ_N_U = 446,
  VCVTQ_N_FROM_F_S = 447,
  VCVTQ_N_FROM_F_U = 448,
  VADDLVQ_P_S = 449,
  VADDLVQ_P_U = 450,
  VSHLQ_S = 451,
  VSHLQ_U = 452,
  VABDQ_S = 453,
  VADDQ_N_S = 454,
  VADDVAQ_S = 455,
  VADDVQ_P_S = 456,
  VBRSRQ_N_S = 457,
  VHADDQ_S = 458,
  VHADDQ_N_S = 459,
  VHSUBQ_S = 460,
  VHSUBQ_N_S = 461,
  VMAXQ_S = 462,
  VMAXVQ_S = 463,
  VMINQ_S = 464,
  VMINVQ_S = 465,
  VMLADAVQ_S = 466,
  VMULHQ_S = 467,
  VMULLBQ_INT_S = 468,
  VMULLTQ_INT_S = 469,
  VMULQ_S = 470,
  VMULQ_N_S = 471,
  VQADDQ_S = 472,
  VQADDQ_N_S = 473,
  VQRSHLQ_S = 474,
  VQRSHLQ_N_S = 475,
  VQSHLQ_S = 476,
  VQSHLQ_N_S = 477,
  VQSHLQ_R_S = 478,
  VQSUBQ_S = 479,
  VQSUBQ_N_S = 480,
  VRHADDQ_S = 481,
  VRMULHQ_S = 482,
  VRSHLQ_S = 483,
  VRSHLQ_N_S = 484,
  VRSHRQ_N_S = 485,
  VSHLQ_N_S = 486,
  VSHLQ_R_S = 487,
  VSUBQ_S = 488,
  VSUBQ_N_S = 489,
  VABDQ_U = 490,
  VADDQ_N_U = 491,
  VADDVAQ_U = 492,
  VADDVQ_P_U = 493,
  VBRSRQ_N_U = 494,
  VHADDQ_U = 495,
  VHADDQ_N_U = 496,
  VHSUBQ_U = 497,
  VHSUBQ_N_U = 498,
  VMAXQ_U = 499,
  VMAXVQ_U = 500,
  VMINQ_U = 501,
  VMINVQ_U = 502,
  VMLADAVQ_U = 503,
  VMULHQ_U = 504,
  VMULLBQ_INT_U = 505,
  VMULLTQ_INT_U = 506,
  VMULQ_U = 507,
  VMULQ_N_U = 508,
  VQADDQ_U = 509,
  VQADDQ_N_U = 510,
  VQRSHLQ_U = 511,
  VQRSHLQ_N_U = 512,
  VQSHLQ_U = 513,
  VQSHLQ_N_U = 514,
  VQSHLQ_R_U = 515,
  VQSUBQ_U = 516,
  VQSUBQ_N_U = 517,
  VRHADDQ_U = 518,
  VRMULHQ_U = 519,
  VRSHLQ_U = 520,
  VRSHLQ_N_U = 521,
  VRSHRQ_N_U = 522,
  VSHLQ_N_U = 523,
  VSHLQ_R_U = 524,
  VSUBQ_U = 525,
  VSUBQ_N_U = 526,
  VHCADDQ_ROT270_S = 527,
  VHCADDQ_ROT90_S = 528,
  VMAXAQ_S = 529,
  VMAXAVQ_S = 530,
  VMINAQ_S = 531,
  VMINAVQ_S = 532,
  VMLADAVXQ_S = 533,
  VMLSDAVQ_S = 534,
  VMLSDAVXQ_S = 535,
  VQDMULHQ_N_S = 536,
  VQDMULHQ_S = 537,
  VQRDMULHQ_N_S = 538,
  VQRDMULHQ_S = 539,
  VQSHLUQ_N_S = 540,
  VABDQ_M_S = 541,
  VABDQ_M_U = 542,
  VABDQ_F = 543,
  VADDQ_N_F = 544,
  VMAXNMAQ_F = 545,
  VMAXNMAVQ_F = 546,
  VMAXNMQ_F = 547,
  VMAXNMVQ_F = 548,
  VMINNMAQ_F = 549,
  VMINNMAVQ_F = 550,
  VMINNMQ_F = 551,
  VMINNMVQ_F = 552,
  VMULQ_F = 553,
  VMULQ_N_F = 554,
  VSUBQ_F = 555,
  VADDLVAQ_U = 556,
  VADDLVAQ_S = 557,
  VBICQ_N_U = 558,
  VBICQ_N_S = 559,
  VCTP8Q_M = 560,
  VCTP16Q_M = 561,
  VCTP32Q_M = 562,
  VCTP64Q_M = 563,
  VCVTBQ_F16_F32 = 564,
  VCVTTQ_F16_F32 = 565,
  VMLALDAVQ_U = 566,
  VMLALDAVXQ_U = 567,
  VMLALDAVXQ_S = 568,
  VMLALDAVQ_S = 569,
  VMLSLDAVQ_S = 570,
  VMLSLDAVXQ_S = 571,
  VMOVNBQ_U = 572,
  VMOVNBQ_S = 573,
  VMOVNTQ_U = 574,
  VMOVNTQ_S = 575,
  VORRQ_N_S = 576,
  VORRQ_N_U = 577,
  VQDMULLBQ_N_S = 578,
  VQDMULLBQ_S = 579,
  VQDMULLTQ_N_S = 580,
  VQDMULLTQ_S = 581,
  VQMOVNBQ_U = 582,
  VQMOVNBQ_S = 583,
  VQMOVUNBQ_S = 584,
  VQMOVUNTQ_S = 585,
  VRMLALDAVHXQ_S = 586,
  VRMLSLDAVHQ_S = 587,
  VRMLSLDAVHXQ_S = 588,
  VSHLLBQ_S = 589,
  VSHLLBQ_U = 590,
  VSHLLTQ_U = 591,
  VSHLLTQ_S = 592,
  VQMOVNTQ_U = 593,
  VQMOVNTQ_S = 594,
  VSHLLBQ_N_S = 595,
  VSHLLBQ_N_U = 596,
  VSHLLTQ_N_U = 597,
  VSHLLTQ_N_S = 598,
  VRMLALDAVHQ_U = 599,
  VRMLALDAVHQ_S = 600,
  VMULLTQ_POLY_P = 601,
  VMULLBQ_POLY_P = 602,
  VBICQ_M_N_S = 603,
  VBICQ_M_N_U = 604,
  VCMPEQQ_M_F = 605,
  VCVTAQ_M_S = 606,
  VCVTAQ_M_U = 607,
  VCVTQ_M_TO_F_S = 608,
  VCVTQ_M_TO_F_U = 609,
  VQRSHRNBQ_N_U = 610,
  VQRSHRNBQ_N_S = 611,
  VQRSHRUNBQ_N_S = 612,
  VRMLALDAVHAQ_S = 613,
  VABAVQ_S = 614,
  VABAVQ_U = 615,
  VSHLCQ_S = 616,
  VSHLCQ_U = 617,
  VRMLALDAVHAQ_U = 618,
  VABSQ_M_S = 619,
  VADDVAQ_P_S = 620,
  VADDVAQ_P_U = 621,
  VCLSQ_M_S = 622,
  VCLZQ_M_S = 623,
  VCLZQ_M_U = 624,
  VCMPCSQ_M_N_U = 625,
  VCMPCSQ_M_U = 626,
  VCMPEQQ_M_N_S = 627,
  VCMPEQQ_M_N_U = 628,
  VCMPEQQ_M_S = 629,
  VCMPEQQ_M_U = 630,
  VCMPGEQ_M_N_S = 631,
  VCMPGEQ_M_S = 632,
  VCMPGTQ_M_N_S = 633,
  VCMPGTQ_M_S = 634,
  VCMPHIQ_M_N_U = 635,
  VCMPHIQ_M_U = 636,
  VCMPLEQ_M_N_S = 637,
  VCMPLEQ_M_S = 638,
  VCMPLTQ_M_N_S = 639,
  VCMPLTQ_M_S = 640,
  VCMPNEQ_M_N_S = 641,
  VCMPNEQ_M_N_U = 642,
  VCMPNEQ_M_S = 643,
  VCMPNEQ_M_U = 644,
  VDUPQ_M_N_S = 645,
  VDUPQ_M_N_U = 646,
  VDWDUPQ_N_U = 647,
  VDWDUPQ_WB_U = 648,
  VIWDUPQ_N_U = 649,
  VIWDUPQ_WB_U = 650,
  VMAXAQ_M_S = 651,
  VMAXAVQ_P_S = 652,
  VMAXVQ_P_S = 653,
  VMAXVQ_P_U = 654,
  VMINAQ_M_S = 655,
  VMINAVQ_P_S = 656,
  VMINVQ_P_S = 657,
  VMINVQ_P_U = 658,
  VMLADAVAQ_S = 659,
  VMLADAVAQ_U = 660,
  VMLADAVQ_P_S = 661,
  VMLADAVQ_P_U = 662,
  VMLADAVXQ_P_S = 663,
  VMLAQ_N_S = 664,
  VMLAQ_N_U = 665,
  VMLASQ_N_S = 666,
  VMLASQ_N_U = 667,
  VMLSDAVQ_P_S = 668,
  VMLSDAVXQ_P_S = 669,
  VMVNQ_M_S = 670,
  VMVNQ_M_U = 671,
  VNEGQ_M_S = 672,
  VPSELQ_S = 673,
  VPSELQ_U = 674,
  VQABSQ_M_S = 675,
  VQDMLAHQ_N_S = 676,
  VQDMLASHQ_N_S = 677,
  VQNEGQ_M_S = 678,
  VQRDMLADHQ_S = 679,
  VQRDMLADHXQ_S = 680,
  VQRDMLAHQ_N_S = 681,
  VQRDMLASHQ_N_S = 682,
  VQRDMLSDHQ_S = 683,
  VQRDMLSDHXQ_S = 684,
  VQRSHLQ_M_N_S = 685,
  VQRSHLQ_M_N_U = 686,
  VQSHLQ_M_R_S = 687,
  VQSHLQ_M_R_U = 688,
  VREV64Q_M_S = 689,
  VREV64Q_M_U = 690,
  VRSHLQ_M_N_S = 691,
  VRSHLQ_M_N_U = 692,
  VSHLQ_M_R_S = 693,
  VSHLQ_M_R_U = 694,
  VSLIQ_N_S = 695,
  VSLIQ_N_U = 696,
  VSRIQ_N_S = 697,
  VSRIQ_N_U = 698,
  VQDMLSDHXQ_S = 699,
  VQDMLSDHQ_S = 700,
  VQDMLADHXQ_S = 701,
  VQDMLADHQ_S = 702,
  VMLSDAVAXQ_S = 703,
  VMLSDAVAQ_S = 704,
  VMLADAVAXQ_S = 705,
  VCMPGEQ_M_F = 706,
  VCMPGTQ_M_N_F = 707,
  VMLSLDAVQ_P_S = 708,
  VRMLALDAVHAXQ_S = 709,
  VMLSLDAVXQ_P_S = 710,
  VFMAQ_F = 711,
  VMLSLDAVAQ_S = 712,
  VQSHRUNBQ_N_S = 713,
  VQRSHRUNTQ_N_S = 714,
  VMINNMAQ_M_F = 715,
  VFMASQ_N_F = 716,
  VDUPQ_M_N_F = 717,
  VCMPGTQ_M_F = 718,
  VCMPLTQ_M_F = 719,
  VRMLSLDAVHQ_P_S = 720,
  VQSHRUNTQ_N_S = 721,
  VABSQ_M_F = 722,
  VMAXNMAVQ_P_F = 723,
  VFMAQ_N_F = 724,
  VRMLSLDAVHXQ_P_S = 725,
  VREV32Q_M_F = 726,
  VRMLSLDAVHAQ_S = 727,
  VRMLSLDAVHAXQ_S = 728,
  VCMPLTQ_M_N_F = 729,
  VCMPNEQ_M_F = 730,
  VRNDAQ_M_F = 731,
  VRNDPQ_M_F = 732,
  VADDLVAQ_P_S = 733,
  VQMOVUNBQ_M_S = 734,
  VCMPLEQ_M_F = 735,
  VMLSLDAVAXQ_S = 736,
  VRNDXQ_M_F = 737,
  VFMSQ_F = 738,
  VMINNMVQ_P_F = 739,
  VMAXNMVQ_P_F = 740,
  VPSELQ_F = 741,
  VQMOVUNTQ_M_S = 742,
  VREV64Q_M_F = 743,
  VNEGQ_M_F = 744,
  VRNDMQ_M_F = 745,
  VCMPLEQ_M_N_F = 746,
  VCMPGEQ_M_N_F = 747,
  VRNDNQ_M_F = 748,
  VMINNMAVQ_P_F = 749,
  VCMPNEQ_M_N_F = 750,
  VRMLALDAVHQ_P_S = 751,
  VRMLALDAVHXQ_P_S = 752,
  VCMPEQQ_M_N_F = 753,
  VMAXNMAQ_M_F = 754,
  VRNDQ_M_F = 755,
  VMLALDAVQ_P_U = 756,
  VMLALDAVQ_P_S = 757,
  VQMOVNBQ_M_S = 758,
  VQMOVNBQ_M_U = 759,
  VMOVLTQ_M_U = 760,
  VMOVLTQ_M_S = 761,
  VMOVNBQ_M_U = 762,
  VMOVNBQ_M_S = 763,
  VRSHRNTQ_N_U = 764,
  VRSHRNTQ_N_S = 765,
  VORRQ_M_N_S = 766,
  VORRQ_M_N_U = 767,
  VREV32Q_M_S = 768,
  VREV32Q_M_U = 769,
  VQRSHRNTQ_N_U = 770,
  VQRSHRNTQ_N_S = 771,
  VMOVNTQ_M_U = 772,
  VMOVNTQ_M_S = 773,
  VMOVLBQ_M_U = 774,
  VMOVLBQ_M_S = 775,
  VMLALDAVAQ_S = 776,
  VMLALDAVAQ_U = 777,
  VQSHRNBQ_N_U = 778,
  VQSHRNBQ_N_S = 779,
  VSHRNBQ_N_U = 780,
  VSHRNBQ_N_S = 781,
  VRSHRNBQ_N_S = 782,
  VRSHRNBQ_N_U = 783,
  VMLALDAVXQ_P_U = 784,
  VMLALDAVXQ_P_S = 785,
  VQMOVNTQ_M_U = 786,
  VQMOVNTQ_M_S = 787,
  VMVNQ_M_N_U = 788,
  VMVNQ_M_N_S = 789,
  VQSHRNTQ_N_U = 790,
  VQSHRNTQ_N_S = 791,
  VMLALDAVAXQ_S = 792,
  VMLALDAVAXQ_U = 793,
  VSHRNTQ_N_S = 794,
  VSHRNTQ_N_U = 795,
  VCVTBQ_M_F16_F32 = 796,
  VCVTBQ_M_F32_F16 = 797,
  VCVTTQ_M_F16_F32 = 798,
  VCVTTQ_M_F32_F16 = 799,
  VCVTMQ_M_S = 800,
  VCVTMQ_M_U = 801,
  VCVTNQ_M_S = 802,
  VCVTPQ_M_S = 803,
  VCVTPQ_M_U = 804,
  VCVTQ_M_N_FROM_F_S = 805,
  VCVTNQ_M_U = 806,
  VREV16Q_M_S = 807,
  VREV16Q_M_U = 808,
  VREV32Q_M = 809,
  VCVTQ_M_FROM_F_U = 810,
  VCVTQ_M_FROM_F_S = 811,
  VRMLALDAVHQ_P_U = 812,
  VADDLVAQ_P_U = 813,
  VCVTQ_M_N_FROM_F_U = 814,
  VQSHLUQ_M_N_S = 815,
  VABAVQ_P_S = 816,
  VABAVQ_P_U = 817,
  VSHLQ_M_S = 818,
  VSHLQ_M_U = 819,
  VSRIQ_M_N_S = 820,
  VSRIQ_M_N_U = 821,
  VSUBQ_M_U = 822,
  VSUBQ_M_S = 823,
  VCVTQ_M_N_TO_F_U = 824,
  VCVTQ_M_N_TO_F_S = 825,
  VQADDQ_M_U = 826,
  VQADDQ_M_S = 827,
  VRSHRQ_M_N_S = 828,
  VSUBQ_M_N_S = 829,
  VSUBQ_M_N_U = 830,
  VBRSRQ_M_N_S = 831,
  VSUBQ_M_N_F = 832,
  VBICQ_M_F = 833,
  VHADDQ_M_U = 834,
  VBICQ_M_U = 835,
  VBICQ_M_S = 836,
  VMULQ_M_N_U = 837,
  VHADDQ_M_S = 838,
  VORNQ_M_F = 839,
  VMLAQ_M_N_S = 840,
  VQSUBQ_M_U = 841,
  VQSUBQ_M_S = 842,
  VMLAQ_M_N_U = 843,
  VQSUBQ_M_N_U = 844,
  VQSUBQ_M_N_S = 845,
  VMULLTQ_INT_M_S = 846,
  VMULLTQ_INT_M_U = 847,
  VMULQ_M_N_S = 848,
  VMULQ_M_N_F = 849,
  VMLASQ_M_N_U = 850,
  VMLASQ_M_N_S = 851,
  VMAXQ_M_U = 852,
  VQRDMLAHQ_M_N_U = 853,
  VCADDQ_ROT270_M_F = 854,
  VCADDQ_ROT270_M_U = 855,
  VCADDQ_ROT270_M_S = 856,
  VQRSHLQ_M_S = 857,
  VMULQ_M_F = 858,
  VRHADDQ_M_U = 859,
  VSHRQ_M_N_U = 860,
  VRHADDQ_M_S = 861,
  VMULQ_M_S = 862,
  VMULQ_M_U = 863,
  VQDMLASHQ_M_N_S = 864,
  VQRDMLASHQ_M_N_S = 865,
  VRSHLQ_M_S = 866,
  VRSHLQ_M_U = 867,
  VRSHRQ_M_N_U = 868,
  VADDQ_M_N_F = 869,
  VADDQ_M_N_S = 870,
  VADDQ_M_N_U = 871,
  VQRDMLASHQ_M_N_U = 872,
  VMAXQ_M_S = 873,
  VQRDMLAHQ_M_N_S = 874,
  VORRQ_M_S = 875,
  VORRQ_M_U = 876,
  VORRQ_M_F = 877,
  VQRSHLQ_M_U = 878,
  VRMULHQ_M_U = 879,
  VRMULHQ_M_S = 880,
  VMINQ_M_S = 881,
  VMINQ_M_U = 882,
  VANDQ_M_F = 883,
  VANDQ_M_U = 884,
  VANDQ_M_S = 885,
  VHSUBQ_M_N_S = 886,
  VHSUBQ_M_N_U = 887,
  VMULHQ_M_S = 888,
  VMULHQ_M_U = 889,
  VMULLBQ_INT_M_U = 890,
  VMULLBQ_INT_M_S = 891,
  VCADDQ_ROT90_M_F = 892,
  VSHRQ_M_N_S = 893,
  VADDQ_M_U = 894,
  VSLIQ_M_N_U = 895,
  VQADDQ_M_N_S = 896,
  VBRSRQ_M_N_F = 897,
  VABDQ_M_F = 898,
  VBRSRQ_M_N_U = 899,
  VEORQ_M_F = 900,
  VSHLQ_M_N_S = 901,
  VQDMLAHQ_M_N_U = 902,
  VQDMLAHQ_M_N_S = 903,
  VSHLQ_M_N_U = 904,
  VMLADAVAQ_P_U = 905,
  VMLADAVAQ_P_S = 906,
  VSLIQ_M_N_S = 907,
  VQSHLQ_M_U = 908,
  VQSHLQ_M_S = 909,
  VCADDQ_ROT90_M_U = 910,
  VCADDQ_ROT90_M_S = 911,
  VORNQ_M_U = 912,
  VORNQ_M_S = 913,
  VQSHLQ_M_N_S = 914,
  VQSHLQ_M_N_U = 915,
  VADDQ_M_S = 916,
  VHADDQ_M_N_S = 917,
  VADDQ_M_F = 918,
  VQADDQ_M_N_U = 919,
  VEORQ_M_S = 920,
  VEORQ_M_U = 921,
  VHSUBQ_M_S = 922,
  VHSUBQ_M_U = 923,
  VHADDQ_M_N_U = 924,
  VHCADDQ_ROT90_M_S = 925,
  VQRDMLSDHQ_M_S = 926,
  VQRDMLSDHXQ_M_S = 927,
  VQRDMLADHXQ_M_S = 928,
  VQDMULHQ_M_S = 929,
  VMLADAVAXQ_P_S = 930,
  VQDMLADHXQ_M_S = 931,
  VQRDMULHQ_M_S = 932,
  VMLSDAVAXQ_P_S = 933,
  VQDMULHQ_M_N_S = 934,
  VHCADDQ_ROT270_M_S = 935,
  VQDMLSDHQ_M_S = 936,
  VQDMLSDHXQ_M_S = 937,
  VMLSDAVAQ_P_S = 938,
  VQRDMLADHQ_M_S = 939,
  VQDMLADHQ_M_S = 940,
  VMLALDAVAQ_P_U = 941,
  VMLALDAVAQ_P_S = 942,
  VQRSHRNBQ_M_N_U = 943,
  VQRSHRNBQ_M_N_S = 944,
  VQRSHRNTQ_M_N_S = 945,
  VQSHRNBQ_M_N_U = 946,
  VQSHRNBQ_M_N_S = 947,
  VQSHRNTQ_M_N_S = 948,
  VRSHRNBQ_M_N_U = 949,
  VRSHRNBQ_M_N_S = 950,
  VRSHRNTQ_M_N_U = 951,
  VSHLLBQ_M_N_U = 952,
  VSHLLBQ_M_N_S = 953,
  VSHLLTQ_M_N_U = 954,
  VSHLLTQ_M_N_S = 955,
  VSHRNBQ_M_N_S = 956,
  VSHRNBQ_M_N_U = 957,
  VSHRNTQ_M_N_S = 958,
  VSHRNTQ_M_N_U = 959,
  VMLALDAVAXQ_P_S = 960,
  VQRSHRNTQ_M_N_U = 961,
  VQSHRNTQ_M_N_U = 962,
  VRSHRNTQ_M_N_S = 963,
  VQRDMULHQ_M_N_S = 964,
  VRMLALDAVHAQ_P_S = 965,
  VMLSLDAVAQ_P_S = 966,
  VMLSLDAVAXQ_P_S = 967,
  VMULLBQ_POLY_M_P = 968,
  VMULLTQ_POLY_M_P = 969,
  VQDMULLBQ_M_N_S = 970,
  VQDMULLBQ_M_S = 971,
  VQDMULLTQ_M_N_S = 972,
  VQDMULLTQ_M_S = 973,
  VQRSHRUNBQ_M_N_S = 974,
  VQSHRUNBQ_M_N_S = 975,
  VQSHRUNTQ_M_N_S = 976,
  VRMLALDAVHAQ_P_U = 977,
  VRMLALDAVHAXQ_P_S = 978,
  VRMLSLDAVHAQ_P_S = 979,
  VRMLSLDAVHAXQ_P_S = 980,
  VQRSHRUNTQ_M_N_S = 981,
  VCMLAQ_M_F = 982,
  VCMLAQ_ROT180_M_F = 983,
  VCMLAQ_ROT270_M_F = 984,
  VCMLAQ_ROT90_M_F = 985,
  VCMULQ_M_F = 986,
  VCMULQ_ROT180_M_F = 987,
  VCMULQ_ROT270_M_F = 988,
  VCMULQ_ROT90_M_F = 989,
  VFMAQ_M_F = 990,
  VFMAQ_M_N_F = 991,
  VFMASQ_M_N_F = 992,
  VFMSQ_M_F = 993,
  VMAXNMQ_M_F = 994,
  VMINNMQ_M_F = 995,
  VSUBQ_M_F = 996,
  VSTRWQSB_S = 997,
  VSTRWQSB_U = 998,
  VSTRBQSO_S = 999,
  VSTRBQSO_U = 1000,
  VSTRBQ_S = 1001,
  VSTRBQ_U = 1002,
  VLDRBQGO_S = 1003,
  VLDRBQGO_U = 1004,
  VLDRBQ_S = 1005,
  VLDRBQ_U = 1006,
  VLDRWQGB_S = 1007,
  VLDRWQGB_U = 1008,
  VLD1Q_F = 1009,
  VLD1Q_S = 1010,
  VLD1Q_U = 1011,
  VLDRHQ_F = 1012,
  VLDRHQGO_S = 1013,
  VLDRHQGO_U = 1014,
  VLDRHQGSO_S = 1015,
  VLDRHQGSO_U = 1016,
  VLDRHQ_S = 1017,
  VLDRHQ_U = 1018,
  VLDRWQ_F = 1019,
  VLDRWQ_S = 1020,
  VLDRWQ_U = 1021,
  VLDRDQGB_S = 1022,
  VLDRDQGB_U = 1023,
  VLDRDQGO_S = 1024,
  VLDRDQGO_U = 1025,
  VLDRDQGSO_S = 1026,
  VLDRDQGSO_U = 1027,
  VLDRHQGO_F = 1028,
  VLDRHQGSO_F = 1029,
  VLDRWQGB_F = 1030,
  VLDRWQGO_F = 1031,
  VLDRWQGO_S = 1032,
  VLDRWQGO_U = 1033,
  VLDRWQGSO_F = 1034,
  VLDRWQGSO_S = 1035,
  VLDRWQGSO_U = 1036,
  VSTRHQ_F = 1037,
  VST1Q_S = 1038,
  VST1Q_U = 1039,
  VSTRHQSO_S = 1040,
  VSTRHQ_U = 1041,
  VSTRWQ_S = 1042,
  VSTRWQ_U = 1043,
  VSTRWQ_F = 1044,
  VST1Q_F = 1045,
  VSTRDQSB_S = 1046,
  VSTRDQSB_U = 1047,
  VSTRDQSO_S = 1048,
  VSTRDQSO_U = 1049,
  VSTRDQSSO_S = 1050,
  VSTRDQSSO_U = 1051,
  VSTRWQSO_S = 1052,
  VSTRWQSO_U = 1053,
  VSTRWQSSO_S = 1054,
  VSTRWQSSO_U = 1055,
  VSTRHQSO_F = 1056,
  VSTRHQSSO_F = 1057,
  VSTRWQSB_F = 1058,
  VSTRWQSO_F = 1059,
  VSTRWQSSO_F = 1060,
  VDDUPQ = 1061,
  VDDUPQ_M = 1062,
  VDWDUPQ = 1063,
  VDWDUPQ_M = 1064,
  VIDUPQ = 1065,
  VIDUPQ_M = 1066,
  VIWDUPQ = 1067,
  VIWDUPQ_M = 1068,
  VSTRWQSBWB_S = 1069,
  VSTRWQSBWB_U = 1070,
  VLDRWQGBWB_S = 1071,
  VLDRWQGBWB_U = 1072,
  VSTRWQSBWB_F = 1073,
  VLDRWQGBWB_F = 1074,
  VSTRDQSBWB_S = 1075,
  VSTRDQSBWB_U = 1076,
  VLDRDQGBWB_S = 1077,
  VLDRDQGBWB_U = 1078,
  VADCQ_U = 1079,
  VADCQ_M_U = 1080,
  VADCQ_S = 1081,
  VADCQ_M_S = 1082,
  VSBCIQ_U = 1083,
  VSBCIQ_S = 1084,
  VSBCIQ_M_U = 1085,
  VSBCIQ_M_S = 1086,
  VSBCQ_U = 1087,
  VSBCQ_S = 1088,
  VSBCQ_M_U = 1089,
  VSBCQ_M_S = 1090,
  VADCIQ_U = 1091,
  VADCIQ_M_U = 1092,
  VADCIQ_S = 1093,
  VADCIQ_M_S = 1094,
  VLD2Q = 1095,
  VLD4Q = 1096,
  VST2Q = 1097,
  VSHLCQ_M_U = 1098,
  VSHLCQ_M_S = 1099,
  VSTRHQSO_U = 1100,
  VSTRHQSSO_S = 1101,
  VSTRHQSSO_U = 1102,
  VSTRHQ_S = 1103,
  SRSHRL = 1104,
  SRSHR = 1105,
  URSHR = 1106,
  URSHRL = 1107,
  SQRSHR = 1108,
  UQRSHL = 1109,
  UQRSHLL_64 = 1110,
  UQRSHLL_48 = 1111,
  SQRSHRL_64 = 1112,
  SQRSHRL_48 = 1113,
  VSHLCQ_M_ = 1114
};
#define NUM_UNSPEC_VALUES 1115
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_LDRD_ATOMIC = 21,
  VUNSPEC_SC = 22,
  VUNSPEC_LAX = 23,
  VUNSPEC_SLX = 24,
  VUNSPEC_LDA = 25,
  VUNSPEC_STL = 26,
  VUNSPEC_GET_FPSCR = 27,
  VUNSPEC_SET_FPSCR = 28,
  VUNSPEC_SET_FPSCR_NZCVQC = 29,
  VUNSPEC_PROBE_STACK_RANGE = 30,
  VUNSPEC_CDP = 31,
  VUNSPEC_CDP2 = 32,
  VUNSPEC_LDC = 33,
  VUNSPEC_LDC2 = 34,
  VUNSPEC_LDCL = 35,
  VUNSPEC_LDC2L = 36,
  VUNSPEC_STC = 37,
  VUNSPEC_STC2 = 38,
  VUNSPEC_STCL = 39,
  VUNSPEC_STC2L = 40,
  VUNSPEC_MCR = 41,
  VUNSPEC_MCR2 = 42,
  VUNSPEC_MRC = 43,
  VUNSPEC_MRC2 = 44,
  VUNSPEC_MCRR = 45,
  VUNSPEC_MCRR2 = 46,
  VUNSPEC_MRRC = 47,
  VUNSPEC_MRRC2 = 48,
  VUNSPEC_SPECULATION_BARRIER = 49,
  VUNSPEC_APSR_WRITE = 50,
  VUNSPEC_VSTR_VLDR = 51,
  VUNSPEC_CLRM_APSR = 52,
  VUNSPEC_VSCCLRM_VPR = 53,
  VUNSPEC_VLSTM = 54,
  VUNSPEC_VLLDM = 55
};
#define NUM_UNSPECV_VALUES 56
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
