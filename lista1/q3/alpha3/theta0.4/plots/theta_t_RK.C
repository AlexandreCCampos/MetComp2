void theta_t_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:29 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-4.323,-0.5999933,38.907,0.5999844);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx99[787] = {
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
   Double_t Graph0_fy99[787] = {
   0.3999488,
   0.3997953,
   0.3995395,
   0.3991816,
   0.398722,
   0.398161,
   0.397499,
   0.3967366,
   0.3958742,
   0.3949125,
   0.3938523,
   0.3926944,
   0.3914396,
   0.3900888,
   0.3886431,
   0.3871034,
   0.3854709,
   0.3837468,
   0.3819323,
   0.3800286,
   0.3780372,
   0.3759593,
   0.3737963,
   0.3715499,
   0.3692213,
   0.3668122,
   0.3643242,
   0.3617587,
   0.3591176,
   0.3564023,
   0.3536146,
   0.3507562,
   0.3478287,
   0.3448338,
   0.3417734,
   0.3386491,
   0.3354627,
   0.3322158,
   0.3289103,
   0.3255479,
   0.3221302,
   0.3186591,
   0.3151362,
   0.3115632,
   0.3079418,
   0.3042737,
   0.3005606,
   0.296804,
   0.2930055,
   0.2891668,
   0.2852894,
   0.2813749,
   0.2774247,
   0.2734403,
   0.2694233,
   0.2653749,
   0.2612966,
   0.2571898,
   0.2530558,
   0.2488958,
   0.2447112,
   0.2405031,
   0.2362727,
   0.2320213,
   0.2277498,
   0.2234595,
   0.2191513,
   0.2148262,
   0.2104853,
   0.2061295,
   0.2017596,
   0.1973766,
   0.1929813,
   0.1885745,
   0.184157,
   0.1797294,
   0.1752926,
   0.1708472,
   0.1663937,
   0.1619329,
   0.1574654,
   0.1529915,
   0.1485119,
   0.1440271,
   0.1395375,
   0.1350435,
   0.1305456,
   0.1260442,
   0.1215395,
   0.117032,
   0.1125219,
   0.1080095,
   0.1034951,
   0.09897891,
   0.09446117,
   0.08994209,
   0.08542184,
   0.08090059,
   0.0763785,
   0.07185569,
   0.06733228,
   0.06280839,
   0.05828409,
   0.05375948,
   0.04923462,
   0.04470957,
   0.04018438,
   0.03565908,
   0.03113371,
   0.02660829,
   0.02208283,
   0.01755736,
   0.01303189,
   0.008506404,
   0.003980921,
   -0.0005445626,
   -0.005070046,
   -0.009595529,
   -0.01412101,
   -0.01864649,
   -0.02317195,
   -0.0276974,
   -0.03222281,
   -0.03674817,
   -0.04127345,
   -0.04579861,
   -0.05032362,
   -0.05484842,
   -0.05937296,
   -0.06389717,
   -0.06842095,
   -0.07294423,
   -0.07746688,
   -0.08198878,
   -0.0865098,
   -0.09102979,
   -0.09554856,
   -0.1000659,
   -0.1045817,
   -0.1090957,
   -0.1136075,
   -0.118117,
   -0.1226239,
   -0.1271278,
   -0.1316285,
   -0.1361255,
   -0.1406184,
   -0.1451069,
   -0.1495905,
   -0.1540687,
   -0.1585411,
   -0.1630071,
   -0.1674662,
   -0.1719178,
   -0.1763612,
   -0.1807959,
   -0.1852211,
   -0.1896361,
   -0.1940402,
   -0.1984326,
   -0.2028125,
   -0.2071791,
   -0.2115314,
   -0.2158686,
   -0.2201897,
   -0.2244937,
   -0.2287796,
   -0.2330463,
   -0.2372928,
   -0.2415179,
   -0.2457205,
   -0.2498993,
   -0.2540531,
   -0.2581807,
   -0.2622808,
   -0.266352,
   -0.270393,
   -0.2744023,
   -0.2783785,
   -0.2823203,
   -0.286226,
   -0.2900942,
   -0.2939234,
   -0.2977119,
   -0.3014582,
   -0.3051607,
   -0.3088177,
   -0.3124276,
   -0.3159887,
   -0.3194993,
   -0.3229577,
   -0.3263622,
   -0.3297111,
   -0.3330027,
   -0.3362351,
   -0.3394068,
   -0.3425159,
   -0.3455607,
   -0.3485394,
   -0.3514505,
   -0.354292,
   -0.3570625,
   -0.35976,
   -0.3623831,
   -0.3649301,
   -0.3673993,
   -0.3697891,
   -0.3720981,
   -0.3743246,
   -0.3764672,
   -0.3785244,
   -0.3804949,
   -0.3823772,
   -0.3841701,
   -0.3858722,
   -0.3874825,
   -0.3889996,
   -0.3904226,
   -0.3917504,
   -0.392982,
   -0.3941164,
   -0.395153,
   -0.3960908,
   -0.3969292,
   -0.3976676,
   -0.3983053,
   -0.3988419,
   -0.3992771,
   -0.3996104,
   -0.3998416,
   -0.3999705,
   -0.399997,
   -0.3999212,
   -0.399743,
   -0.3994627,
   -0.3990803,
   -0.3985963,
   -0.3980109,
   -0.3973247,
   -0.3965381,
   -0.3956518,
   -0.3946663,
   -0.3935826,
   -0.3924012,
   -0.3911232,
   -0.3897495,
   -0.3882811,
   -0.386719,
   -0.3850643,
   -0.3833184,
   -0.3814823,
   -0.3795573,
   -0.3775449,
   -0.3754464,
   -0.3732633,
   -0.3709969,
   -0.3686488,
   -0.3662206,
   -0.3637138,
   -0.36113,
   -0.3584708,
   -0.355738,
   -0.3529331,
   -0.3500579,
   -0.347114,
   -0.3441032,
   -0.3410273,
   -0.3378879,
   -0.3346867,
   -0.3314256,
   -0.3281062,
   -0.3247303,
   -0.3212997,
   -0.3178159,
   -0.3142808,
   -0.310696,
   -0.3070633,
   -0.3033842,
   -0.2996604,
   -0.2958936,
   -0.2920853,
   -0.2882371,
   -0.2843507,
   -0.2804274,
   -0.2764689,
   -0.2724765,
   -0.2684518,
   -0.2643961,
   -0.2603108,
   -0.2561973,
   -0.252057,
   -0.2478909,
   -0.2437005,
   -0.239487,
   -0.2352515,
   -0.2309951,
   -0.226719,
   -0.2224242,
   -0.2181119,
   -0.2137829,
   -0.2094384,
   -0.2050791,
   -0.200706,
   -0.1963199,
   -0.1919218,
   -0.1875123,
   -0.1830923,
   -0.1786625,
   -0.1742235,
   -0.1697761,
   -0.1653208,
   -0.1608584,
   -0.1563892,
   -0.1519139,
   -0.147433,
   -0.142947,
   -0.1384563,
   -0.1339614,
   -0.1294626,
   -0.1249604,
   -0.120455,
   -0.1159468,
   -0.1114361,
   -0.1069232,
   -0.1024084,
   -0.09789178,
   -0.0933737,
   -0.08885432,
   -0.08433382,
   -0.07981235,
   -0.07529007,
   -0.07076711,
   -0.06624358,
   -0.06171958,
   -0.05719521,
   -0.05267053,
   -0.04814562,
   -0.04362053,
   -0.03909531,
   -0.03456999,
   -0.0300446,
   -0.02551917,
   -0.02099371,
   -0.01646824,
   -0.01194276,
   -0.007417279,
   -0.002891796,
   0.001633688,
   0.006159171,
   0.01068465,
   0.01521013,
   0.01973561,
   0.02426107,
   0.02878651,
   0.03331191,
   0.03783725,
   0.04236251,
   0.04688764,
   0.0514126,
   0.05593735,
   0.06046181,
   0.06498593,
   0.0695096,
   0.07403273,
   0.07855521,
   0.08307692,
   0.08759771,
   0.09211742,
   0.09663587,
   0.1011529,
   0.1056682,
   0.1101817,
   0.114693,
   0.1192019,
   0.1237081,
   0.1282113,
   0.1327111,
   0.1372071,
   0.141699,
   0.1461864,
   0.1506688,
   0.1551456,
   0.1596166,
   0.1640809,
   0.1685383,
   0.1729879,
   0.1774293,
   0.1818618,
   0.1862846,
   0.190697,
   0.1950984,
   0.1994879,
   0.2038647,
   0.2082279,
   0.2125767,
   0.2169101,
   0.2212271,
   0.2255269,
   0.2298082,
   0.2340702,
   0.2383116,
   0.2425314,
   0.2467284,
   0.2509013,
   0.2550489,
   0.25917,
   0.2632633,
   0.2673273,
   0.2713608,
   0.2753623,
   0.2793304,
   0.2832636,
   0.2871605,
   0.2910194,
   0.2948389,
   0.2986175,
   0.3023534,
   0.306045,
   0.3096908,
   0.3132891,
   0.3168382,
   0.3203364,
   0.323782,
   0.3271733,
   0.3305086,
   0.3337861,
   0.337004,
   0.3401608,
   0.3432546,
   0.3462836,
   0.3492463,
   0.3521407,
   0.3549653,
   0.3577184,
   0.3603982,
   0.3630031,
   0.3655315,
   0.3679817,
   0.3703523,
   0.3726415,
   0.3748479,
   0.3769701,
   0.3790066,
   0.380956,
   0.3828169,
   0.3845881,
   0.3862682,
   0.3878561,
   0.3893507,
   0.3907509,
   0.3920556,
   0.3932639,
   0.3943749,
   0.3953877,
   0.3963017,
   0.3971161,
   0.3978303,
   0.3984437,
   0.3989559,
   0.3993666,
   0.3996753,
   0.3998819,
   0.3999862,
   0.3999881,
   0.3998877,
   0.3996849,
   0.39938,
   0.3989731,
   0.3984646,
   0.397855,
   0.3971445,
   0.3963339,
   0.3954236,
   0.3944145,
   0.3933071,
   0.3921025,
   0.3908013,
   0.3894047,
   0.3879136,
   0.3863292,
   0.3846524,
   0.3828847,
   0.3810271,
   0.379081,
   0.3770477,
   0.3749287,
   0.3727254,
   0.3704392,
   0.3680717,
   0.3656244,
   0.3630989,
   0.3604968,
   0.3578198,
   0.3550694,
   0.3522475,
   0.3493556,
   0.3463955,
   0.3433689,
   0.3402775,
   0.337123,
   0.3339073,
   0.330632,
   0.3272989,
   0.3239096,
   0.320466,
   0.3169698,
   0.3134226,
   0.3098261,
   0.306182,
   0.302492,
   0.2987577,
   0.2949808,
   0.2911628,
   0.2873052,
   0.2834098,
   0.2794779,
   0.2755111,
   0.2715108,
   0.2674785,
   0.2634156,
   0.2593234,
   0.2552033,
   0.2510566,
   0.2468846,
   0.2426886,
   0.2384696,
   0.234229,
   0.2299677,
   0.2256871,
   0.221388,
   0.2170716,
   0.2127387,
   0.2083905,
   0.2040278,
   0.1996515,
   0.1952625,
   0.1908616,
   0.1864495,
   0.1820271,
   0.177595,
   0.1731539,
   0.1687046,
   0.1642475,
   0.1597834,
   0.1553127,
   0.150836,
   0.1463539,
   0.1418667,
   0.1373749,
   0.132879,
   0.1283794,
   0.1238763,
   0.1193702,
   0.1148614,
   0.1103502,
   0.1058368,
   0.1013215,
   0.09680457,
   0.09228616,
   0.08776649,
   0.08324574,
   0.07872407,
   0.07420161,
   0.0696785,
   0.06515485,
   0.06063075,
   0.0561063,
   0.05158156,
   0.0470566,
   0.04253148,
   0.03800623,
   0.03348089,
   0.02895549,
   0.02443005,
   0.01990459,
   0.01537912,
   0.01085364,
   0.006328154,
   0.001802671,
   -0.002722813,
   -0.007248296,
   -0.01177378,
   -0.01629926,
   -0.02082473,
   -0.02535019,
   -0.02987562,
   -0.03440101,
   -0.03892633,
   -0.04345156,
   -0.04797665,
   -0.05250157,
   -0.05702626,
   -0.06155065,
   -0.06607466,
   -0.07059821,
   -0.0751212,
   -0.0796435,
   -0.084165,
   -0.08868555,
   -0.09320497,
   -0.0977231,
   -0.1022397,
   -0.1067547,
   -0.1112676,
   -0.1157784,
   -0.1202867,
   -0.1247922,
   -0.1292946,
   -0.1337935,
   -0.1382886,
   -0.1427794,
   -0.1472656,
   -0.1517467,
   -0.1562222,
   -0.1606916,
   -0.1651543,
   -0.1696099,
   -0.1740576,
   -0.1784969,
   -0.1829271,
   -0.1873475,
   -0.1917573,
   -0.1961559,
   -0.2005424,
   -0.204916,
   -0.2092758,
   -0.213621,
   -0.2179505,
   -0.2222635,
   -0.226559,
   -0.2308358,
   -0.2350929,
   -0.2393292,
   -0.2435436,
   -0.2477349,
   -0.2519018,
   -0.2560432,
   -0.2601577,
   -0.2642441,
   -0.2683009,
   -0.2723268,
   -0.2763204,
   -0.2802802,
   -0.2842048,
   -0.2880927,
   -0.2919423,
   -0.2957521,
   -0.2995205,
   -0.3032459,
   -0.3069267,
   -0.3105612,
   -0.3141478,
   -0.3176848,
   -0.3211705,
   -0.3246032,
   -0.3279812,
   -0.3313027,
   -0.334566,
   -0.3377694,
   -0.3409112,
   -0.3439895,
   -0.3470028,
   -0.3499492,
   -0.352827,
   -0.3556345,
   -0.3583701,
   -0.361032,
   -0.3636187,
   -0.3661284,
   -0.3685596,
   -0.3709107,
   -0.3731801,
   -0.3753664,
   -0.3774681,
   -0.3794838,
   -0.381412,
   -0.3832514,
   -0.3850008,
   -0.3866588,
   -0.3882244,
   -0.3896964,
   -0.3910737,
   -0.3923552,
   -0.3935402,
   -0.3946276,
   -0.3956168,
   -0.3965068,
   -0.3972971,
   -0.3979871,
   -0.3985762,
   -0.3990641,
   -0.3994502,
   -0.3997344,
   -0.3999164,
   -0.399996,
   -0.3999733,
   -0.3998482,
   -0.3996208,
   -0.3992913,
   -0.39886,
   -0.3983272,
   -0.3976932,
   -0.3969586,
   -0.3961239,
   -0.3951898,
   -0.3941569,
   -0.3930261,
   -0.3917981,
   -0.3904739,
   -0.3890545,
   -0.3875408,
   -0.385934,
   -0.3842353,
   -0.3824458,
   -0.3805667,
   -0.3785996,
   -0.3765455,
   -0.3744061,
   -0.3721827,
   -0.3698768,
   -0.3674899,
   -0.3650237,
   -0.3624796,
   -0.3598593,
   -0.3571645,
   -0.3543968,
   -0.3515578,
   -0.3486494,
   -0.3456731,
   -0.3426307,
   -0.339524,
   -0.3363547,
   -0.3331244,
   -0.3298351,
   -0.3264883,
   -0.3230858,
   -0.3196294,
   -0.3161207,
   -0.3125614,
   -0.3089534,
   -0.3052981,
   -0.3015973,
   -0.2978526,
   -0.2940656,
   -0.2902379,
   -0.2863712,
   -0.2824668,
   -0.2785264,
   -0.2745514,
   -0.2705432,
   -0.2665034,
   -0.2624333,
   -0.2583343,
   -0.2542077,
   -0.2500548,
   -0.2458769,
   -0.2416752,
   -0.237451,
   -0.2332053,
   -0.2289393,
   -0.2246541,
   -0.2203507,
   -0.2160303,
   -0.2116937,
   -0.2073419,
   -0.2029758,
   -0.1985964,
   -0.1942044,
   -0.1898007,
   -0.1853861,
   -0.1809613,
   -0.176527,
   -0.1720839,
   -0.1676326,
   -0.1631738,
   -0.158708,
   -0.1542359,
   -0.1497578,
   -0.1452744,
   -0.1407861,
   -0.1362933,
   -0.1317965,
   -0.127296,
   -0.1227921,
   -0.1182854,
   -0.113776,
   -0.1092642};
   TGraph *graph = new TGraph(787,Graph0_fx99,Graph0_fy99);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph099 = new TH1F("Graph_Graph099","",787,0,34.584);
   Graph_Graph099->SetMinimum(-0.4799956);
   Graph_Graph099->SetMaximum(0.4799867);
   Graph_Graph099->SetDirectory(0);
   Graph_Graph099->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph099->SetLineColor(ci);
   Graph_Graph099->GetXaxis()->SetTitle("t(s)");
   Graph_Graph099->GetXaxis()->SetLabelFont(42);
   Graph_Graph099->GetXaxis()->SetTitleOffset(1);
   Graph_Graph099->GetXaxis()->SetTitleFont(42);
   Graph_Graph099->GetYaxis()->SetTitle("#theta(rad)");
   Graph_Graph099->GetYaxis()->SetLabelFont(42);
   Graph_Graph099->GetYaxis()->SetTitleFont(42);
   Graph_Graph099->GetZaxis()->SetLabelFont(42);
   Graph_Graph099->GetZaxis()->SetTitleOffset(1);
   Graph_Graph099->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph099);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
