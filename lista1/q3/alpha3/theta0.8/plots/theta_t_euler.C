void theta_t_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:13 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-4.323,-1.543395,38.907,1.501535);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx29[787] = {
   0,
   0.04,
   0.08,
   0.12,
   0.16,
   0.2,
   0.24,
   0.28,
   0.32,
   0.36,
   0.4,
   0.44,
   0.48,
   0.52,
   0.56,
   0.6,
   0.64,
   0.68,
   0.72,
   0.76,
   0.8,
   0.84,
   0.88,
   0.92,
   0.96,
   1,
   1.04,
   1.08,
   1.12,
   1.16,
   1.2,
   1.24,
   1.28,
   1.32,
   1.36,
   1.4,
   1.44,
   1.48,
   1.52,
   1.56,
   1.6,
   1.64,
   1.68,
   1.72,
   1.76,
   1.8,
   1.84,
   1.88,
   1.92,
   1.96,
   2,
   2.04,
   2.08,
   2.12,
   2.16,
   2.2,
   2.24,
   2.28,
   2.32,
   2.36,
   2.4,
   2.44,
   2.48,
   2.52,
   2.56,
   2.6,
   2.64,
   2.68,
   2.72,
   2.76,
   2.8,
   2.84,
   2.88,
   2.92,
   2.96,
   3,
   3.04,
   3.08,
   3.12,
   3.16,
   3.2,
   3.24,
   3.28,
   3.32,
   3.36,
   3.4,
   3.44,
   3.48,
   3.52,
   3.56,
   3.6,
   3.64,
   3.68,
   3.72,
   3.76,
   3.8,
   3.84,
   3.88,
   3.92,
   3.96,
   4,
   4.04,
   4.08,
   4.12,
   4.16,
   4.2,
   4.24,
   4.28,
   4.32,
   4.36,
   4.4,
   4.44,
   4.48,
   4.52,
   4.56,
   4.6,
   4.64,
   4.68,
   4.72,
   4.76,
   4.8,
   4.84,
   4.88,
   4.92,
   4.96,
   5,
   5.04,
   5.08,
   5.12,
   5.16,
   5.2,
   5.24,
   5.28,
   5.32,
   5.36,
   5.4,
   5.44,
   5.48,
   5.52,
   5.56,
   5.6,
   5.64,
   5.68,
   5.72,
   5.76,
   5.8,
   5.84,
   5.88,
   5.92,
   5.96,
   6,
   6.04,
   6.08,
   6.12,
   6.16,
   6.2,
   6.24,
   6.28,
   6.32,
   6.36,
   6.4,
   6.44,
   6.48,
   6.52,
   6.56,
   6.6,
   6.64,
   6.68,
   6.72,
   6.76,
   6.8,
   6.84,
   6.88,
   6.92,
   6.96,
   7,
   7.04,
   7.08,
   7.12,
   7.16,
   7.2,
   7.24,
   7.28,
   7.32,
   7.36,
   7.4,
   7.44,
   7.48,
   7.52,
   7.56,
   7.6,
   7.64,
   7.68,
   7.72,
   7.76,
   7.8,
   7.84,
   7.88,
   7.92,
   7.96,
   8,
   8.04,
   8.08,
   8.12,
   8.16,
   8.2,
   8.24,
   8.28,
   8.32,
   8.36,
   8.4,
   8.44,
   8.48,
   8.52,
   8.56,
   8.6,
   8.64,
   8.68,
   8.72,
   8.76,
   8.8,
   8.84,
   8.88,
   8.92,
   8.96,
   9,
   9.04,
   9.08,
   9.12,
   9.16,
   9.2,
   9.24,
   9.28,
   9.32,
   9.36,
   9.4,
   9.44,
   9.48,
   9.52,
   9.56,
   9.6,
   9.64,
   9.68,
   9.72,
   9.76,
   9.8,
   9.84,
   9.88,
   9.92,
   9.96,
   10,
   10.04,
   10.08,
   10.12,
   10.16,
   10.2,
   10.24,
   10.28,
   10.32,
   10.36,
   10.4,
   10.44,
   10.48,
   10.52,
   10.56,
   10.6,
   10.64,
   10.68,
   10.72,
   10.76,
   10.8,
   10.84,
   10.88,
   10.92,
   10.96,
   11,
   11.04,
   11.08,
   11.12,
   11.16,
   11.2,
   11.24,
   11.28,
   11.32,
   11.36,
   11.4,
   11.44,
   11.48,
   11.52,
   11.56,
   11.6,
   11.64,
   11.68,
   11.72,
   11.76,
   11.8,
   11.84,
   11.88,
   11.92,
   11.96,
   12,
   12.04,
   12.08,
   12.12,
   12.16,
   12.2,
   12.24,
   12.28,
   12.32,
   12.36,
   12.4,
   12.44,
   12.48,
   12.52,
   12.56,
   12.6,
   12.64,
   12.68,
   12.72,
   12.76,
   12.8,
   12.84,
   12.88,
   12.92,
   12.96,
   13,
   13.04,
   13.08,
   13.12,
   13.16,
   13.2,
   13.24,
   13.28,
   13.32,
   13.36,
   13.4,
   13.44,
   13.48,
   13.52,
   13.56,
   13.6,
   13.64,
   13.68,
   13.72,
   13.76,
   13.8,
   13.84,
   13.88,
   13.92,
   13.96,
   14,
   14.04,
   14.08,
   14.12,
   14.16,
   14.2,
   14.24,
   14.28,
   14.32,
   14.36,
   14.4,
   14.44,
   14.48,
   14.52,
   14.56,
   14.6,
   14.64,
   14.68,
   14.72,
   14.76,
   14.8,
   14.84,
   14.88,
   14.92,
   14.96,
   15,
   15.04,
   15.08,
   15.12,
   15.16,
   15.2,
   15.24,
   15.28,
   15.32,
   15.36,
   15.4,
   15.44,
   15.48,
   15.52,
   15.56,
   15.6,
   15.64,
   15.68,
   15.72,
   15.76,
   15.8,
   15.84,
   15.88,
   15.92,
   15.96,
   16,
   16.04,
   16.08,
   16.12,
   16.16,
   16.2,
   16.24,
   16.28,
   16.32,
   16.36,
   16.4,
   16.44,
   16.48,
   16.52,
   16.56,
   16.6,
   16.64,
   16.68,
   16.72,
   16.76,
   16.8,
   16.84,
   16.88,
   16.92,
   16.96,
   17,
   17.04,
   17.08,
   17.12,
   17.16,
   17.2,
   17.24,
   17.28,
   17.32,
   17.36,
   17.4,
   17.44,
   17.48,
   17.52,
   17.56,
   17.6,
   17.64,
   17.68,
   17.72,
   17.76,
   17.8,
   17.84,
   17.88,
   17.92,
   17.96,
   18,
   18.04,
   18.08,
   18.12,
   18.16,
   18.2,
   18.24,
   18.28,
   18.32,
   18.36,
   18.4,
   18.44,
   18.48,
   18.52,
   18.56,
   18.6,
   18.64,
   18.68,
   18.72,
   18.76,
   18.8,
   18.84,
   18.88,
   18.92,
   18.96,
   19,
   19.04,
   19.08,
   19.12,
   19.16,
   19.2,
   19.24,
   19.28,
   19.32,
   19.36,
   19.4,
   19.44,
   19.48,
   19.52,
   19.56,
   19.6,
   19.64,
   19.68,
   19.72,
   19.76,
   19.8,
   19.84,
   19.88,
   19.92,
   19.96,
   20,
   20.04,
   20.08,
   20.12,
   20.16,
   20.2,
   20.24,
   20.28,
   20.32,
   20.36,
   20.4,
   20.44,
   20.48,
   20.52,
   20.56,
   20.6,
   20.64,
   20.68,
   20.72,
   20.76,
   20.8,
   20.84,
   20.88,
   20.92,
   20.96,
   21,
   21.04,
   21.08,
   21.12,
   21.16,
   21.2,
   21.24,
   21.28,
   21.32,
   21.36,
   21.4,
   21.44,
   21.48,
   21.52,
   21.56,
   21.6,
   21.64,
   21.68,
   21.72,
   21.76,
   21.8,
   21.84,
   21.88,
   21.92,
   21.96,
   22,
   22.04,
   22.08,
   22.12,
   22.16,
   22.2,
   22.24,
   22.28,
   22.32,
   22.36,
   22.4,
   22.44,
   22.48,
   22.52,
   22.56,
   22.6,
   22.64,
   22.68,
   22.72,
   22.76,
   22.8,
   22.84,
   22.88,
   22.92,
   22.96,
   23,
   23.04,
   23.08,
   23.12,
   23.16,
   23.2,
   23.24,
   23.28,
   23.32,
   23.36,
   23.4,
   23.44,
   23.48,
   23.52,
   23.56,
   23.6,
   23.64,
   23.68,
   23.72,
   23.76,
   23.8,
   23.84,
   23.88,
   23.92,
   23.96,
   24,
   24.04,
   24.08,
   24.12,
   24.16,
   24.2,
   24.24,
   24.28,
   24.32,
   24.36,
   24.4,
   24.44,
   24.48,
   24.52,
   24.56,
   24.6,
   24.64,
   24.68,
   24.72,
   24.76,
   24.8,
   24.84,
   24.88,
   24.92,
   24.96,
   25,
   25.04,
   25.08,
   25.12,
   25.16,
   25.2,
   25.24,
   25.28,
   25.32,
   25.36,
   25.4,
   25.44,
   25.48,
   25.52,
   25.56,
   25.6,
   25.64,
   25.68,
   25.72,
   25.76,
   25.8,
   25.84,
   25.88,
   25.92,
   25.96,
   26,
   26.04,
   26.08,
   26.12,
   26.16,
   26.2,
   26.24,
   26.28,
   26.32,
   26.36,
   26.4,
   26.44,
   26.48,
   26.52,
   26.56,
   26.6,
   26.64,
   26.68,
   26.72,
   26.76,
   26.8,
   26.84,
   26.88,
   26.92,
   26.96,
   27,
   27.04,
   27.08,
   27.12,
   27.16,
   27.2,
   27.24,
   27.28,
   27.32,
   27.36,
   27.4,
   27.44,
   27.48,
   27.52,
   27.56,
   27.6,
   27.64,
   27.68,
   27.72,
   27.76,
   27.8,
   27.84,
   27.88,
   27.92,
   27.96,
   28,
   28.04,
   28.08,
   28.12,
   28.16,
   28.2,
   28.24,
   28.28,
   28.32,
   28.36,
   28.4,
   28.44,
   28.48,
   28.52,
   28.56,
   28.6,
   28.64,
   28.68,
   28.72,
   28.76,
   28.8,
   28.84,
   28.88,
   28.92,
   28.96,
   29,
   29.04,
   29.08,
   29.12,
   29.16,
   29.2,
   29.24,
   29.28,
   29.32,
   29.36,
   29.4,
   29.44,
   29.48,
   29.52,
   29.56,
   29.6,
   29.64,
   29.68,
   29.72,
   29.76,
   29.8,
   29.84,
   29.88,
   29.92,
   29.96,
   30,
   30.04,
   30.08,
   30.12,
   30.16,
   30.2,
   30.24,
   30.28,
   30.32,
   30.36,
   30.4,
   30.44,
   30.48,
   30.52,
   30.56,
   30.6,
   30.64,
   30.68,
   30.72,
   30.76,
   30.8,
   30.84,
   30.88,
   30.92,
   30.96,
   31,
   31.04,
   31.08,
   31.12,
   31.16,
   31.2,
   31.24,
   31.28,
   31.32,
   31.36,
   31.4,
   31.44};
   Double_t Graph0_fy29[787] = {
   0.8,
   0.7991808,
   0.7975424,
   0.7950873,
   0.7918206,
   0.7877496,
   0.7828843,
   0.7772369,
   0.7708217,
   0.7636553,
   0.7557561,
   0.7471444,
   0.7378419,
   0.7278722,
   0.7172598,
   0.7060304,
   0.6942105,
   0.6818276,
   0.6689093,
   0.6554839,
   0.6415797,
   0.6272248,
   0.6124474,
   0.5972751,
   0.5817353,
   0.5658546,
   0.5496589,
   0.5331733,
   0.516422,
   0.4994282,
   0.4822141,
   0.4648006,
   0.4472077,
   0.4294541,
   0.4115575,
   0.3935341,
   0.3753992,
   0.3571668,
   0.3388497,
   0.3204597,
   0.3020075,
   0.2835026,
   0.2649536,
   0.2463682,
   0.2277531,
   0.209114,
   0.190456,
   0.1717833,
   0.1530996,
   0.1344079,
   0.1157103,
   0.09700889,
   0.07830499,
   0.05959963,
   0.0408935,
   0.02218703,
   0.003480454,
   -0.01522614,
   -0.03393274,
   -0.05263933,
   -0.07134585,
   -0.09005215,
   -0.1087579,
   -0.1274624,
   -0.1461649,
   -0.1648641,
   -0.1835582,
   -0.2022453,
   -0.2209224,
   -0.2395862,
   -0.2582329,
   -0.2768575,
   -0.2954545,
   -0.3140177,
   -0.3325395,
   -0.3510118,
   -0.3694253,
   -0.3877696,
   -0.4060332,
   -0.4242035,
   -0.4422667,
   -0.4602077,
   -0.4780104,
   -0.4956571,
   -0.5131291,
   -0.5304062,
   -0.5474672,
   -0.5642893,
   -0.580849,
   -0.5971212,
   -0.6130798,
   -0.6286978,
   -0.643947,
   -0.6587987,
   -0.6732231,
   -0.6871901,
   -0.7006688,
   -0.7136283,
   -0.7260375,
   -0.7378652,
   -0.7490805,
   -0.759653,
   -0.7695531,
   -0.7787517,
   -0.7872212,
   -0.794935,
   -0.8018682,
   -0.8079978,
   -0.8133023,
   -0.8177628,
   -0.8213626,
   -0.8240874,
   -0.8259257,
   -0.8268684,
   -0.8269097,
   -0.8260465,
   -0.8242786,
   -0.8216088,
   -0.818043,
   -0.8135898,
   -0.8082607,
   -0.8020699,
   -0.7950343,
   -0.7871731,
   -0.7785079,
   -0.7690622,
   -0.7588616,
   -0.7479333,
   -0.7363057,
   -0.7240087,
   -0.711073,
   -0.69753,
   -0.6834118,
   -0.6687506,
   -0.6535787,
   -0.6379283,
   -0.6218311,
   -0.6053186,
   -0.5884214,
   -0.5711693,
   -0.5535912,
   -0.535715,
   -0.5175674,
   -0.4991737,
   -0.4805582,
   -0.4617437,
   -0.4427517,
   -0.4236021,
   -0.4043137,
   -0.3849036,
   -0.3653878,
   -0.3457808,
   -0.3260957,
   -0.3063444,
   -0.2865377,
   -0.266685,
   -0.2467946,
   -0.2268739,
   -0.2069291,
   -0.1869657,
   -0.1669881,
   -0.147,
   -0.1270045,
   -0.1070038,
   -0.08699995,
   -0.0669941,
   -0.0469872,
   -0.02697981,
   -0.006972256,
   0.01303533,
   0.03304291,
   0.05305049,
   0.07305802,
   0.0930653,
   0.113072,
   0.1330773,
   0.1530804,
   0.1730797,
   0.1930732,
   0.2130585,
   0.2330322,
   0.2529905,
   0.2729285,
   0.2928406,
   0.3127202,
   0.3325596,
   0.35235,
   0.3720817,
   0.3917433,
   0.4113225,
   0.4308055,
   0.4501772,
   0.4694209,
   0.4885187,
   0.507451,
   0.5261967,
   0.5447334,
   0.5630369,
   0.5810818,
   0.5988412,
   0.6162866,
   0.6333884,
   0.6501157,
   0.6664364,
   0.6823175,
   0.697725,
   0.7126243,
   0.7269801,
   0.7407568,
   0.7539189,
   0.7664306,
   0.7782566,
   0.7893623,
   0.7997138,
   0.8092783,
   0.8180246,
   0.8259227,
   0.8329451,
   0.839066,
   0.8442623,
   0.8485134,
   0.8518017,
   0.8541125,
   0.8554345,
   0.8557595,
   0.855083,
   0.8534037,
   0.8507242,
   0.8470501,
   0.842391,
   0.8367595,
   0.8301715,
   0.8226461,
   0.8142053,
   0.8048737,
   0.7946785,
   0.783649,
   0.7718166,
   0.7592142,
   0.7458762,
   0.731838,
   0.7171358,
   0.7018065,
   0.6858871,
   0.6694147,
   0.652426,
   0.6349573,
   0.6170443,
   0.5987217,
   0.5800232,
   0.5609813,
   0.5416271,
   0.5219905,
   0.5020997,
   0.4819814,
   0.4616604,
   0.4411604,
   0.4205029,
   0.399708,
   0.3787942,
   0.3577782,
   0.3366752,
   0.315499,
   0.2942617,
   0.2729741,
   0.2516458,
   0.2302849,
   0.2088986,
   0.1874927,
   0.1660722,
   0.1446412,
   0.1232028,
   0.1017596,
   0.0803134,
   0.05886552,
   0.03741681,
   0.01596778,
   -0.005481343,
   -0.02693047,
   -0.0483796,
   -0.06982869,
   -0.0912776,
   -0.112726,
   -0.1341731,
   -0.155618,
   -0.177059,
   -0.1984939,
   -0.21992,
   -0.2413336,
   -0.2627302,
   -0.2841042,
   -0.3054493,
   -0.3267576,
   -0.3480204,
   -0.3692273,
   -0.3903668,
   -0.4114258,
   -0.4323896,
   -0.4532419,
   -0.4739649,
   -0.4945389,
   -0.5149426,
   -0.5351528,
   -0.5551445,
   -0.5748909,
   -0.5943637,
   -0.6135324,
   -0.6323652,
   -0.6508284,
   -0.6688871,
   -0.6865047,
   -0.7036434,
   -0.7202645,
   -0.7363282,
   -0.751794,
   -0.7666211,
   -0.7807683,
   -0.7941946,
   -0.8068594,
   -0.8187227,
   -0.8297455,
   -0.8398903,
   -0.8491211,
   -0.8574039,
   -0.8647071,
   -0.8710019,
   -0.8762621,
   -0.8804652,
   -0.8835916,
   -0.885626,
   -0.8865567,
   -0.8863759,
   -0.8850803,
   -0.8826704,
   -0.8791511,
   -0.8745316,
   -0.8688248,
   -0.8620479,
   -0.8542216,
   -0.8453704,
   -0.8355219,
   -0.8247067,
   -0.8129583,
   -0.8003124,
   -0.7868068,
   -0.7724811,
   -0.7573761,
   -0.7415335,
   -0.7249958,
   -0.7078058,
   -0.690006,
   -0.6716388,
   -0.652746,
   -0.6333685,
   -0.6135459,
   -0.5933169,
   -0.5727182,
   -0.5517855,
   -0.5305521,
   -0.5090499,
   -0.4873088,
   -0.4653567,
   -0.4432194,
   -0.4209208,
   -0.3984829,
   -0.3759257,
   -0.3532673,
   -0.3305239,
   -0.3077099,
   -0.2848382,
   -0.2619198,
   -0.2389645,
   -0.2159804,
   -0.1929745,
   -0.1699524,
   -0.1469189,
   -0.1238775,
   -0.1008311,
   -0.07778154,
   -0.0547304,
   -0.0316785,
   -0.00862634,
   0.01442587,
   0.03747808,
   0.06053029,
   0.08358242,
   0.1066342,
   0.129685,
   0.1527339,
   0.1757793,
   0.198819,
   0.22185,
   0.2448685,
   0.2678694,
   0.2908469,
   0.3137936,
   0.336701,
   0.3595589,
   0.3823558,
   0.4050783,
   0.4277113,
   0.450238,
   0.4726395,
   0.4948949,
   0.5169815,
   0.5388741,
   0.5605456,
   0.5819667,
   0.6031061,
   0.62393,
   0.644403,
   0.6644874,
   0.6841436,
   0.7033304,
   0.7220048,
   0.7401225,
   0.7576381,
   0.774505,
   0.790676,
   0.8061037,
   0.8207405,
   0.8345392,
   0.8474533,
   0.8594375,
   0.8704479,
   0.8804426,
   0.8893821,
   0.8972295,
   0.9039514,
   0.9095176,
   0.9139019,
   0.9170825,
   0.9190418,
   0.9197669,
   0.9192501,
   0.9174883,
   0.9144837,
   0.9102433,
   0.9047794,
   0.8981087,
   0.890253,
   0.8812382,
   0.8710944,
   0.8598558,
   0.8475595,
   0.834246,
   0.8199584,
   0.8047419,
   0.7886432,
   0.7717107,
   0.7539934,
   0.7355408,
   0.7164024,
   0.6966272,
   0.6762637,
   0.6553594,
   0.6339601,
   0.6121106,
   0.5898533,
   0.5672291,
   0.5442766,
   0.521032,
   0.4975295,
   0.4738007,
   0.4498748,
   0.4257787,
   0.4015369,
   0.3771717,
   0.3527028,
   0.3281481,
   0.3035232,
   0.2788418,
   0.2541156,
   0.2293548,
   0.2045677,
   0.1797612,
   0.1549411,
   0.1301117,
   0.1052764,
   0.08043747,
   0.05559671,
   0.03075513,
   0.005913268,
   -0.01892864,
   -0.04377055,
   -0.06861244,
   -0.0934542,
   -0.1182955,
   -0.1431354,
   -0.1679727,
   -0.1928053,
   -0.2176303,
   -0.2424438,
   -0.2672409,
   -0.2920152,
   -0.3167589,
   -0.3414627,
   -0.3661158,
   -0.3907051,
   -0.4152159,
   -0.4396313,
   -0.4639321,
   -0.488097,
   -0.5121021,
   -0.5359212,
   -0.5595254,
   -0.5828833,
   -0.605961,
   -0.6287217,
   -0.6511265,
   -0.6731337,
   -0.6946991,
   -0.7157766,
   -0.7363176,
   -0.7562719,
   -0.7755874,
   -0.7942109,
   -0.8120879,
   -0.8291633,
   -0.8453819,
   -0.8606883,
   -0.8750281,
   -0.8883478,
   -0.9005954,
   -0.9117214,
   -0.9216787,
   -0.9304234,
   -0.9379154,
   -0.9441187,
   -0.9490018,
   -0.9525384,
   -0.9547076,
   -0.955494,
   -0.954888,
   -0.9528863,
   -0.9494916,
   -0.9447125,
   -0.9385637,
   -0.931066,
   -0.9222454,
   -0.9121334,
   -0.9007664,
   -0.8881852,
   -0.8744345,
   -0.8595629,
   -0.8436214,
   -0.8266637,
   -0.8087455,
   -0.7899233,
   -0.7702548,
   -0.7497977,
   -0.7286094,
   -0.7067466,
   -0.684265,
   -0.6612185,
   -0.6376594,
   -0.6136378,
   -0.5892013,
   -0.5643951,
   -0.5392617,
   -0.5138406,
   -0.4881685,
   -0.4622794,
   -0.4362042,
   -0.4099709,
   -0.3836048,
   -0.3571285,
   -0.3305618,
   -0.3039223,
   -0.277225,
   -0.2504827,
   -0.2237064,
   -0.1969049,
   -0.1700855,
   -0.1432539,
   -0.1164145,
   -0.08957027,
   -0.06272356,
   -0.03587571,
   -0.009027457,
   0.01782087,
   0.04466919,
   0.07151751,
   0.09836568,
   0.1252133,
   0.1520593,
   0.1789023,
   0.2057396,
   0.2325677,
   0.2593819,
   0.286176,
   0.3129421,
   0.3396708,
   0.3663504,
   0.3929673,
   0.4195056,
   0.4459467,
   0.4722698,
   0.4984509,
   0.5244635,
   0.550278,
   0.5758616,
   0.6011786,
   0.6261901,
   0.650854,
   0.675125,
   0.6989548,
   0.7222923,
   0.7450835,
   0.7672717,
   0.7887981,
   0.8096019,
   0.8296203,
   0.8487897,
   0.8670455,
   0.8843229,
   0.9005573,
   0.9156853,
   0.9296447,
   0.9423757,
   0.9538211,
   0.9639275,
   0.9726455,
   0.9799305,
   0.9857432,
   0.9900504,
   0.9928249,
   0.9940468,
   0.9937029,
   0.9917874,
   0.9883019,
   0.9832555,
   0.9766646,
   0.9685527,
   0.9589503,
   0.9478941,
   0.935427,
   0.9215971,
   0.9064577,
   0.8900658,
   0.8724823,
   0.8537705,
   0.8339961,
   0.813226,
   0.7915277,
   0.7689689,
   0.7456167,
   0.7215369,
   0.696794,
   0.67145,
   0.6455646,
   0.619195,
   0.5923949,
   0.5652149,
   0.5377023,
   0.5099008,
   0.4818506,
   0.4535882,
   0.4251469,
   0.3965562,
   0.3678426,
   0.3390292,
   0.3101361,
   0.2811807,
   0.2521776,
   0.2231389,
   0.1940746,
   0.1649925,
   0.1358987,
   0.1067977,
   0.07769264,
   0.04858567,
   0.01947795,
   -0.009629947,
   -0.03873786,
   -0.06784577,
   -0.09695359,
   -0.1260609,
   -0.1551668,
   -0.1842694,
   -0.2133661,
   -0.2424528,
   -0.2715239,
   -0.3005722,
   -0.3295885,
   -0.3585614,
   -0.3874769,
   -0.4163187,
   -0.4450674,
   -0.4737007,
   -0.5021929,
   -0.5305151,
   -0.5586346,
   -0.5865152,
   -0.6141168,
   -0.6413957,
   -0.668304,
   -0.69479,
   -0.7207986,
   -0.7462704,
   -0.7711431,
   -0.7953509,
   -0.8188249,
   -0.8414939,
   -0.8632845,
   -0.8841217,
   -0.9039295,
   -0.9226316,
   -0.9401519,
   -0.9564156,
   -0.9713497,
   -0.984884,
   -0.996952,
   -1.007491,
   -1.016445,
   -1.023763,
   -1.029401,
   -1.033321,
   -1.035497,
   -1.035907,
   -1.034541,
   -1.031396,
   -1.026479,
   -1.019807,
   -1.011404,
   -1.001305,
   -0.9895498,
   -0.9761886,
   -0.9612771,
   -0.9448771,
   -0.9270559,
   -0.907885,
   -0.8874393,
   -0.8657962,
   -0.843035,
   -0.8192353,
   -0.794477,
   -0.7688389,
   -0.7423985,
   -0.715231,
   -0.6874087,
   -0.6590011,
   -0.6300737,
   -0.6006885,
   -0.570903,
   -0.5407707,
   -0.5103407,
   -0.4796577,
   -0.448762,
   -0.4176898,
   -0.3864729,
   -0.3551395,
   -0.3237137,
   -0.2922162,
   -0.2606644,
   -0.2290728,
   -0.1974528,
   -0.1658135,
   -0.134162,
   -0.1025031,
   -0.0708404,
   -0.03917596,
   -0.007510949,
   0.02415416,
   0.05581926,
   0.08748434,
   0.1191491,
   0.1508129,
   0.1824739,
   0.2141294,
   0.2457753,
   0.2774054,
   0.3090117,
   0.3405839,
   0.3721089,
   0.4035707,
   0.43495,
   0.4662242,
   0.4973667,
   0.5283471,
   0.5591306,
   0.5896781,
   0.619946,
   0.6498858,
   0.6794443,
   0.7085637,
   0.7371812};
   TGraph *graph = new TGraph(787,Graph0_fx29,Graph0_fy29);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph029 = new TH1F("Graph_Graph029","",787,0,34.584);
   Graph_Graph029->SetMinimum(-1.238902);
   Graph_Graph029->SetMaximum(1.197042);
   Graph_Graph029->SetDirectory(0);
   Graph_Graph029->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph029->SetLineColor(ci);
   Graph_Graph029->GetXaxis()->SetTitle("t(s)");
   Graph_Graph029->GetXaxis()->SetLabelFont(42);
   Graph_Graph029->GetXaxis()->SetTitleOffset(1);
   Graph_Graph029->GetXaxis()->SetTitleFont(42);
   Graph_Graph029->GetYaxis()->SetTitle("#theta(rad)");
   Graph_Graph029->GetYaxis()->SetLabelFont(42);
   Graph_Graph029->GetYaxis()->SetTitleFont(42);
   Graph_Graph029->GetZaxis()->SetLabelFont(42);
   Graph_Graph029->GetZaxis()->SetTitleOffset(1);
   Graph_Graph029->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph029);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
