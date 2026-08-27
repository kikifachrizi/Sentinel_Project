#include "sentinel_model.h"
#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void sentinel_rf50x10(double * input, double * output) {
    double var0[4];
    double var1[4];
    double var2[4];
    double var3[4];
    double var4[4];
    double var5[4];
    double var6[4];
    double var7[4];
    double var8[4];
    double var9[4];
    double var10[4];
    double var11[4];
    double var12[4];
    double var13[4];
    double var14[4];
    double var15[4];
    double var16[4];
    double var17[4];
    double var18[4];
    double var19[4];
    double var20[4];
    double var21[4];
    double var22[4];
    double var23[4];
    double var24[4];
    double var25[4];
    double var26[4];
    double var27[4];
    double var28[4];
    double var29[4];
    double var30[4];
    double var31[4];
    double var32[4];
    double var33[4];
    double var34[4];
    double var35[4];
    double var36[4];
    double var37[4];
    double var38[4];
    double var39[4];
    double var40[4];
    double var41[4];
    double var42[4];
    double var43[4];
    double var44[4];
    double var45[4];
    double var46[4];
    double var47[4];
    double var48[4];
    double var49[4];
    double var50[4];
    if (input[40] <= 47.98474884033203) {
        if (input[22] <= 0.7927847504615784) {
            if (input[35] <= 5.274173259735107) {
                if (input[78] <= 3163.0) {
                    if (input[13] <= -65.0) {
                        if (input[30] <= 1.3576655387878418) {
                            if (input[75] <= 137.5500030517578) {
                                if (input[13] <= -130.75) {
                                    if (input[13] <= -250.5) {
                                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[60] <= -0.7015012204647064) {
                                            memcpy(var50, (double[]){0.9285714285714286, 0.03571428571428571, 0.0, 0.03571428571428571}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[75] <= -100.44999694824219) {
                                        if (input[60] <= -2.1626148223876953) {
                                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.16666666666666666, 0.0, 0.0, 0.8333333333333334}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 11.450000286102295) {
                                            memcpy(var50, (double[]){0.125, 0.875, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[35] <= 0.7862951457500458) {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[66] <= 0.35672469437122345) {
                                        if (input[8] <= -36.0) {
                                            memcpy(var50, (double[]){0.05263157894736842, 0.7368421052631579, 0.10526315789473684, 0.10526315789473684}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.40089063346385956) {
                                            memcpy(var50, (double[]){0.16666666666666666, 0.3333333333333333, 0.16666666666666666, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[65] <= 0.742935061454773) {
                                if (input[33] <= 1.6200000047683716) {
                                    memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[53] <= 62.0) {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[73] <= 9.18320608139038) {
                            if (input[41] <= 7.892367839813232) {
                                if (input[76] <= 1230.2708129882812) {
                                    if (input[47] <= 3.7268940210342407) {
                                        memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[71] <= 4.699536919593811) {
                                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 14.5) {
                                        memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[67] <= -0.7674840092658997) {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.08333333333333333, 0.08333333333333333, 0.8333333333333334}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[27] <= -3.625) {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[37] <= 1.3458985090255737) {
                                memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[77] <= -2338.0) {
                                    if (input[75] <= -65.75) {
                                        if (input[25] <= 1.920226514339447) {
                                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[43] <= 3.1728681325912476) {
                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[1] <= 75.10451889038086) {
                            if (input[46] <= 2.2134084701538086) {
                                if (input[47] <= 6.004329204559326) {
                                    if (input[63] <= 1.4920971393585205) {
                                        if (input[38] <= 4.517751932144165) {
                                            memcpy(var50, (double[]){0.1276595744680851, 0.14893617021276595, 0.723404255319149, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[8] <= 2.0) {
                                            memcpy(var50, (double[]){0.0, 0.25, 0.625, 0.125}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.7272727272727273, 0.18181818181818182, 0.0, 0.09090909090909091}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[47] <= 7.016120672225952) {
                                        memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[27] <= -1.923707664012909) {
                                    if (input[16] <= 8.26164960861206) {
                                        if (input[7] <= -176.5) {
                                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 1.4804359078407288) {
                                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[80] <= -0.7005479633808136) {
                                        if (input[33] <= 2.5594098567962646) {
                                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[65] <= 0.2782413959503174) {
                                            memcpy(var50, (double[]){0.07692307692307693, 0.38461538461538464, 0.5384615384615384, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.6206896551724138, 0.21551724137931033, 0.1206896551724138, 0.04310344827586207}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[33] <= 3.489897131919861) {
                                if (input[30] <= 1.5626884698867798) {
                                    if (input[67] <= 0.7440128326416016) {
                                        if (input[57] <= -6.042396068572998) {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[23] <= 24.416666507720947) {
                                        memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[65] <= 1.921015202999115) {
                                    if (input[47] <= 4.084615468978882) {
                                        if (input[81] <= -0.6668764054775238) {
                                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.047619047619047616, 0.9523809523809523, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 125.13949203491211) {
                                        memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[77] <= -2531.0) {
                if (input[20] <= 1.8346322774887085) {
                    if (input[45] <= 10.774200439453125) {
                        if (input[36] <= 0.2937788665294647) {
                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[3] <= 3.3000000715255737) {
                                if (input[27] <= 0.7589852213859558) {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[67] <= -0.5936056077480316) {
                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[10] <= 215.57500457763672) {
                        if (input[58] <= 4.702365159988403) {
                            if (input[52] <= -223.5) {
                                if (input[8] <= 54.5) {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[25] <= 1.748711347579956) {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[31] <= 2.8413006067276) {
                                if (input[78] <= 10504.0) {
                                    if (input[41] <= 46.71637535095215) {
                                        if (input[35] <= 3.4908106327056885) {
                                            memcpy(var50, (double[]){0.10526315789473684, 0.47368421052631576, 0.3684210526315789, 0.05263157894736842}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.9285714285714286, 0.07142857142857142, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[25] <= 5.306172132492065) {
                            if (input[61] <= 3.1205748319625854) {
                                if (input[13] <= 420.40000915527344) {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[25] <= 3.846556782722473) {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[67] <= 0.5928870886564255) {
                                if (input[0] <= 147.1750030517578) {
                                    if (input[80] <= -0.4946758896112442) {
                                        if (input[58] <= 19.085052490234375) {
                                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= -27.700000762939453) {
                    if (input[38] <= 3.418481469154358) {
                        memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[17] <= 2.0) {
                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[22] <= 0.9318181872367859) {
                                memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[65] <= -0.32533347606658936) {
                        memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[48] <= 11.891700267791748) {
                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[38] <= 6.8588831424713135) {
            if (input[27] <= -0.7720741927623749) {
                if (input[21] <= 3.656781315803528) {
                    if (input[6] <= 52.91965866088867) {
                        if (input[37] <= 0.8937202543020248) {
                            if (input[66] <= 0.9549009799957275) {
                                memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -194.0500030517578) {
                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[25] <= 3.2419105768203735) {
                                memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[77] <= -1165.0) {
                                    memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[10] <= -314.1000061035156) {
                        if (input[65] <= 2.920666456222534) {
                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[10] <= 241.5500030517578) {
                            if (input[43] <= 417.5) {
                                memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[53] <= 757.0) {
                    if (input[30] <= 1.0499306917190552) {
                        memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[60] <= 3.242559492588043) {
                            memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[41] <= 93.17222595214844) {
                        memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[61] <= 4.310185670852661) {
                            memcpy(var50, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var50, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[17] <= 3.5) {
                memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[30] <= 3.5723025798797607) {
                    memcpy(var50, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var50, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    }
    double var51[4];
    if (input[32] <= 0.10086194053292274) {
        if (input[42] <= -5.067542314529419) {
            if (input[1] <= 55.23563575744629) {
                if (input[30] <= 0.8443664312362671) {
                    memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[78] <= 10858.0) {
                if (input[47] <= 2.564913034439087) {
                    if (input[2] <= -118.20000076293945) {
                        if (input[42] <= 0.3199999928474426) {
                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[47] <= -1.0121951401233673) {
                            if (input[22] <= -1.6281800270080566) {
                                if (input[33] <= 2.3513474464416504) {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= 260.0) {
                                    memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[81] <= -0.616180032491684) {
                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[52] <= -134.5) {
                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[25] <= -1.4192063212394714) {
                                memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[51] <= 148.1884765625) {
            if (input[22] <= 1.3527132272720337) {
                if (input[46] <= 2.122521162033081) {
                    if (input[26] <= 0.5848520398139954) {
                        if (input[52] <= -297.5) {
                            if (input[15] <= 4.625) {
                                memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[25] <= 1.4907280802726746) {
                                if (input[0] <= -108.5) {
                                    if (input[0] <= -113.5) {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[0] <= -109.5) {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[65] <= 1.8583555221557617) {
                                        if (input[70] <= 0.8379770815372467) {
                                            memcpy(var51, (double[]){0.0625, 0.25, 0.4375, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.14285714285714285, 0.0, 0.7857142857142857, 0.07142857142857142}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[77] <= -13707.0) {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[51] <= 102.90595245361328) {
                            if (input[16] <= 1.047493726015091) {
                                memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[10] <= -163.5) {
                                    if (input[12] <= -241.5) {
                                        if (input[48] <= 8.012195110321045) {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -6.648810863494873) {
                                        if (input[68] <= 8.570098400115967) {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[56] <= 1.8824958205223083) {
                                            memcpy(var51, (double[]){0.05128205128205128, 0.02564102564102564, 0.9230769230769231, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[28] <= 3.627450942993164) {
                                if (input[38] <= 2.525459051132202) {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[67] <= -0.2798580229282379) {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[66] <= 0.9084464311599731) {
                        if (input[26] <= 4.915496587753296) {
                            if (input[65] <= 1.1264375448226929) {
                                if (input[52] <= -135.5) {
                                    if (input[30] <= 0.39506159722805023) {
                                        memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[40] <= 7.820358753204346) {
                                            memcpy(var51, (double[]){0.2564102564102564, 0.46153846153846156, 0.28205128205128205, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.08333333333333333, 0.9166666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[49] <= 0.5999999940395355) {
                                        if (input[0] <= -102.57500076293945) {
                                            memcpy(var51, (double[]){0.4, 0.5, 0.0, 0.1}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 0.75, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 75.51979446411133) {
                                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.7142857142857143, 0.2857142857142857, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[23] <= 1.7247474789619446) {
                                    if (input[27] <= -11.299999713897705) {
                                        if (input[16] <= 3.3738811016082764) {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 0.5207110494375229) {
                                            memcpy(var51, (double[]){0.4186046511627907, 0.4186046511627907, 0.16279069767441862, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[80] <= -0.7241925597190857) {
                                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[6] <= 83.42467880249023) {
                                            memcpy(var51, (double[]){0.08333333333333333, 0.8333333333333334, 0.08333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.8333333333333334, 0.16666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[25] <= -0.6727257668972015) {
                                if (input[51] <= 72.70430183410645) {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= -1.5666996240615845) {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[40] <= 31.02453899383545) {
                                        if (input[20] <= 1.6098344922065735) {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 274.6000061035156) {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 92.30783081054688) {
                            if (input[50] <= -126.9000015258789) {
                                if (input[57] <= -3.5771931409835815) {
                                    if (input[6] <= 34.94133186340332) {
                                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[35] <= 2.239891529083252) {
                                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[10] <= 32.47500038146973) {
                                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[80] <= 0.7736066281795502) {
                                    if (input[76] <= 4012.1949462890625) {
                                        if (input[76] <= 854.9674987792969) {
                                            memcpy(var51, (double[]){0.25, 0.5, 0.0, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.8245614035087719, 0.07017543859649122, 0.10526315789473684, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[55] <= -3.276487708091736) {
                                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[48] <= 17.44495964050293) {
                                if (input[15] <= 20.5) {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[68] <= 1.226609230041504) {
                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[63] <= 1.0584815740585327) {
                        memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[68] <= 2.74002206325531) {
                if (input[55] <= 0.9038571715354919) {
                    if (input[80] <= -0.5254163146018982) {
                        if (input[21] <= 5.526463747024536) {
                            if (input[63] <= 0.47768664360046387) {
                                if (input[20] <= 2.0045250058174133) {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[7] <= -61.54999923706055) {
                                    memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[73] <= 13.904580116271973) {
                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[66] <= 1.0060356855392456) {
                                memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[70] <= 2.4499999210238457) {
                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[52] <= -445.0) {
                    if (input[33] <= 5.670260667800903) {
                        if (input[66] <= 0.9428014159202576) {
                            if (input[81] <= -0.5579742193222046) {
                                memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[78] <= 8178.0) {
                                if (input[52] <= -1231.5) {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[70] <= 2.9404579401016235) {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[80] <= -0.5661190152168274) {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[53] <= 829.0) {
                            if (input[22] <= 1.4440054297447205) {
                                if (input[50] <= -107.625) {
                                    if (input[15] <= 39.70000076293945) {
                                        if (input[37] <= 1.4783179759979248) {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[6] <= 73.12029266357422) {
                                    if (input[73] <= 19.358778476715088) {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[6] <= 40.2349853515625) {
                                memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[61] <= 5.5529632568359375) {
                                    if (input[63] <= 7.689032793045044) {
                                        if (input[55] <= -0.535518616437912) {
                                            memcpy(var51, (double[]){0.0, 0.14285714285714285, 0.8571428571428571, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.25, 0.0, 0.0, 0.75}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 6.937970876693726) {
                                        if (input[58] <= 27.720380783081055) {
                                            memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[65] <= 0.7607779502868652) {
                        memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[25] <= 4.935360908508301) {
                            if (input[23] <= 10.611111164093018) {
                                if (input[5] <= -14.524999618530273) {
                                    if (input[41] <= 75.52506637573242) {
                                        memcpy(var51, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[28] <= 17.267857551574707) {
                                            memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[65] <= 2.9096792936325073) {
                                        if (input[36] <= 0.38419269025325775) {
                                            memcpy(var51, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 1.0598920583724976) {
                                            memcpy(var51, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var51, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var51, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var50, var51, 4, var49);
    double var52[4];
    if (input[37] <= 2.164496898651123) {
        if (input[45] <= 40.76790237426758) {
            if (input[11] <= 32.68777084350586) {
                if (input[6] <= 19.1168270111084) {
                    if (input[5] <= 34.27500057220459) {
                        if (input[10] <= -50.30000114440918) {
                            if (input[56] <= 1.2210516929626465) {
                                if (input[68] <= 0.685813844203949) {
                                    if (input[30] <= 1.2366670370101929) {
                                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[67] <= 1.1087743043899536) {
                                        if (input[3] <= -113.5) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.04761904761904762, 0.6666666666666667, 0.1904761904761905, 0.09523809523809525}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[71] <= 3.396630883216858) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[15] <= 10.75) {
                                    memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[16] <= 2.020258128643036) {
                                memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[11] <= 25.702672004699707) {
                                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[65] <= 0.7412286102771759) {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[60] <= -1.0613478422164917) {
                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[7] <= -11.600000381469727) {
                            if (input[52] <= -329.5) {
                                memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[53] <= -62.0) {
                                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[36] <= 0.6124264895915985) {
                                memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[40] <= 1.3422173261642456) {
                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[17] <= 4.5) {
                        if (input[38] <= 3.6137195825576782) {
                            if (input[78] <= 8891.0) {
                                if (input[12] <= -116.0) {
                                    if (input[66] <= 0.612644374370575) {
                                        if (input[80] <= 0.7964937388896942) {
                                            memcpy(var52, (double[]){0.03125, 0.875, 0.0, 0.09375}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= -0.14872847497463226) {
                                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.14864864864864866, 0.3918918918918919, 0.3918918918918919, 0.06756756756756757}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[23] <= 1.9316601753234863) {
                                        memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[71] <= 14.885631084442139) {
                                            memcpy(var52, (double[]){0.1875, 0.5625, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[27] <= -1.631033182144165) {
                                    if (input[25] <= 0.17753415927290916) {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 0.8072289228439331) {
                                        if (input[63] <= 9.038923263549805) {
                                            memcpy(var52, (double[]){0.0, 0.07407407407407407, 0.9259259259259259, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[63] <= 0.0022658705711364746) {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[51] <= 154.48141479492188) {
                                if (input[43] <= 15.262499809265137) {
                                    if (input[81] <= 0.6822691857814789) {
                                        if (input[20] <= 1.6870883703231812) {
                                            memcpy(var52, (double[]){0.9090909090909092, 0.04545454545454546, 0.04545454545454546, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.2, 0.0, 0.8}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 0.8053311705589294) {
                                            memcpy(var52, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[15] <= 18.27500057220459) {
                                        if (input[27] <= -3.844827651977539) {
                                            memcpy(var52, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.05555555555555555, 0.1111111111111111, 0.7222222222222222, 0.1111111111111111}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= 58.0) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[66] <= 1.1996793150901794) {
                                    if (input[51] <= 312.8868865966797) {
                                        if (input[72] <= -185.94656372070312) {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[52] <= -1223.0) {
                                        if (input[20] <= 3.8204426765441895) {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.3333333333333333, 0.3888888888888889, 0.2222222222222222, 0.05555555555555555}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 89.85000228881836) {
                                            memcpy(var52, (double[]){0.0, 0.5454545454545454, 0.36363636363636365, 0.09090909090909091}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.7333333333333333, 0.06666666666666667, 0.0, 0.2}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[78] <= 4040.0) {
                            if (input[72] <= -28.702290534973145) {
                                memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[50] <= -41.39999961853027) {
                                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[23] <= 13.961111068725586) {
                                if (input[77] <= -2913.0) {
                                    if (input[75] <= -654.3500061035156) {
                                        if (input[2] <= -66.4000015258789) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[30] <= 0.7565529644489288) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.07692307692307693, 0.02564102564102564, 0.8974358974358975}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[16] <= 5.388173580169678) {
                                        memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[31] <= 2.504407048225403) {
                                    if (input[50] <= 108.125) {
                                        if (input[33] <= 6.978837966918945) {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[35] <= 3.6154956817626953) {
                if (input[42] <= 2.9179104566574097) {
                    if (input[15] <= 33.95000076293945) {
                        if (input[32] <= 0.6628178656101227) {
                            if (input[37] <= 1.3680344820022583) {
                                memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[32] <= 0.5996376574039459) {
                                    if (input[22] <= -0.47829268872737885) {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[60] <= -2.032059073448181) {
                                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.2, 0.0, 0.8, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 54.375) {
                                        if (input[23] <= 22.333333015441895) {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 63.87057685852051) {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[62] <= -1.3286330699920654) {
                                if (input[40] <= 43.1008415222168) {
                                    if (input[38] <= 0.8136177062988281) {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[78] <= 7924.0) {
                                            memcpy(var52, (double[]){0.9, 0.0, 0.1, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[7] <= -114.0) {
                                    memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 91.67533874511719) {
                            if (input[18] <= 173.5) {
                                if (input[22] <= -5.142857074737549) {
                                    memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[40] <= 50.256526947021484) {
                                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[67] <= -0.8620872795581818) {
                                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[37] <= 1.821874976158142) {
                                memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[60] <= 1.8222116231918335) {
                        if (input[55] <= -1.36530339717865) {
                            if (input[57] <= -4.463464736938477) {
                                memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[80] <= -0.1318097710609436) {
                                    memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[35] <= 2.5757672786712646) {
                                        memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[21] <= 6.999312162399292) {
                                memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[77] <= -2585.0) {
                                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[25] <= 5.280092716217041) {
                            memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[3] <= 179.5) {
                                memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[35] <= 3.3614602088928223) {
                                    if (input[50] <= -53.05000162124634) {
                                        memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[75] <= 1245.7000122070312) {
                    if (input[40] <= 137.58646392822266) {
                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[27] <= -7.519607663154602) {
                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[53] <= 854.0) {
                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= -73.5) {
            if (input[67] <= 0.26141637563705444) {
                memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[75] <= 134.70000457763672) {
                    if (input[37] <= 2.2988877296447754) {
                        if (input[0] <= -35.350000858306885) {
                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[12] <= -226.0) {
                        if (input[75] <= 146.6500015258789) {
                            memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[32] <= 0.11051451787352562) {
                                memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var52, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var52, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[76] <= 1391.1600341796875) {
                if (input[62] <= -1.6045446395874023) {
                    memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var52, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var52, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var49, var52, 4, var48);
    double var53[4];
    if (input[38] <= 7.850174427032471) {
        if (input[38] <= 3.5842411518096924) {
            if (input[0] <= -103.92500305175781) {
                if (input[55] <= -0.6664441227912903) {
                    if (input[38] <= 2.944045901298523) {
                        if (input[50] <= 32.77499961853027) {
                            if (input[16] <= 25.70509147644043) {
                                if (input[50] <= 13.524999618530273) {
                                    if (input[65] <= 2.237097978591919) {
                                        if (input[35] <= 1.9847162961959839) {
                                            memcpy(var53, (double[]){0.1, 0.8, 0.1, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[56] <= 1.8306304812431335) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[65] <= 0.808648407459259) {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[35] <= 1.1800982356071472) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.7777777777777778, 0.0, 0.2222222222222222, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[70] <= -7.9200379848480225) {
                                memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[73] <= 6.022900581359863) {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[56] <= 1.7131186127662659) {
                            if (input[41] <= 32.59400749206543) {
                                if (input[57] <= -2.114561438560486) {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[32] <= 0.28992508351802826) {
                                if (input[47] <= 0.7317073047161102) {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[80] <= 0.7744756937026978) {
                                    if (input[56] <= 1.758890151977539) {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[55] <= -0.14193518459796906) {
                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[60] <= -0.683202862739563) {
                    if (input[51] <= 107.13593292236328) {
                        if (input[22] <= 1.2775842547416687) {
                            if (input[77] <= -5455.0) {
                                if (input[32] <= 0.24809635430574417) {
                                    if (input[36] <= 0.4648090600967407) {
                                        if (input[57] <= -3.988061547279358) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[32] <= -0.016255240887403488) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.75, 0.25, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[33] <= 2.880001664161682) {
                                        if (input[20] <= 1.4945197105407715) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[28] <= 5.154761791229248) {
                                    if (input[25] <= 1.8663150072097778) {
                                        if (input[47] <= 2.7006733417510986) {
                                            memcpy(var53, (double[]){0.14285714285714285, 0.4, 0.4, 0.05714285714285714}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.06666666666666667, 0.8666666666666667, 0.06666666666666667, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[40] <= 7.234566926956177) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.2, 0.8, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[46] <= 39.000396728515625) {
                                        if (input[62] <= -4.093197345733643) {
                                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[7] <= -150.0) {
                            if (input[66] <= 1.2101658880710602) {
                                memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[81] <= 0.5230327546596527) {
                                if (input[56] <= 2.1786751747131348) {
                                    if (input[8] <= 50.400001525878906) {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[25] <= 0.8618606328964233) {
                                    memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[32] <= -0.962905764579773) {
                        if (input[60] <= 1.870069980621338) {
                            if (input[1] <= 52.07302665710449) {
                                if (input[43] <= 300.0) {
                                    if (input[8] <= 250.0) {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[13] <= -206.5) {
                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[77] <= -1642.0) {
                                if (input[56] <= 1.4265411496162415) {
                                    if (input[7] <= -17.050000190734863) {
                                        if (input[12] <= -104.6500015258789) {
                                            memcpy(var53, (double[]){0.045454545454545456, 0.36363636363636365, 0.18181818181818182, 0.4090909090909091}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.06666666666666667, 0.06666666666666667, 0.8666666666666667, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[50] <= -22.524999618530273) {
                                        if (input[25] <= 2.235600233078003) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.7777777777777778, 0.0, 0.0, 0.2222222222222222}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 0.3540937751531601) {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.11764705882352941, 0.8823529411764706, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -303.0) {
                                    if (input[49] <= 0.9749999940395355) {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[65] <= 0.25138724595308304) {
                                        if (input[26] <= 3.7026456594467163) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[66] <= 2.0206754207611084) {
                if (input[2] <= -35.60000038146973) {
                    if (input[81] <= -0.5809558033943176) {
                        if (input[12] <= -271.1999969482422) {
                            if (input[25] <= -0.9874686598777771) {
                                memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[32] <= 0.6189152002334595) {
                                if (input[46] <= 4.6820642948150635) {
                                    if (input[6] <= 45.83790397644043) {
                                        if (input[77] <= -4443.0) {
                                            memcpy(var53, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= -67.69999885559082) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 9.614503860473633) {
                                        if (input[48] <= 17.774999618530273) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.4, 0.6, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[57] <= -4.326598763465881) {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[32] <= 0.11808278784155846) {
                            if (input[43] <= 13.565163612365723) {
                                memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[65] <= 2.1109102964401245) {
                                    if (input[68] <= 2.067380905151367) {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[25] <= 5.57735013961792) {
                                if (input[66] <= 0.7271818220615387) {
                                    if (input[50] <= -143.0749969482422) {
                                        if (input[43] <= 6.383208274841309) {
                                            memcpy(var53, (double[]){0.25, 0.5, 0.0, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= -65.07499885559082) {
                                            memcpy(var53, (double[]){0.21428571428571427, 0.07142857142857142, 0.7142857142857143, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.6153846153846154, 0.07692307692307693, 0.3076923076923077}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 69.875) {
                                        if (input[21] <= 0.8840020596981049) {
                                            memcpy(var53, (double[]){0.5555555555555556, 0.1111111111111111, 0.16666666666666666, 0.16666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.86, 0.08, 0.06, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[58] <= 18.08955669403076) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[43] <= 233.66666412353516) {
                                    if (input[20] <= 4.490246295928955) {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[80] <= -0.5650418102741241) {
                                        memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[47] <= 4.726102828979492) {
                        if (input[25] <= 3.422250747680664) {
                            if (input[82] <= 40.0) {
                                memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[53] <= 894.5) {
                                memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[70] <= -1.651526689529419) {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[40] <= 76.78001403808594) {
                            if (input[55] <= 1.046676367521286) {
                                if (input[10] <= 25.875) {
                                    if (input[76] <= 2001.5811157226562) {
                                        if (input[46] <= 2.3134599924087524) {
                                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[56] <= 0.5110447853803635) {
                                        if (input[36] <= 0.7016971260309219) {
                                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[10] <= 214.67499542236328) {
                                    if (input[76] <= 2439.1944580078125) {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[28] <= 17.971590995788574) {
                    if (input[5] <= 122.42499923706055) {
                        if (input[17] <= 10.5) {
                            if (input[13] <= 395.20001220703125) {
                                if (input[66] <= 2.682145118713379) {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[31] <= 3.0817623138427734) {
                                    if (input[21] <= 0.7230555713176727) {
                                        memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[66] <= 2.7033523321151733) {
                            if (input[76] <= 3173.2401123046875) {
                                if (input[20] <= 4.992516040802002) {
                                    memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[73] <= 43.08015251159668) {
                        if (input[65] <= 3.1237640380859375) {
                            if (input[21] <= 2.5814003944396973) {
                                memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[50] <= -9.750000238418579) {
                                    if (input[38] <= 6.990391254425049) {
                                        if (input[26] <= 9.70430040359497) {
                                            memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[77] <= -9637.0) {
                                memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[32] <= 1.5378392934799194) {
                                    memcpy(var53, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var53, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var53, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        memcpy(var53, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var48, var53, 4, var47);
    double var54[4];
    if (input[67] <= -2.150607705116272) {
        if (input[72] <= -9.393129825592041) {
            if (input[53] <= 906.5) {
                if (input[5] <= 149.3499984741211) {
                    if (input[61] <= 1.4433045387268066) {
                        if (input[2] <= -90.19999694824219) {
                            memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[30] <= 3.3379132747650146) {
                            if (input[2] <= -104.0999984741211) {
                                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[24] <= 0.9249999821186066) {
                                    memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[42] <= 3.7927420139312744) {
                                        memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[27] <= 0.6416281312704086) {
                                            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[22] <= -3.538152515888214) {
                        memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[0] <= 146.5999984741211) {
                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[65] <= 1.2774135768413544) {
                                if (input[36] <= 1.0070886015892029) {
                                    memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[66] <= 3.1280646324157715) {
                if (input[13] <= 458.6000061035156) {
                    if (input[78] <= 3357.0) {
                        if (input[50] <= -84.5999984741211) {
                            if (input[62] <= -2.2116767168045044) {
                                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[30] <= 3.182372212409973) {
                            if (input[40] <= 3.939887046813965) {
                                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[37] <= 1.488794207572937) {
                                memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[31] <= 0.7829815596342087) {
                        memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[75] <= -265.20001220703125) {
                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[53] <= -154.5) {
            if (input[27] <= 0.8795005679130554) {
                memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[5] <= -162.3249969482422) {
                memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[25] <= 6.077749013900757) {
                    if (input[22] <= 0.9235294163227081) {
                        if (input[66] <= 0.7490315139293671) {
                            if (input[26] <= 6.9293975830078125) {
                                if (input[77] <= 147.0) {
                                    if (input[65] <= 0.8196654915809631) {
                                        if (input[43] <= 20.303383827209473) {
                                            memcpy(var54, (double[]){0.07500000000000001, 0.47500000000000003, 0.37500000000000006, 0.07500000000000001}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.2, 0.06666666666666667, 0.7333333333333333}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 1.1999999284744263) {
                                            memcpy(var54, (double[]){0.4274193548387097, 0.3064516129032258, 0.12903225806451613, 0.13709677419354838}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.13157894736842105, 0.7894736842105263, 0.02631578947368421, 0.05263157894736842}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[51] <= 47.93178749084473) {
                                    memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[38] <= 7.095657587051392) {
                                if (input[83] <= 0.75) {
                                    if (input[5] <= 59.375) {
                                        if (input[42] <= 0.3452381044626236) {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.3575418994413408, 0.1564245810055866, 0.4748603351955307, 0.0111731843575419}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= 56.60000038146973) {
                                            memcpy(var54, (double[]){0.6829268292682927, 0.24390243902439024, 0.0, 0.07317073170731707}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.6666666666666666, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[27] <= 0.3125843405723572) {
                                        if (input[31] <= 0.27974511682987213) {
                                            memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= -32.17500019073486) {
                                            memcpy(var54, (double[]){0.6923076923076923, 0.0, 0.15384615384615385, 0.15384615384615385}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.25, 0.5, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[35] <= 3.312051773071289) {
                                    if (input[42] <= 2.3471014983952045) {
                                        memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -5.065221309661865) {
                                        if (input[2] <= -76.70000076293945) {
                                            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[42] <= 1.3000892400741577) {
                            if (input[60] <= 5.443774700164795) {
                                memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[12] <= -40.29999923706055) {
                                if (input[11] <= 32.83360958099365) {
                                    memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[20] <= 1.5992007851600647) {
                                        memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[65] <= 0.7564668953418732) {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.65, 0.2, 0.15}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[77] <= -4535.0) {
                                    if (input[51] <= 479.4851837158203) {
                                        if (input[27] <= 1.5770242810249329) {
                                            memcpy(var54, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.8571428571428571, 0.0, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[38] <= 6.74430775642395) {
                                            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[48] <= 12.801668643951416) {
                                        if (input[25] <= 1.1128466427326202) {
                                            memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 0.75, 0.0, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 53.99790954589844) {
                                            memcpy(var54, (double[]){0.0, 0.041666666666666664, 0.0, 0.9583333333333334}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.6666666666666666, 0.0, 0.0, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[10] <= 132.6500015258789) {
                        if (input[66] <= 0.785125344991684) {
                            if (input[72] <= -233.84732818603516) {
                                memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[51] <= 243.15190887451172) {
                                if (input[68] <= 3.024310827255249) {
                                    memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var54, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[51] <= 380.98065185546875) {
                                    if (input[33] <= 3.315909266471863) {
                                        if (input[15] <= 29.774999618530273) {
                                            memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[40] <= 40.11237716674805) {
                            memcpy(var54, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[10] <= 180.6999969482422) {
                                if (input[44] <= 0.9749999940395355) {
                                    memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var54, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var54, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var47, var54, 4, var46);
    double var55[4];
    if (input[12] <= -479.0) {
        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    } else {
        if (input[45] <= 96.77201080322266) {
            if (input[37] <= 1.9930089116096497) {
                if (input[22] <= 0.9767315983772278) {
                    if (input[53] <= 149.0) {
                        if (input[77] <= -3585.0) {
                            if (input[23] <= 1.4434524178504944) {
                                if (input[83] <= 0.5) {
                                    if (input[30] <= 0.42861708998680115) {
                                        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 1.9738133549690247) {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= -0.2952776253223419) {
                                    if (input[26] <= 0.9677572250366211) {
                                        if (input[71] <= 15.001433610916138) {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 8.613083839416504) {
                                            memcpy(var55, (double[]){0.25, 0.0, 0.25, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.9375, 0.03125, 0.03125, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[23] <= 1.9110621809959412) {
                                        memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[81] <= 0.7514723539352417) {
                                            memcpy(var55, (double[]){0.2894736842105263, 0.3157894736842105, 0.2631578947368421, 0.13157894736842105}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[35] <= 4.528480291366577) {
                                if (input[27] <= 0.9883720874786377) {
                                    if (input[33] <= 2.191254734992981) {
                                        if (input[58] <= -0.5909710824489594) {
                                            memcpy(var55, (double[]){0.28395061728395066, 0.49382716049382724, 0.1851851851851852, 0.03703703703703704}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.3269230769230769, 0.125, 0.3942307692307692, 0.15384615384615385}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[40] <= 41.61050033569336) {
                                            memcpy(var55, (double[]){0.05555555555555555, 0.75, 0.027777777777777776, 0.16666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.8, 0.0, 0.2, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[27] <= -0.06505602411925793) {
                            if (input[25] <= 0.2789503186941147) {
                                memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[66] <= 0.624276876449585) {
                                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[6] <= 95.9536247253418) {
                                        if (input[21] <= 2.223270058631897) {
                                            memcpy(var55, (double[]){0.21739130434782608, 0.043478260869565216, 0.6956521739130435, 0.043478260869565216}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.3272727272727273, 0.5090909090909091, 0.14545454545454548, 0.018181818181818184}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.3402690291404724) {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.1935483870967742, 0.16129032258064516, 0.41935483870967744, 0.22580645161290322}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[8] <= 296.5) {
                                if (input[27] <= 0.14011181145906448) {
                                    if (input[77] <= -1910.0) {
                                        if (input[25] <= 7.165132284164429) {
                                            memcpy(var55, (double[]){0.06451612903225806, 0.9032258064516129, 0.03225806451612903, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[6] <= 103.77513885498047) {
                                        if (input[23] <= 11.43181848526001) {
                                            memcpy(var55, (double[]){0.16666666666666666, 0.4444444444444444, 0.05555555555555555, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.125, 0.75, 0.125}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 5404.013427734375) {
                                            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[75] <= -1016.3499755859375) {
                                    memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[20] <= 1.6428554058074951) {
                        if (input[23] <= 2.3976190090179443) {
                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[50] <= -124.2249984741211) {
                            if (input[27] <= 1.6986762881278992) {
                                if (input[61] <= 0.6133058071136475) {
                                    if (input[2] <= -26.200000762939453) {
                                        memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[56] <= 0.5439620614051819) {
                                            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.8333333333333334, 0.0, 0.16666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[3] <= 16.299999713897705) {
                                        memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[62] <= -6.171123027801514) {
                                            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[40] <= 35.435203552246094) {
                                    memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[78] <= 17643.0) {
                                if (input[10] <= 212.25) {
                                    if (input[82] <= 45.0) {
                                        if (input[81] <= 0.019305944442749023) {
                                            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= -0.15369977615773678) {
                                            memcpy(var55, (double[]){0.07142857142857144, 0.8214285714285715, 0.10714285714285715, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.0, 0.0, 0.25, 0.75}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[8] <= 222.3499984741211) {
                                        memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[21] <= 3.5095088481903076) {
                                            memcpy(var55, (double[]){0.0, 0.10526315789473684, 0.10526315789473684, 0.7894736842105263}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){0.3125, 0.25, 0.3125, 0.125}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[2] <= -75.20000076293945) {
                    if (input[32] <= 0.1144055612385273) {
                        if (input[16] <= 5.3807642459869385) {
                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[8] <= -40.25) {
                            if (input[46] <= 2.4166383743286133) {
                                memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[23] <= 1.7535353899002075) {
                                    memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[45] <= 5.803615093231201) {
                                        memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[70] <= -4.28358781337738) {
                                memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[38] <= 6.760106801986694) {
                                    if (input[12] <= -269.0) {
                                        if (input[56] <= 0.7931492626667023) {
                                            memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var55, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[40] <= 73.0462875366211) {
                        if (input[41] <= 0.37190160155296326) {
                            memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[80] <= -0.622719019651413) {
                                if (input[58] <= 0.5819830149412155) {
                                    memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[53] <= -228.0) {
                                    if (input[52] <= -476.0) {
                                        memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var55, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var55, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var55, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var46, var55, 4, var45);
    double var56[4];
    if (input[32] <= 0.11819852888584137) {
        if (input[10] <= -216.5999984741211) {
            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[17] <= 4.5) {
                if (input[37] <= 2.4420865774154663) {
                    if (input[55] <= -1.354443073272705) {
                        if (input[39] <= 0.949999988079071) {
                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[7] <= -163.0) {
                                memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[63] <= 6.26854395866394) {
                            if (input[27] <= 0.3167388290166855) {
                                if (input[55] <= 1.9952282309532166) {
                                    memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[16] <= 53.52347946166992) {
                                if (input[75] <= 611.6499938964844) {
                                    if (input[36] <= 0.8575867414474487) {
                                        memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[31] <= 2.1491122245788574) {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[72] <= -15.045801639556885) {
                                        memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[47] <= 0.9645537436008453) {
                                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[66] <= 0.43782661855220795) {
                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= -3.350000023841858) {
            if (input[40] <= 79.68474197387695) {
                if (input[73] <= 11.538167953491211) {
                    if (input[5] <= 57.04999923706055) {
                        if (input[78] <= 3575.0) {
                            if (input[33] <= 2.591169834136963) {
                                if (input[48] <= 57.0) {
                                    if (input[43] <= 10.651707172393799) {
                                        if (input[53] <= 122.5) {
                                            memcpy(var56, (double[]){0.17910447761194032, 0.49253731343283585, 0.17910447761194032, 0.1492537313432836}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 1.1646061539649963) {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 1.8282442688941956) {
                                        if (input[41] <= 35.034889221191406) {
                                            memcpy(var56, (double[]){0.08695652173913043, 0.13043478260869565, 0.782608695652174, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 32.977460861206055) {
                                            memcpy(var56, (double[]){0.3888888888888889, 0.1111111111111111, 0.3055555555555556, 0.19444444444444445}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.20000000000000004, 0.6333333333333334, 0.16666666666666669, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -182.5) {
                                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[40] <= 6.132496356964111) {
                                        memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[38] <= 1.1616161465644836) {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[45] <= 5.977918386459351) {
                                if (input[20] <= 1.3169423341751099) {
                                    if (input[76] <= 2903.08447265625) {
                                        if (input[12] <= -285.0) {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.2857142857142857, 0.5238095238095238, 0.19047619047619047, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= -7.378435134887695) {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.875, 0.08333333333333333, 0.041666666666666664, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[73] <= 6.030534267425537) {
                                    if (input[75] <= 697.9499816894531) {
                                        if (input[27] <= 0.5995989143848419) {
                                            memcpy(var56, (double[]){0.9166666666666666, 0.08333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[37] <= 1.4972598552703857) {
                                            memcpy(var56, (double[]){0.5454545454545454, 0.09090909090909091, 0.36363636363636365, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.05, 0.25, 0.7, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[5] <= 72.8499984741211) {
                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[17] <= 0.5) {
                        if (input[8] <= 99.5) {
                            if (input[27] <= -2.7248677015304565) {
                                memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[52] <= -216.5) {
                                memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[60] <= 0.5765542089939117) {
                            if (input[16] <= 7.6287617683410645) {
                                if (input[68] <= 3.1687305569648743) {
                                    memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[21] <= 0.6955142021179199) {
                                        memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[72] <= 4.175572514533997) {
                                    memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[15] <= 20.72499942779541) {
                                memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[42] <= 2.7393617033958435) {
                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[27] <= -7.390909194946289) {
                        memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[66] <= 0.7783569991588593) {
                if (input[23] <= 32.333333015441895) {
                    if (input[73] <= -151.71755981445312) {
                        memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[26] <= 7.448500633239746) {
                            if (input[62] <= -1.7418950200080872) {
                                if (input[46] <= 47.47701954841614) {
                                    memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var56, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[18] <= 328.5) {
                    if (input[20] <= 6.69254732131958) {
                        if (input[60] <= 7.94245457649231) {
                            if (input[22] <= 0.7610970139503479) {
                                if (input[52] <= -1094.0) {
                                    if (input[57] <= -4.063265085220337) {
                                        if (input[43] <= 139.65201568603516) {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 75.75045776367188) {
                                            memcpy(var56, (double[]){0.14285714285714285, 0.8571428571428571, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[6] <= 95.34297943115234) {
                                        if (input[56] <= 1.4766259789466858) {
                                            memcpy(var56, (double[]){0.14285714285714285, 0.07142857142857142, 0.7857142857142857, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.39473684210526316, 0.34210526315789475, 0.15789473684210525, 0.10526315789473684}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 2.2197749614715576) {
                                            memcpy(var56, (double[]){0.037037037037037035, 0.07407407407407407, 0.8888888888888888, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 78.39177703857422) {
                                    if (input[48] <= 155.29573822021484) {
                                        if (input[31] <= 1.5006071329116821) {
                                            memcpy(var56, (double[]){0.19230769230769232, 0.38461538461538464, 0.34615384615384615, 0.07692307692307693}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.1111111111111111, 0.2222222222222222, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= -0.5469853281974792) {
                                            memcpy(var56, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[63] <= 11.00101375579834) {
                                        if (input[45] <= 5.787363290786743) {
                                            memcpy(var56, (double[]){0.4, 0.6, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){0.030303030303030304, 0.12121212121212122, 0.06060606060606061, 0.7878787878787878}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 324.5) {
                                            memcpy(var56, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var56, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var56, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var56, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var45, var56, 4, var44);
    double var57[4];
    if (input[12] <= 203.0999984741211) {
        if (input[5] <= -157.9499969482422) {
            if (input[71] <= 7.217865705490112) {
                if (input[32] <= 0.14621493592858315) {
                    memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[15] <= 24.425000190734863) {
                        memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[65] <= 0.8228089809417725) {
                if (input[32] <= 0.1992972195148468) {
                    if (input[42] <= -4.735499382019043) {
                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[82] <= 15.0) {
                            if (input[41] <= 108.45002365112305) {
                                if (input[46] <= 67.00856256484985) {
                                    memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[76] <= 2192.0382080078125) {
                                memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[78] <= 8137.0) {
                                    memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[45] <= 76.39573287963867) {
                        if (input[66] <= 0.7900439202785492) {
                            if (input[13] <= 58.20000076293945) {
                                if (input[3] <= 15.200000286102295) {
                                    if (input[28] <= 1.9643734097480774) {
                                        if (input[75] <= 185.70000457763672) {
                                            memcpy(var57, (double[]){0.0, 0.0, 0.0625, 0.9375}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.11764705882352941, 0.35294117647058826, 0.5294117647058824, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[56] <= 0.7868416905403137) {
                                            memcpy(var57, (double[]){0.05555555555555555, 0.0, 0.9444444444444444, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[82] <= 45.0) {
                                        if (input[15] <= 28.574999809265137) {
                                            memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[76] <= 1148.7805786132812) {
                                    if (input[72] <= -207.06106567382812) {
                                        memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= -88.20000076293945) {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 0.27575915306806564) {
                                            memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.11764705882352941, 0.0, 0.0, 0.8823529411764706}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[30] <= 1.9795899391174316) {
                                if (input[51] <= 51.38055992126465) {
                                    if (input[48] <= 42.13513517379761) {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[15] <= 27.300000190734863) {
                                        if (input[81] <= -0.7512456178665161) {
                                            memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.06060606060606061, 0.15151515151515152, 0.7878787878787878, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[41] <= 63.00636863708496) {
                                            memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[47] <= 3.628066301345825) {
                                    if (input[57] <= -1.8297908306121826) {
                                        memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[52] <= -1236.5) {
                                        if (input[12] <= -151.5) {
                                            memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= -172.8499984741211) {
                                            memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.07692307692307693, 0.9230769230769231, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[73] <= 6.278625965118408) {
                            memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[57] <= -8.436098098754883) {
                    if (input[12] <= -246.4499969482422) {
                        memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 5.786423206329346) {
                        if (input[38] <= 7.726053476333618) {
                            if (input[72] <= 4.93511438369751) {
                                if (input[58] <= -1.5095848441123962) {
                                    if (input[27] <= -1.745098054409027) {
                                        if (input[62] <= -5.501832008361816) {
                                            memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[76] <= 4617.84228515625) {
                                        if (input[10] <= -198.3499984741211) {
                                            memcpy(var57, (double[]){0.49572649572649574, 0.17094017094017094, 0.27350427350427353, 0.05982905982905983}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.3153153153153153, 0.35135135135135137, 0.18018018018018017, 0.15315315315315314}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 163.5) {
                                            memcpy(var57, (double[]){0.038461538461538464, 0.11538461538461539, 0.8461538461538461, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.2727272727272727, 0.36363636363636365, 0.18181818181818182, 0.18181818181818182}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= -38.10000038146973) {
                            if (input[15] <= 37.17499923706055) {
                                if (input[11] <= 23.748760223388672) {
                                    memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[42] <= 0.8806566148996353) {
                                        memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[43] <= 291.4499969482422) {
                                            memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var57, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[72] <= -12.080152988433838) {
                                    memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[17] <= 2.5) {
                                if (input[12] <= 38.10000038146973) {
                                    memcpy(var57, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var57, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        memcpy(var57, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var44, var57, 4, var43);
    double var58[4];
    if (input[38] <= 7.850174427032471) {
        if (input[20] <= 6.185749053955078) {
            if (input[75] <= 166.3499984741211) {
                if (input[3] <= -17.199999809265137) {
                    if (input[55] <= -0.9094171822071075) {
                        if (input[53] <= 232.0) {
                            if (input[16] <= 5.836843252182007) {
                                if (input[26] <= 2.071325182914734) {
                                    if (input[48] <= 184.5) {
                                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -2.1867698431015015) {
                                        memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[18] <= 44.5) {
                                    if (input[23] <= 0.7149758636951447) {
                                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[52] <= -238.0) {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.25, 0.75, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[72] <= -12.622137546539307) {
                                        if (input[73] <= 2.0877861976623535) {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.9285714285714286, 0.0, 0.07142857142857142, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[37] <= 0.26246292144060135) {
                                            memcpy(var58, (double[]){0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.25, 0.75, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[66] <= 0.8442185521125793) {
                        if (input[31] <= 0.7497616112232208) {
                            if (input[43] <= 5.877777576446533) {
                                memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[67] <= 0.2434537336230278) {
                                    if (input[66] <= 0.7917520403862) {
                                        if (input[72] <= -11.17175579071045) {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.4444444444444444, 0.2222222222222222, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[66] <= 0.8427501022815704) {
                                        if (input[62] <= -2.64313542842865) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[81] <= 0.7196266353130341) {
                            if (input[70] <= 8.986259937286377) {
                                if (input[2] <= 43.0) {
                                    if (input[66] <= 1.252379298210144) {
                                        if (input[33] <= 1.834259033203125) {
                                            memcpy(var58, (double[]){0.2222222222222222, 0.2222222222222222, 0.5555555555555556, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.16666666666666666, 0.08333333333333333, 0.16666666666666666, 0.5833333333333334}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 9.319231986999512) {
                                            memcpy(var58, (double[]){0.8333333333333334, 0.09259259259259259, 0.037037037037037035, 0.037037037037037035}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= 378.4499969482422) {
                                        if (input[63] <= 27.351200103759766) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[1] <= 52.66240119934082) {
                                    memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[72] <= -8.641221523284912) {
                                        memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[35] <= 1.584456205368042) {
                                if (input[18] <= 171.5) {
                                    memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[10] <= 122.9749984741211) {
                                    if (input[7] <= -236.5) {
                                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[63] <= 23.631254196166992) {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.95, 0.05}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[20] <= 1.647692084312439) {
                    if (input[40] <= 7.885315179824829) {
                        if (input[7] <= -179.5) {
                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[65] <= 0.7950566709041595) {
                                if (input[70] <= -169.673095703125) {
                                    if (input[12] <= -67.80000114440918) {
                                        memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[16] <= 8.507610321044922) {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[70] <= 0.19809160381555557) {
                                        if (input[52] <= -339.0) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.55, 0.05, 0.2, 0.2}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.6258448958396912) {
                                            memcpy(var58, (double[]){0.0, 0.125, 0.875, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[78] <= 938.0) {
                                    memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[25] <= 2.2444359064102173) {
                                        if (input[13] <= -47.70000076293945) {
                                            memcpy(var58, (double[]){0.7727272727272727, 0.09090909090909091, 0.045454545454545456, 0.09090909090909091}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.345679012345679, 0.345679012345679, 0.2962962962962963, 0.012345679012345678}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 0.5371866375207901) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= -212.0) {
                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[42] <= 8.875) {
                                if (input[65] <= 0.37508998811244965) {
                                    memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[43] <= 305.0) {
                                        if (input[76] <= 6224.6612548828125) {
                                            memcpy(var58, (double[]){0.04878048780487805, 0.024390243902439025, 0.926829268292683, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[56] <= 0.3469739705324173) {
                                    if (input[49] <= 0.32500000298023224) {
                                        memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[73] <= 2.0076335668563843) {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[24] <= 0.9749999940395355) {
                        if (input[70] <= 1.8095420002937317) {
                            if (input[23] <= 22.5) {
                                if (input[49] <= 0.8250000178813934) {
                                    memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[41] <= 281.8843688964844) {
                                        if (input[53] <= 145.0) {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.027777777777777776, 0.1111111111111111, 0.8333333333333334, 0.027777777777777776}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[66] <= 1.697729229927063) {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[2] <= -65.70000076293945) {
                                    memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[17] <= 5.5) {
                                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[16] <= 20.583332061767578) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] <= 80.70000076293945) {
                                if (input[6] <= 92.90978240966797) {
                                    if (input[62] <= -3.0209591388702393) {
                                        memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[21] <= 7.889870643615723) {
                                            memcpy(var58, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[78] <= 10781.0) {
                                        if (input[20] <= 5.521599054336548) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[50] <= 35.07499980926514) {
                                    if (input[46] <= 76.40155410766602) {
                                        if (input[73] <= 23.175572395324707) {
                                            memcpy(var58, (double[]){0.07142857142857142, 0.6428571428571429, 0.2857142857142857, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[38] <= 7.026538610458374) {
                            if (input[28] <= 17.74209499359131) {
                                if (input[50] <= -145.5500030517578) {
                                    if (input[23] <= 2.296052575111389) {
                                        if (input[81] <= -0.047345370054244995) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[78] <= 3181.0) {
                                            memcpy(var58, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[26] <= 1.1288856267929077) {
                                        if (input[40] <= 6.960944652557373) {
                                            memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.4, 0.2, 0.2, 0.2}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= -63.900001525878906) {
                                            memcpy(var58, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[17] <= 2.5) {
                                    memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[47] <= 2.8121036291122437) {
                                        if (input[77] <= -6212.0) {
                                            memcpy(var58, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[71] <= 20.574604988098145) {
                                memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[40] <= 39.94937324523926) {
                if (input[26] <= 5.570921897888184) {
                    memcpy(var58, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var58, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        memcpy(var58, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var43, var58, 4, var42);
    double var59[4];
    if (input[0] <= -183.7249984741211) {
        if (input[81] <= 0.679222971200943) {
            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[12] <= -310.5) {
                memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[35] <= 4.849972724914551) {
            if (input[38] <= 7.850174427032471) {
                if (input[22] <= 0.9222381711006165) {
                    if (input[47] <= -2.16952383518219) {
                        if (input[58] <= 9.110468864440918) {
                            if (input[1] <= 116.1760482788086) {
                                memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[66] <= 0.7145798206329346) {
                            if (input[21] <= 0.5883230566978455) {
                                if (input[11] <= 32.412641525268555) {
                                    if (input[6] <= 19.463372230529785) {
                                        if (input[41] <= 18.196747303009033) {
                                            memcpy(var59, (double[]){0.3225806451612903, 0.3225806451612903, 0.24193548387096775, 0.11290322580645161}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[42] <= 0.3265306055545807) {
                                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[48] <= 15.382444858551025) {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.7142857142857143, 0.14285714285714285, 0.14285714285714285, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[48] <= 58.75) {
                                    if (input[42] <= 0.639892190694809) {
                                        if (input[58] <= -0.2817753925919533) {
                                            memcpy(var59, (double[]){0.6000000000000001, 0.30000000000000004, 0.0, 0.10000000000000002}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.1875, 0.125, 0.6875, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[63] <= 0.8929749727249146) {
                                            memcpy(var59, (double[]){0.0, 0.9056603773584906, 0.0, 0.09433962264150944}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.3, 0.4, 0.3}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[55] <= -1.7979435324668884) {
                                        if (input[80] <= 0.7607981562614441) {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[33] <= 3.6775447130203247) {
                                            memcpy(var59, (double[]){0.0, 0.6428571428571429, 0.14285714285714285, 0.21428571428571427}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= -217.5) {
                                if (input[5] <= -177.64999389648438) {
                                    memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[10] <= -253.92499542236328) {
                                    if (input[57] <= -6.654182434082031) {
                                        if (input[68] <= 5.0247509479522705) {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.8, 0.2, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[28] <= 13.25) {
                                            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= -92.35000228881836) {
                                        if (input[3] <= -17.199999809265137) {
                                            memcpy(var59, (double[]){0.2916666666666667, 0.041666666666666664, 0.5416666666666666, 0.125}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.043478260869565216, 0.9565217391304348, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= 15.066411972045898) {
                                            memcpy(var59, (double[]){0.36764705882352944, 0.16176470588235295, 0.36764705882352944, 0.10294117647058823}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[32] <= 0.6524254679679871) {
                        if (input[23] <= 2.296052575111389) {
                            if (input[36] <= 0.5565182268619537) {
                                memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[52] <= -2230.5) {
                                if (input[2] <= -22.700000762939453) {
                                    memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[66] <= 0.44227707386016846) {
                                    if (input[36] <= 1.0912531614303589) {
                                        memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[78] <= 2623.0) {
                                        memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[77] <= -4919.0) {
                            if (input[66] <= 1.9829314947128296) {
                                if (input[16] <= 12.408774852752686) {
                                    if (input[13] <= 339.8500061035156) {
                                        if (input[52] <= -220.0) {
                                            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[67] <= -2.8729456663131714) {
                                        memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[22] <= 1.157653033733368) {
                                            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[77] <= -8512.0) {
                                    if (input[15] <= 39.20000076293945) {
                                        if (input[52] <= -333.0) {
                                            memcpy(var59, (double[]){0.2, 0.0, 0.8, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[58] <= 6.131197452545166) {
                                            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[51] <= 360.25990295410156) {
                                        if (input[30] <= 3.428846001625061) {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[62] <= 0.13677442073822021) {
                                            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[16] <= 2.2348090410232544) {
                                if (input[3] <= 5.800000071525574) {
                                    memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[43] <= 9.273809432983398) {
                                        memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[65] <= -0.466849185526371) {
                                    if (input[63] <= 5.076911211013794) {
                                        memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -0.5387502461671829) {
                                        if (input[81] <= 0.17566590011119843) {
                                            memcpy(var59, (double[]){0.0, 0.08695652173913043, 0.0, 0.9130434782608695}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= 2.095588207244873) {
                                            memcpy(var59, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var59, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var59, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var42, var59, 4, var41);
    double var60[4];
    if (input[37] <= 1.9344727993011475) {
        if (input[35] <= 4.777108907699585) {
            if (input[17] <= 8.5) {
                if (input[23] <= 1.8896761536598206) {
                    if (input[6] <= 30.08683204650879) {
                        if (input[23] <= 1.4206514358520508) {
                            if (input[55] <= -0.5331612825393677) {
                                if (input[1] <= 17.902554512023926) {
                                    if (input[8] <= -59.5) {
                                        if (input[38] <= 0.9466389417648315) {
                                            memcpy(var60, (double[]){0.13043478260869565, 0.34782608695652173, 0.5217391304347826, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.8181818181818182, 0.13636363636363635, 0.045454545454545456, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[31] <= 0.19545062631368637) {
                                        if (input[70] <= 0.8545801639556885) {
                                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[50] <= 42.27499961853027) {
                                    memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= 11.800525665283203) {
                                if (input[30] <= 0.9067298471927643) {
                                    memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[57] <= -3.6514413356781006) {
                                        memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[38] <= 2.817282557487488) {
                                    memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[20] <= -0.8499576449394226) {
                                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[70] <= -10.016412258148193) {
                            if (input[25] <= 3.919079542160034) {
                                memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[8] <= -38.75) {
                                if (input[77] <= -679.0) {
                                    if (input[11] <= 57.09605407714844) {
                                        memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= -18.0) {
                                    if (input[6] <= 42.73499870300293) {
                                        memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= -97.75) {
                                        memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[8] <= -66.5) {
                        if (input[56] <= 1.7651909589767456) {
                            if (input[70] <= -1.6217557191848755) {
                                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[43] <= 179.74602508544922) {
                            if (input[47] <= 7.95311164855957) {
                                if (input[76] <= 1559.881103515625) {
                                    if (input[10] <= -153.8249969482422) {
                                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[2] <= -20.700000762939453) {
                                            memcpy(var60, (double[]){0.038461538461538464, 0.8269230769230769, 0.07692307692307693, 0.057692307692307696}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.25, 0.0, 0.75}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 316.5) {
                                        if (input[10] <= 233.5999984741211) {
                                            memcpy(var60, (double[]){0.25125628140703515, 0.3065326633165829, 0.33668341708542715, 0.10552763819095477}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.09090909090909091, 0.13636363636363635, 0.7727272727272727}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 294.4736022949219) {
                                            memcpy(var60, (double[]){0.0, 0.9473684210526315, 0.05263157894736842, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[72] <= -183.0763397216797) {
                                    if (input[22] <= 1.2769556045532227) {
                                        memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[65] <= 1.8895207047462463) {
                                        if (input[56] <= 0.6548891365528107) {
                                            memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[44] <= 0.7000000178813934) {
                                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[20] <= 6.084471702575684) {
                                if (input[21] <= 3.461291193962097) {
                                    if (input[1] <= 64.98386001586914) {
                                        if (input[52] <= -6.0) {
                                            memcpy(var60, (double[]){0.9090909090909092, 0.0, 0.04545454545454546, 0.04545454545454546}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= -1.5895390510559082) {
                                            memcpy(var60, (double[]){0.75, 0.16666666666666666, 0.08333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 0.75, 0.16666666666666666, 0.08333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[41] <= 112.33798599243164) {
                                        if (input[26] <= 4.646082878112793) {
                                            memcpy(var60, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.23076923076923078, 0.11538461538461539, 0.5, 0.15384615384615385}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 193.0) {
                                            memcpy(var60, (double[]){0.0, 0.0, 0.25, 0.75}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[28] <= 30.643938541412354) {
                    memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        if (input[12] <= -256.6999969482422) {
            if (input[22] <= -0.09240717813372612) {
                if (input[71] <= 7.400643825531006) {
                    if (input[7] <= -183.0) {
                        memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[5] <= -131.125) {
                            memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[80] <= 0.8616330325603485) {
                                if (input[51] <= 29.22711181640625) {
                                    memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[10] <= -109.47500228881836) {
                if (input[50] <= -192.64999389648438) {
                    if (input[21] <= 1.105948567390442) {
                        if (input[36] <= 0.8764766156673431) {
                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 5.459533214569092) {
                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[40] <= 5.271910190582275) {
                            memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[81] <= -0.5872104167938232) {
                    if (input[31] <= 0.3557844012975693) {
                        if (input[25] <= 0.20007029175758362) {
                            memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[57] <= -1.7733895182609558) {
                                memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[55] <= 1.5243835151195526) {
                        if (input[27] <= 0.8795005679130554) {
                            if (input[5] <= -60.75) {
                                memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[67] <= 0.06490502506494522) {
                            if (input[35] <= 3.78177273273468) {
                                memcpy(var60, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[52] <= -555.0) {
                                memcpy(var60, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var60, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var41, var60, 4, var40);
    double var61[4];
    if (input[37] <= 2.164496898651123) {
        if (input[33] <= 7.191646337509155) {
            if (input[10] <= -325.5249938964844) {
                memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[38] <= 7.850174427032471) {
                    if (input[13] <= 578.5) {
                        if (input[38] <= 2.692747116088867) {
                            if (input[2] <= -70.70000076293945) {
                                if (input[81] <= 0.8104206621646881) {
                                    if (input[32] <= 0.28576889634132385) {
                                        if (input[65] <= 2.181084394454956) {
                                            memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[5] <= -118.04999923706055) {
                                            memcpy(var61, (double[]){0.20588235294117646, 0.5294117647058824, 0.058823529411764705, 0.20588235294117646}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.21621621621621623, 0.16216216216216217, 0.43243243243243246, 0.1891891891891892}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= 13.616214752197266) {
                                    if (input[62] <= -2.885636568069458) {
                                        if (input[15] <= 4.550000071525574) {
                                            memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[49] <= 0.9749999940395355) {
                                        if (input[13] <= 517.5) {
                                            memcpy(var61, (double[]){0.6, 0.0, 0.2, 0.2}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= 62.62500190734863) {
                                            memcpy(var61, (double[]){0.0, 0.9333333333333333, 0.06666666666666667, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] <= -63.70000076293945) {
                                if (input[8] <= -54.25) {
                                    if (input[53] <= 145.5) {
                                        if (input[8] <= -67.0) {
                                            memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.8846153846153847, 0.0, 0.07692307692307694, 0.03846153846153847}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[58] <= 0.39493201673030853) {
                                        if (input[11] <= 167.94996643066406) {
                                            memcpy(var61, (double[]){0.2608695652173913, 0.4891304347826087, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[40] <= 4.194890260696411) {
                                            memcpy(var61, (double[]){0.7954545454545455, 0.06818181818181819, 0.13636363636363638, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.3148148148148148, 0.2222222222222222, 0.42592592592592593, 0.037037037037037035}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[25] <= 5.816256046295166) {
                                    if (input[50] <= -19.97499942779541) {
                                        if (input[57] <= -1.3895889520645142) {
                                            memcpy(var61, (double[]){0.24778761061946902, 0.336283185840708, 0.18584070796460178, 0.23008849557522124}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.6857142857142857, 0.02857142857142857, 0.2571428571428571, 0.02857142857142857}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[53] <= 875.5) {
                                            memcpy(var61, (double[]){0.07407407407407407, 0.6666666666666666, 0.25925925925925924, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.0, 0.25, 0.4375, 0.3125}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[45] <= 62.84930419921875) {
                                        if (input[81] <= -0.555216372013092) {
                                            memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var61, (double[]){0.08333333333333333, 0.0, 0.5, 0.4166666666666667}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[25] <= 4.491337537765503) {
                if (input[47] <= 2.826900839805603) {
                    if (input[5] <= 70.875) {
                        memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[62] <= -3.0849196910858154) {
                            memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[66] <= 1.9862611293792725) {
                        memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[51] <= 150.20916748046875) {
                    if (input[75] <= 398.20001220703125) {
                        memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[33] <= 7.872090578079224) {
                        if (input[55] <= 7.784562587738037) {
                            memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[21] <= 6.330052852630615) {
                            memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[81] <= -0.6443293690681458) {
            if (input[20] <= 1.9228110313415527) {
                if (input[10] <= -187.32500457763672) {
                    memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[36] <= 0.7079927325248718) {
                        memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[18] <= 184.0) {
                if (input[10] <= -239.0999984741211) {
                    memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[60] <= -2.611657738685608) {
                        memcpy(var61, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[31] <= 0.014933964237570763) {
                            memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[52] <= -191.5) {
                                memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[7] <= -59.5) {
                                    memcpy(var61, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[16] <= 42.40950584411621) {
                    memcpy(var61, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var61, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var40, var61, 4, var39);
    double var62[4];
    if (input[38] <= 7.850174427032471) {
        if (input[50] <= 38.625) {
            if (input[42] <= 0.4203703701496124) {
                if (input[21] <= 4.349803924560547) {
                    if (input[80] <= 0.7380265295505524) {
                        if (input[57] <= -3.343802571296692) {
                            if (input[43] <= 46.23513317108154) {
                                memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[30] <= 1.0389572381973267) {
                                    memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[52] <= 13.5) {
                                if (input[71] <= 9.196816444396973) {
                                    if (input[22] <= -1.2090773582458496) {
                                        memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[13] <= -204.5) {
                                            memcpy(var62, (double[]){0.6666666666666666, 0.25, 0.0, 0.08333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 0.0, 0.42857142857142855, 0.5714285714285714}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[55] <= -0.5970783531665802) {
                                    if (input[3] <= -106.5) {
                                        memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[16] <= 45.88315391540527) {
                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[35] <= 1.3729032278060913) {
                                memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[77] <= -4174.0) {
                        if (input[29] <= 0.9749999940395355) {
                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[55] <= -1.7280529737472534) {
                    if (input[72] <= -12.465648651123047) {
                        if (input[11] <= 78.32129287719727) {
                            memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[61] <= 1.6575787663459778) {
                                if (input[38] <= 3.4697803258895874) {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[66] <= 0.79080930352211) {
                            if (input[47] <= 2.5993664264678955) {
                                if (input[8] <= -92.75) {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= -41.75) {
                                    if (input[78] <= 3474.0) {
                                        if (input[25] <= -8.519047498703003) {
                                            memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.8666666666666667, 0.13333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 3.1283724308013916) {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[70] <= -5.727099180221558) {
                                            memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[13] <= -55.0) {
                                if (input[73] <= 11.343511581420898) {
                                    if (input[28] <= 18.0) {
                                        memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[62] <= -6.2563722133636475) {
                                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[81] <= 0.6768611371517181) {
                                    if (input[73] <= 13.923664093017578) {
                                        if (input[1] <= 69.39898681640625) {
                                            memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.25, 0.0, 0.5, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= -75.9000015258789) {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[38] <= 2.442639946937561) {
                        if (input[68] <= 2.2109622955322266) {
                            if (input[70] <= -3.078435242176056) {
                                memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[7] <= -67.25) {
                                    if (input[6] <= 2.510972261428833) {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[70] <= 4.198091506958008) {
                                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[68] <= 3.2359108924865723) {
                                memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[43] <= 5.8813560009002686) {
                                    memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[67] <= -1.1412268280982971) {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[53] <= 39.0) {
                                            memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 0.75, 0.25, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 38.70000076293945) {
                            if (input[55] <= 0.500627689063549) {
                                if (input[11] <= 24.136616706848145) {
                                    if (input[81] <= 0.32038046419620514) {
                                        if (input[75] <= 479.0500030517578) {
                                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.09090909090909091, 0.2727272727272727, 0.18181818181818182, 0.45454545454545453}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 75.66622161865234) {
                                        if (input[55] <= -1.3094332218170166) {
                                            memcpy(var62, (double[]){0.05555555555555555, 0.5, 0.3888888888888889, 0.05555555555555555}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.07692307692307693, 0.019230769230769232, 0.8846153846153846, 0.019230769230769232}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[23] <= 1.9316601753234863) {
                                if (input[22] <= 1.057862639427185) {
                                    memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 3.5) {
                                    if (input[66] <= 0.8421899378299713) {
                                        if (input[0] <= -0.4000000134110451) {
                                            memcpy(var62, (double[]){0.23076923076923078, 0.6538461538461539, 0.11538461538461539, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 0.27586206896551724, 0.10344827586206896, 0.6206896551724138}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 1.334245204925537) {
                                            memcpy(var62, (double[]){0.6607142857142857, 0.017857142857142856, 0.32142857142857145, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.2463768115942029, 0.2463768115942029, 0.391304347826087, 0.11594202898550725}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[47] <= 2.727787137031555) {
                                        memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[6] <= 162.78279876708984) {
                                            memcpy(var62, (double[]){0.1038961038961039, 0.6233766233766234, 0.12987012987012986, 0.14285714285714285}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[44] <= 0.45000000298023224) {
                if (input[15] <= 10.774999618530273) {
                    if (input[8] <= -123.0) {
                        if (input[55] <= -0.7394323348999023) {
                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[78] <= 305.0) {
                            if (input[30] <= 1.4322634935379028) {
                                memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[67] <= -1.0741662383079529) {
                    if (input[46] <= 140.59140014648438) {
                        if (input[53] <= 408.0) {
                            if (input[65] <= 1.3991703987121582) {
                                if (input[50] <= 101.69999694824219) {
                                    memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[26] <= 6.1431732177734375) {
                                    memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[56] <= 1.3724536895751953) {
                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[61] <= 5.9800498485565186) {
                        if (input[30] <= 1.4850472807884216) {
                            if (input[6] <= 56.43889236450195) {
                                memcpy(var62, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var62, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var62, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        memcpy(var62, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var39, var62, 4, var38);
    double var63[4];
    if (input[40] <= 47.98474884033203) {
        if (input[50] <= -217.3000030517578) {
            if (input[55] <= -0.2615361362695694) {
                if (input[10] <= -233.0749969482422) {
                    if (input[57] <= -1.9271512031555176) {
                        memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[61] <= 0.5933981239795685) {
                        if (input[66] <= 0.49379152059555054) {
                            if (input[38] <= 3.7564128637313843) {
                                memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[68] <= 7.225774049758911) {
                    memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[21] <= 4.280320644378662) {
                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 76.76417541503906) {
                if (input[42] <= 3.866498351097107) {
                    if (input[30] <= 0.3229566961526871) {
                        if (input[72] <= -13.980916023254395) {
                            memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[50] <= -200.29999542236328) {
                                memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[67] <= 0.6906038820743561) {
                            if (input[70] <= -165.37767791748047) {
                                if (input[7] <= -173.10000610351562) {
                                    if (input[77] <= -2675.0) {
                                        if (input[43] <= 188.375) {
                                            memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 48.70000076293945) {
                                        if (input[81] <= -0.5747486650943756) {
                                            memcpy(var63, (double[]){0.8666666666666667, 0.0, 0.13333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.1111111111111111, 0.1111111111111111, 0.7777777777777778, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[31] <= 0.5520002543926239) {
                                            memcpy(var63, (double[]){0.967741935483871, 0.0, 0.0, 0.03225806451612903}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.375, 0.5, 0.0, 0.125}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[37] <= 1.8168362975120544) {
                                    if (input[73] <= 20.286259651184082) {
                                        if (input[52] <= 16.5) {
                                            memcpy(var63, (double[]){0.3609958506224067, 0.2199170124481328, 0.16597510373443985, 0.2531120331950208}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.125, 0.0, 0.875, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 34.22019004821777) {
                                            memcpy(var63, (double[]){0.0, 0.0, 0.9444444444444444, 0.05555555555555555}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[38] <= 8.315000057220459) {
                                        if (input[26] <= 0.7350842654705048) {
                                            memcpy(var63, (double[]){0.375, 0.125, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.06382978723404255, 0.1276595744680851, 0.7446808510638298, 0.06382978723404255}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[12] <= -226.5) {
                                if (input[72] <= 0.18320610374212265) {
                                    if (input[80] <= 0.07861827686429024) {
                                        if (input[72] <= -12.538167953491211) {
                                            memcpy(var63, (double[]){0.6, 0.4, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.08333333333333333, 0.875, 0.0, 0.041666666666666664}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.7921566367149353) {
                                            memcpy(var63, (double[]){0.35294117647058826, 0.35294117647058826, 0.17647058823529413, 0.11764705882352941}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[21] <= 1.0014580488204956) {
                                        if (input[0] <= -51.57500076293945) {
                                            memcpy(var63, (double[]){0.8571428571428571, 0.14285714285714285, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[50] <= 60.72500038146973) {
                                    if (input[22] <= 0.8132530152797699) {
                                        if (input[51] <= 400.0459899902344) {
                                            memcpy(var63, (double[]){0.058823529411764705, 0.0, 0.9411764705882353, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.588973268866539) {
                                            memcpy(var63, (double[]){0.5, 0.0, 0.25, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[23] <= 1.9752975702285767) {
                        if (input[46] <= 39.533926010131836) {
                            if (input[6] <= 18.255106925964355) {
                                if (input[26] <= 1.1234125792980194) {
                                    if (input[30] <= 0.3204987794160843) {
                                        memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 0.911820113658905) {
                                            memcpy(var63, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[36] <= 0.13934003189206123) {
                                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[40] <= 10.65833330154419) {
                                            memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[62] <= -3.11447811126709) {
                                    if (input[38] <= 1.8388888835906982) {
                                        memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[52] <= -259.0) {
                                        if (input[51] <= 104.6033821105957) {
                                            memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[40] <= 44.38092041015625) {
                            if (input[37] <= 1.0709768533706665) {
                                memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[1] <= 13.411653518676758) {
                                    if (input[25] <= 2.154669165611267) {
                                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[6] <= 22.67773723602295) {
                                            memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[52] <= -1198.5) {
                                        if (input[10] <= 344.2250061035156) {
                                            memcpy(var63, (double[]){0.0, 0.0, 0.8571428571428571, 0.14285714285714285}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[81] <= 0.6261666417121887) {
                                            memcpy(var63, (double[]){0.037037037037037035, 0.9259259259259259, 0.037037037037037035, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var63, (double[]){0.4285714285714286, 0.28571428571428575, 0.28571428571428575, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[20] <= 5.375610589981079) {
            if (input[12] <= -479.5) {
                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[68] <= 2.255389928817749) {
                    if (input[12] <= -153.9499969482422) {
                        if (input[6] <= 2.510972261428833) {
                            if (input[76] <= 554.2329254150391) {
                                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 421.0) {
                        if (input[76] <= 2282.7215576171875) {
                            if (input[22] <= -1.467391312122345) {
                                if (input[27] <= -5.214285612106323) {
                                    memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[78] <= 2312.0) {
                                        memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[3] <= 185.0) {
                                    memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[67] <= 0.34895434230566025) {
                                memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[68] <= 5.729605197906494) {
                            if (input[22] <= -1.6839291453361511) {
                                if (input[46] <= 70.32037544250488) {
                                    memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var63, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var63, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[6] <= 198.88338470458984) {
                                memcpy(var63, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var63, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var38, var63, 4, var37);
    double var64[4];
    if (input[7] <= -180.3000030517578) {
        if (input[32] <= 0.17628411203622818) {
            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[20] <= 2.764916181564331) {
                if (input[2] <= -217.5) {
                    memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[40] <= 39.54866409301758) {
                        if (input[10] <= -252.7249984741211) {
                            memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[52] <= -247.0) {
                                memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[18] <= 86.5) {
                            if (input[35] <= 1.1877917051315308) {
                                memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[2] <= -26.800000190734863) {
            if (input[22] <= 0.979707807302475) {
                if (input[38] <= 6.984305381774902) {
                    if (input[68] <= 2.9806017875671387) {
                        if (input[55] <= 0.462746724486351) {
                            if (input[38] <= 2.190565586090088) {
                                if (input[76] <= 439.35400390625) {
                                    if (input[65] <= 0.7615862786769867) {
                                        if (input[11] <= 3.7278308272361755) {
                                            memcpy(var64, (double[]){0.0, 0.2, 0.4, 0.4}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[66] <= 0.022496823221445084) {
                                            memcpy(var64, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.8333333333333334, 0.05555555555555555, 0.05555555555555555, 0.05555555555555555}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.273861289024353) {
                                        memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[57] <= -3.552758574485779) {
                                            memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[65] <= 1.0066566467285156) {
                                    if (input[7] <= -11.100000381469727) {
                                        if (input[3] <= -11.599999904632568) {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.3068181818181818, 0.3068181818181818, 0.26136363636363635, 0.125}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[10] <= 35.02499961853027) {
                                            memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[36] <= 0.837501734495163) {
                                        if (input[25] <= -2.363210439682007) {
                                            memcpy(var64, (double[]){0.21428571428571427, 0.2857142857142857, 0.42857142857142855, 0.07142857142857142}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.1111111111111111, 0.8222222222222222, 0.06666666666666667, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= -57.72500038146973) {
                                            memcpy(var64, (double[]){0.6666666666666666, 0.0, 0.2, 0.13333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.26666666666666666, 0.6666666666666666, 0.06666666666666667, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[66] <= 0.6922999024391174) {
                                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[17] <= 9.0) {
                            if (input[18] <= 7.5) {
                                memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[32] <= 0.2072356566786766) {
                                    if (input[40] <= 1.591989815235138) {
                                        memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[56] <= 1.2697087526321411) {
                                            memcpy(var64, (double[]){0.9375, 0.0, 0.0625, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[33] <= 2.892319917678833) {
                                        if (input[56] <= 0.9204270243644714) {
                                            memcpy(var64, (double[]){0.17647058823529413, 0.7647058823529411, 0.058823529411764705, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.26865671641791045, 0.208955223880597, 0.44776119402985076, 0.07462686567164178}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 1.3524643182754517) {
                                            memcpy(var64, (double[]){0.86, 0.0, 0.08, 0.06}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.18181818181818182, 0.22727272727272727, 0.5909090909090909, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[75] <= 1186.199951171875) {
                        if (input[68] <= 5.630690813064575) {
                            if (input[52] <= -1529.5) {
                                memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[52] <= -278.0) {
                                    memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[13] <= 523.5) {
                                memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[62] <= -1.3103138208389282) {
                    if (input[65] <= 2.243534564971924) {
                        if (input[70] <= -194.06392669677734) {
                            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[7] <= -77.25) {
                                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[7] <= -104.5) {
                            memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[36] <= 0.32770517468452454) {
                if (input[30] <= 0.772650957107544) {
                    memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[76] <= 1898.782958984375) {
                    if (input[78] <= 2039.0) {
                        memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[18] <= 6.5) {
                            if (input[20] <= 1.9440085887908936) {
                                memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[38] <= 4.174607515335083) {
                                if (input[31] <= 0.3006037622690201) {
                                    memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[71] <= 9.97563123703003) {
                                        if (input[61] <= 0.6514542400836945) {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[32] <= 0.4885532259941101) {
                                            memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[22] <= -5.60606050491333) {
                        memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[36] <= 2.1835931539535522) {
                            if (input[13] <= 414.1000061035156) {
                                if (input[10] <= 213.10000610351562) {
                                    if (input[7] <= -7.150000095367432) {
                                        if (input[57] <= -0.9602817110717297) {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 1.328383982181549) {
                                            memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[44] <= 0.875) {
                                    if (input[15] <= 37.04999923706055) {
                                        memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[7] <= 33.20000076293945) {
                                        if (input[76] <= 6276.19873046875) {
                                            memcpy(var64, (double[]){0.12121212121212122, 0.21212121212121213, 0.2727272727272727, 0.3939393939393939}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[31] <= 2.0273921489715576) {
                                            memcpy(var64, (double[]){0.0, 0.0, 0.11764705882352941, 0.8823529411764706}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var64, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[15] <= 39.10000038146973) {
                                if (input[56] <= 2.2333186268806458) {
                                    memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[66] <= 2.13529634475708) {
                                    if (input[71] <= 4.733404636383057) {
                                        memcpy(var64, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var64, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var64, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var37, var64, 4, var36);
    double var65[4];
    if (input[36] <= 2.364275574684143) {
        if (input[10] <= 387.29998779296875) {
            if (input[53] <= -188.0) {
                memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[25] <= 5.865936517715454) {
                    if (input[36] <= 0.4313513785600662) {
                        if (input[50] <= -189.0500030517578) {
                            memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[81] <= -0.5630702376365662) {
                                if (input[3] <= -23.100000381469727) {
                                    if (input[67] <= 0.5494174957275391) {
                                        if (input[43] <= 30.0) {
                                            memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 10.488113403320312) {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[36] <= 0.3332265317440033) {
                                            memcpy(var65, (double[]){0.0, 0.9523809523809523, 0.047619047619047616, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.3333333333333333, 0.5833333333333334, 0.08333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[60] <= -1.0913851857185364) {
                                    if (input[46] <= 32.271058082580566) {
                                        if (input[11] <= 142.4628143310547) {
                                            memcpy(var65, (double[]){0.1568627450980392, 0.5686274509803921, 0.19607843137254902, 0.0784313725490196}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.45833333333333337, 0.04166666666666667, 0.33333333333333337, 0.16666666666666669}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[41] <= 46.81984329223633) {
                                            memcpy(var65, (double[]){0.625, 0.125, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[65] <= 1.0669811964035034) {
                                        if (input[28] <= 2.8169565200805664) {
                                            memcpy(var65, (double[]){0.0967741935483871, 0.1935483870967742, 0.4838709677419355, 0.22580645161290322}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[72] <= -3.7290077209472656) {
                                            memcpy(var65, (double[]){0.23809523809523808, 0.047619047619047616, 0.47619047619047616, 0.23809523809523808}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[7] <= -178.5) {
                            if (input[2] <= -163.0) {
                                if (input[20] <= 1.6458744406700134) {
                                    if (input[16] <= 24.89995574951172) {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[45] <= 34.96474838256836) {
                                            memcpy(var65, (double[]){0.0, 0.8888888888888888, 0.1111111111111111, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= -171.2249984741211) {
                                        memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[27] <= -5.642857074737549) {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[62] <= -1.4676652550697327) {
                                if (input[32] <= 1.013416051864624) {
                                    if (input[21] <= 0.4260074496269226) {
                                        if (input[12] <= -35.79999923706055) {
                                            memcpy(var65, (double[]){0.7419354838709677, 0.0967741935483871, 0.12903225806451613, 0.03225806451612903}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[57] <= -2.3525038957595825) {
                                            memcpy(var65, (double[]){0.3175965665236052, 0.2274678111587983, 0.3390557939914164, 0.11587982832618027}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0847457627118644, 0.5254237288135594, 0.3220338983050847, 0.06779661016949153}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 71.5) {
                                        if (input[46] <= 2.9563037157058716) {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= 0.626152828335762) {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[68] <= 10.086025714874268) {
                                    if (input[38] <= 6.906564950942993) {
                                        if (input[80] <= -0.7129969000816345) {
                                            memcpy(var65, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.8301886792452831, 0.07547169811320754, 0.07547169811320754, 0.018867924528301886}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[55] <= 7.5478692054748535) {
                                        memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[76] <= 2381.8553466796875) {
                        if (input[58] <= 18.143013954162598) {
                            if (input[71] <= 76.88132095336914) {
                                if (input[32] <= 0.0874750167131424) {
                                    if (input[56] <= 3.1953142881393433) {
                                        memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[40] <= 46.16509246826172) {
                                        if (input[78] <= 4933.0) {
                                            memcpy(var65, (double[]){0.75, 0.0, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[61] <= 1.2799513339996338) {
                                    memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[65] <= 1.0832074880599976) {
                            if (input[56] <= 3.2921011447906494) {
                                if (input[1] <= 55.990007400512695) {
                                    memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[80] <= -0.57191601395607) {
                                        if (input[81] <= -0.5628213286399841) {
                                            memcpy(var65, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[31] <= 2.138424515724182) {
                                if (input[8] <= 228.5) {
                                    if (input[66] <= 0.8929444253444672) {
                                        memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[70] <= -1.3145039081573486) {
                                        memcpy(var65, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var65, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        memcpy(var65, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var36, var65, 4, var35);
    double var66[4];
    if (input[38] <= 7.920766592025757) {
        if (input[12] <= 203.0999984741211) {
            if (input[10] <= -343.1750030517578) {
                memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[11] <= 24.372971534729004) {
                    if (input[70] <= -165.29580688476562) {
                        if (input[1] <= 7.838104009628296) {
                            if (input[38] <= 3.2851898670196533) {
                                if (input[15] <= 3.25) {
                                    memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var66, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[42] <= 5.076923131942749) {
                                if (input[42] <= 2.1538647413253784) {
                                    if (input[32] <= 0.3991325944662094) {
                                        memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[72] <= -242.56488800048828) {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 20.83963966369629) {
                                    memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[7] <= -128.0) {
                            if (input[77] <= -86.0) {
                                if (input[75] <= 48.05000114440918) {
                                    if (input[78] <= 740.0) {
                                        memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[13] <= -225.0) {
                                if (input[8] <= -123.0) {
                                    memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[36] <= 0.175117589533329) {
                                    if (input[55] <= -0.8997190296649933) {
                                        if (input[62] <= -2.093481183052063) {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[57] <= -0.5942043662071228) {
                                            memcpy(var66, (double[]){0.0, 0.2727272727272727, 0.7272727272727273, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[68] <= 4.859853982925415) {
                                        memcpy(var66, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= 68.5) {
                        if (input[25] <= 5.820133924484253) {
                            if (input[36] <= 0.5180183053016663) {
                                if (input[67] <= 0.0049097901210188866) {
                                    if (input[31] <= 0.21190495789051056) {
                                        if (input[36] <= 0.14259011298418045) {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.2, 0.8, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= 7.510114431381226) {
                                            memcpy(var66, (double[]){0.10526315789473685, 0.15789473684210528, 0.6315789473684211, 0.10526315789473685}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[55] <= -2.8716206550598145) {
                                        if (input[0] <= -9.599999904632568) {
                                            memcpy(var66, (double[]){0.10526315789473684, 0.15789473684210525, 0.7368421052631579, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 15.80210542678833) {
                                            memcpy(var66, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.20967741935483872, 0.6129032258064516, 0.06451612903225806, 0.11290322580645161}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[13] <= 413.8500061035156) {
                                    if (input[0] <= 95.30000305175781) {
                                        if (input[78] <= 2242.0) {
                                            memcpy(var66, (double[]){0.17857142857142858, 0.42857142857142855, 0.17857142857142858, 0.21428571428571427}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.4716981132075472, 0.1509433962264151, 0.24528301886792453, 0.1320754716981132}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[10] <= 203.3000030517578) {
                                            memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[81] <= 0.8774935007095337) {
                                        if (input[16] <= 53.620540618896484) {
                                            memcpy(var66, (double[]){0.0, 0.4166666666666667, 0.31666666666666665, 0.26666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.4545454545454546, 0.21212121212121215, 0.18181818181818185, 0.15151515151515155}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[48] <= 100.75) {
                                memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[10] <= 326.9499969482422) {
                                    if (input[0] <= 57.72500038146973) {
                                        if (input[81] <= -0.6086661219596863) {
                                            memcpy(var66, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.0, 0.15384615384615385, 0.6923076923076923, 0.15384615384615385}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= -0.10443723201751709) {
                                            memcpy(var66, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var66, (double[]){0.03333333333333333, 0.0, 0.06666666666666667, 0.9}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[12] <= 45.0) {
                                        memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[10] <= 375.8999938964844) {
                            memcpy(var66, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[35] <= 1.4103577733039856) {
                                memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var66, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        memcpy(var66, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var35, var66, 4, var34);
    double var67[4];
    if (input[53] <= -132.5) {
        if (input[6] <= 38.74348068237305) {
            if (input[51] <= 8.40369725227356) {
                memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[68] <= 1.2068503499031067) {
                    if (input[11] <= 20.80128240585327) {
                        memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[7] <= -6.6000001430511475) {
                memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[11] <= 32.26840591430664) {
            if (input[60] <= -2.080849766731262) {
                memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[12] <= -13.799999713897705) {
                    if (input[27] <= 1.0853658318519592) {
                        if (input[32] <= 1.262886106967926) {
                            if (input[45] <= 80.48129272460938) {
                                if (input[42] <= 3.868329882621765) {
                                    if (input[27] <= 0.24849267303943634) {
                                        if (input[2] <= -101.0999984741211) {
                                            memcpy(var67, (double[]){0.08333333333333333, 0.2916666666666667, 0.375, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.09090909090909091, 0.09090909090909091, 0.8181818181818182, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[8] <= 49.900001525878906) {
                                            memcpy(var67, (double[]){0.1111111111111111, 0.0, 0.5555555555555556, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.9166666666666666, 0.0, 0.08333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[71] <= 1.1849004328250885) {
                                        memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[60] <= -1.6054484844207764) {
                                            memcpy(var67, (double[]){0.2, 0.4, 0.4, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 0.0, 0.9629629629629629, 0.037037037037037035}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[12] <= -222.0) {
                                    memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[16] <= 2.2798397541046143) {
                            if (input[22] <= 0.17045454680919647) {
                                memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[61] <= 1.0199856162071228) {
                                memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[48] <= 9.221969842910767) {
                                    memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[60] <= -1.1110670566558838) {
                        memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[40] <= 44.32271385192871) {
                if (input[38] <= 7.920766592025757) {
                    if (input[1] <= 12.074871063232422) {
                        if (input[38] <= 2.3760127425193787) {
                            memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[73] <= 43.48473358154297) {
                            if (input[75] <= 1968.1499633789062) {
                                if (input[68] <= 1.535087764263153) {
                                    if (input[67] <= -0.9184899926185608) {
                                        if (input[73] <= 11.862595081329346) {
                                            memcpy(var67, (double[]){0.0, 0.95, 0.05, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[75] <= 780.25) {
                                            memcpy(var67, (double[]){0.16666666666666666, 0.16666666666666666, 0.16666666666666666, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[27] <= -3.7793103456497192) {
                                        if (input[27] <= -4.258620738983154) {
                                            memcpy(var67, (double[]){0.2222222222222222, 0.2777777777777778, 0.4444444444444444, 0.05555555555555555}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.9130434782608696, 0.04347826086956522, 0.04347826086956522, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= -1.3188406229019165) {
                                            memcpy(var67, (double[]){0.01923076923076923, 0.6153846153846153, 0.26923076923076916, 0.09615384615384613}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.28783382789317513, 0.21958456973293772, 0.2967359050445104, 0.19584569732937687}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[23] <= 23.090909004211426) {
                    if (input[68] <= 4.35378623008728) {
                        if (input[28] <= 9.887499809265137) {
                            memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[78] <= 3442.0) {
                                memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[13] <= 461.0) {
                                    memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[52] <= -286.5) {
                                        memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 60.96137046813965) {
                                            memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[63] <= 17.794898986816406) {
                            if (input[45] <= 40.71735191345215) {
                                if (input[16] <= 26.16565704345703) {
                                    if (input[67] <= 1.3281580805778503) {
                                        memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[40] <= 65.77490043640137) {
                                            memcpy(var67, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[51] <= 345.1102294921875) {
                                        memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 34.61477756500244) {
                                            memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -1118.0) {
                                    memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[33] <= 5.935359954833984) {
                                        memcpy(var67, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[25] <= 2.8581244945526123) {
                                            memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var67, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[55] <= 3.522472381591797) {
                                memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[31] <= 0.7290835678577423) {
                        memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[65] <= 2.975033402442932) {
                            memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[26] <= 7.519852042198181) {
                                memcpy(var67, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var67, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var34, var67, 4, var33);
    double var68[4];
    if (input[40] <= 45.10218620300293) {
        if (input[7] <= -184.25) {
            if (input[57] <= -5.872575759887695) {
                if (input[8] <= -44.5) {
                    if (input[38] <= 3.654202938079834) {
                        memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[23] <= 5.546583712100983) {
                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[11] <= 123.6474380493164) {
                                memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[42] <= 0.5642389580607414) {
                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[61] <= 1.6322757601737976) {
                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[7] <= -231.25) {
                    memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[22] <= 0.9289915859699249) {
                if (input[38] <= 8.15700078010559) {
                    if (input[37] <= 0.3199141174554825) {
                        if (input[55] <= 1.3307969570159912) {
                            if (input[70] <= -4.371373891830444) {
                                memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= 146.5999984741211) {
                                if (input[52] <= -718.5) {
                                    memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[18] <= 174.5) {
                                        memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[47] <= -1.5591664910316467) {
                                    memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[5] <= -130.625) {
                            if (input[71] <= 6.058211803436279) {
                                if (input[20] <= 0.11652043461799622) {
                                    memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[41] <= 1.6287866234779358) {
                                if (input[23] <= 1.790669858455658) {
                                    if (input[77] <= 126.0) {
                                        if (input[5] <= -120.625) {
                                            memcpy(var68, (double[]){0.043478260869565216, 0.6956521739130435, 0.2608695652173913, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.53125, 0.1875, 0.21875, 0.0625}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 5.139860153198242) {
                                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[50] <= -151.0999984741211) {
                                            memcpy(var68, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[50] <= -96.375) {
                                    if (input[77] <= -6765.0) {
                                        if (input[17] <= 2.5) {
                                            memcpy(var68, (double[]){0.3076923076923077, 0.038461538461538464, 0.6538461538461539, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.8461538461538461, 0.15384615384615385, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[25] <= -0.33417297899723053) {
                                            memcpy(var68, (double[]){0.03571428571428571, 0.10714285714285714, 0.8571428571428571, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.2236842105263158, 0.5657894736842105, 0.21052631578947367, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[47] <= 1.25) {
                                        if (input[65] <= 0.8931027948856354) {
                                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 16.95372486114502) {
                                            memcpy(var68, (double[]){0.8181818181818182, 0.030303030303030304, 0.09090909090909091, 0.06060606060606061}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.3819444444444445, 0.20138888888888892, 0.27083333333333337, 0.14583333333333337}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[50] <= -218.6750030517578) {
                    if (input[48] <= 12.987195014953613) {
                        memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[73] <= 37.492366790771484) {
                        if (input[7] <= -101.5) {
                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[10] <= 200.0749969482422) {
                                if (input[2] <= -24.700000762939453) {
                                    if (input[72] <= -190.99236297607422) {
                                        memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[28] <= 1.8552825450897217) {
                                            memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[78] <= 10963.0) {
                                        if (input[76] <= 1490.1581420898438) {
                                            memcpy(var68, (double[]){0.0, 0.36363636363636365, 0.0, 0.6363636363636364}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.0, 0.7222222222222222, 0.2777777777777778, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[42] <= 2.9691731929779053) {
                                            memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[60] <= 7.434417486190796) {
                                    if (input[37] <= 1.2753815650939941) {
                                        if (input[16] <= 14.20637559890747) {
                                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[61] <= 3.1205748319625854) {
                                            memcpy(var68, (double[]){0.0, 0.11764705882352941, 0.0, 0.8823529411764706}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var68, (double[]){0.4444444444444444, 0.1111111111111111, 0.3333333333333333, 0.1111111111111111}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[75] <= 3.050000011920929) {
            if (input[41] <= 390.1535186767578) {
                if (input[63] <= -1.0503385066986084) {
                    if (input[52] <= -265.5) {
                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[70] <= 8.838931560516357) {
                        if (input[80] <= 0.871318906545639) {
                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= 159.0500030517578) {
                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[58] <= 17.75810432434082) {
                    memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[16] <= 39.9472713470459) {
                if (input[55] <= -3.32181978225708) {
                    memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[77] <= -1115.0) {
                        if (input[45] <= 31.65390968322754) {
                            if (input[12] <= -245.75) {
                                memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[22] <= -0.7386363744735718) {
                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[62] <= -2.700977921485901) {
                                memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[20] <= 2.6096174716949463) {
                                    if (input[61] <= 0.2592946067452431) {
                                        memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[28] <= 11.396667003631592) {
                    memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[70] <= -0.9003817141056061) {
                        if (input[26] <= 5.567188262939453) {
                            if (input[50] <= 88.9000015258789) {
                                memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var68, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[62] <= -3.768439531326294) {
                                memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[26] <= 6.489000082015991) {
                            memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[13] <= 414.0) {
                                memcpy(var68, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[1] <= 50.09949493408203) {
                                    memcpy(var68, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var68, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var33, var68, 4, var32);
    double var69[4];
    if (input[26] <= 6.837730169296265) {
        if (input[12] <= -270.9499969482422) {
            if (input[42] <= 0.23076923191547394) {
                if (input[26] <= 1.397054672241211) {
                    if (input[80] <= -0.5968124270439148) {
                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[72] <= -12.541984558105469) {
                    if (input[5] <= -76.625) {
                        if (input[3] <= -7.5) {
                            if (input[32] <= 0.30384616553783417) {
                                memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[41] <= 107.68828582763672) {
                                    if (input[6] <= 54.83350372314453) {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[27] <= -5.0625) {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 47.80714988708496) {
                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[32] <= 0.1758466511964798) {
                            if (input[2] <= -97.5) {
                                if (input[78] <= 1215.0) {
                                    if (input[72] <= -11.93511438369751) {
                                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[78] <= 2250.0) {
                                if (input[66] <= 0.9811305701732635) {
                                    if (input[40] <= 24.25247859954834) {
                                        if (input[22] <= -6.380645394325256) {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[67] <= 0.909388929605484) {
                                    if (input[36] <= 0.3769284784793854) {
                                        if (input[61] <= 1.0937110781669617) {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[68] <= 4.856979846954346) {
                                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[68] <= 5.14078950881958) {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[50] <= -287.67498779296875) {
                if (input[63] <= 0.586894154548645) {
                    memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= -34.20000076293945) {
                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 15.200000286102295) {
                    if (input[67] <= 0.5997129082679749) {
                        if (input[8] <= 50.900001525878906) {
                            if (input[62] <= -4.3013246059417725) {
                                if (input[53] <= 96.5) {
                                    if (input[46] <= 20.491239070892334) {
                                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[15] <= 11.25) {
                                    if (input[2] <= -105.0) {
                                        if (input[37] <= 0.7695260345935822) {
                                            memcpy(var69, (double[]){0.0, 0.0, 0.42857142857142855, 0.5714285714285714}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= -40.29999923706055) {
                                            memcpy(var69, (double[]){0.018518518518518517, 0.07407407407407407, 0.8703703703703703, 0.037037037037037035}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 25.95170783996582) {
                                        if (input[60] <= 1.157114326953888) {
                                            memcpy(var69, (double[]){0.0, 0.13333333333333333, 0.06666666666666667, 0.8}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= -243.0) {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.6, 0.4, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[21] <= 0.7984515726566315) {
                                if (input[20] <= 0.7927152216434479) {
                                    memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[16] <= 3.397486686706543) {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 0.8076807856559753) {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[50] <= 43.94999885559082) {
                            if (input[10] <= -223.6750030517578) {
                                if (input[32] <= 0.8478260934352875) {
                                    memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[38] <= 3.7048373222351074) {
                                    if (input[72] <= -7.713740587234497) {
                                        if (input[61] <= 0.901075541973114) {
                                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[12] <= -216.5) {
                                            memcpy(var69, (double[]){0.0, 0.75, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.5714285714285714, 0.0, 0.2857142857142857, 0.14285714285714285}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[42] <= 0.7300000190734863) {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[66] <= 0.7651554346084595) {
                        if (input[11] <= 153.8526153564453) {
                            if (input[2] <= -18.200000762939453) {
                                if (input[3] <= 17.600000381469727) {
                                    memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[77] <= -382.0) {
                                        if (input[60] <= 0.6564082652330399) {
                                            memcpy(var69, (double[]){0.0, 0.9772727272727273, 0.022727272727272728, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[57] <= -1.5125732421875) {
                                    if (input[51] <= 156.78103637695312) {
                                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[15] <= 61.150001525878906) {
                            if (input[27] <= -0.12650363892316818) {
                                if (input[52] <= -205.5) {
                                    if (input[5] <= 58.04999923706055) {
                                        if (input[17] <= 3.5) {
                                            memcpy(var69, (double[]){0.14285714285714288, 0.25000000000000006, 0.5714285714285715, 0.03571428571428572}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.3888888888888889, 0.1111111111111111, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 18.561068534851074) {
                                            memcpy(var69, (double[]){0.8666666666666667, 0.13333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.4, 0.2, 0.4}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[30] <= 1.5389682054519653) {
                                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[67] <= -2.116239309310913) {
                                            memcpy(var69, (double[]){0.125, 0.125, 0.75, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[10] <= 212.5) {
                                    if (input[76] <= 3192.335205078125) {
                                        if (input[48] <= 893.25) {
                                            memcpy(var69, (double[]){0.026315789473684213, 0.8421052631578948, 0.10526315789473685, 0.026315789473684213}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.0, 0.5, 0.5}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[66] <= 1.4108192324638367) {
                                            memcpy(var69, (double[]){0.0, 0.07142857142857142, 0.14285714285714285, 0.7857142857142857}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.10714285714285714, 0.2857142857142857, 0.6071428571428571, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[13] <= 416.3500061035156) {
                                        memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[78] <= 12803.0) {
                                            memcpy(var69, (double[]){0.13333333333333333, 0.35555555555555557, 0.08888888888888889, 0.4222222222222222}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var69, (double[]){0.0, 0.1111111111111111, 0.8888888888888888, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[78] <= 7417.0) {
            if (input[40] <= 41.993446350097656) {
                if (input[22] <= 0.8884057998657227) {
                    if (input[81] <= -0.5714780688285828) {
                        if (input[8] <= 175.0) {
                            if (input[42] <= 2.287500023841858) {
                                memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[11] <= 25.637758255004883) {
                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[75] <= 186.9499969482422) {
                                if (input[3] <= 102.5) {
                                    memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[45] <= 44.69493293762207) {
                        memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[46] <= 29.50102424621582) {
                    memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[27] <= 1.4642857313156128) {
                        if (input[44] <= 0.9749999940395355) {
                            memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[72] <= -12.290076732635498) {
                                memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[67] <= -0.4964875429868698) {
                if (input[70] <= -177.41851043701172) {
                    memcpy(var69, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[8] <= 295.5) {
                        if (input[29] <= 0.9249999821186066) {
                            if (input[75] <= 268.9499969482422) {
                                memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var69, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[47] <= -2.894798517227173) {
                            memcpy(var69, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var69, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var32, var69, 4, var31);
    double var70[4];
    if (input[20] <= 6.059296131134033) {
        if (input[17] <= 9.5) {
            if (input[50] <= -217.3000030517578) {
                if (input[60] <= -0.2862364500761032) {
                    if (input[36] <= 0.30671317875385284) {
                        if (input[66] <= 0.2942245826125145) {
                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[62] <= -1.598313570022583) {
                            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[65] <= 0.5471422076225281) {
                                memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[5] <= 58.14999961853027) {
                        memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[43] <= 6.833231687545776) {
                            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[8] <= -65.5) {
                    if (input[29] <= 0.949999988079071) {
                        if (input[63] <= -0.6997049450874329) {
                            if (input[73] <= 5.167938947677612) {
                                if (input[7] <= -119.0) {
                                    if (input[76] <= 981.0405883789062) {
                                        if (input[3] <= -111.5) {
                                            memcpy(var70, (double[]){0.25, 0.75, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -0.8513096868991852) {
                                        memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[23] <= -0.5277777910232544) {
                                if (input[23] <= -1.8529411554336548) {
                                    memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[55] <= -0.6005212068557739) {
                                    if (input[5] <= -127.04999923706055) {
                                        if (input[17] <= 2.5) {
                                            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= -106.5) {
                                            memcpy(var70, (double[]){0.8333333333333334, 0.16666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[56] <= 0.01984008215367794) {
                                        memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[36] <= 0.4971593916416168) {
                        if (input[42] <= 4.734607696533203) {
                            if (input[22] <= -0.6272434294223785) {
                                if (input[48] <= 57.25) {
                                    if (input[3] <= -76.5) {
                                        memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[42] <= 2.2715617418289185) {
                                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[66] <= 0.8079264461994171) {
                                        memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[67] <= -2.05360946059227) {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.125, 0.875, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[33] <= 1.1956720352172852) {
                                    if (input[48] <= 9.901829242706299) {
                                        memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[18] <= 23.5) {
                                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= 36.45000076293945) {
                                        if (input[17] <= 6.5) {
                                            memcpy(var70, (double[]){0.09782608695652174, 0.18478260869565216, 0.6847826086956522, 0.03260869565217391}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[30] <= 1.6719143986701965) {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.3333333333333333, 0.16666666666666666, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[35] <= 2.1639324426651) {
                                if (input[2] <= -173.5) {
                                    memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[57] <= -2.577996253967285) {
                                        if (input[75] <= 70.35000038146973) {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[62] <= -2.180541515350342) {
                                    memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[32] <= 0.15221543610095978) {
                                        memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[66] <= 0.20906874537467957) {
                                            memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 65.84868621826172) {
                            if (input[52] <= -1216.0) {
                                if (input[63] <= 26.347697257995605) {
                                    memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[78] <= 7481.0) {
                                        memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[22] <= -4.059999942779541) {
                                    if (input[23] <= 9.599999904632568) {
                                        if (input[45] <= 15.759273529052734) {
                                            memcpy(var70, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[68] <= 1.868115246295929) {
                                        if (input[72] <= -189.9809112548828) {
                                            memcpy(var70, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.4, 0.5666666666666667, 0.03333333333333333}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 4206.92919921875) {
                                            memcpy(var70, (double[]){0.6666666666666667, 0.12380952380952383, 0.17142857142857146, 0.038095238095238106}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 0.42857142857142855, 0.5714285714285714}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[70] <= 11.870801448822021) {
                                if (input[42] <= -3.778012752532959) {
                                    memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[77] <= -2581.0) {
                                        if (input[16] <= 7.987847566604614) {
                                            memcpy(var70, (double[]){0.0, 0.1111111111111111, 0.0, 0.8888888888888888}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.40123456790123463, 0.1851851851851852, 0.2469135802469136, 0.16666666666666669}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[47] <= 5.585477590560913) {
                                            memcpy(var70, (double[]){0.08695652173913043, 0.5869565217391305, 0.2391304347826087, 0.08695652173913043}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[8] <= 184.3499984741211) {
                                    memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        if (input[36] <= 0.6274681985378265) {
            if (input[29] <= 0.8250000178813934) {
                memcpy(var70, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var70, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var70, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var31, var70, 4, var30);
    double var71[4];
    if (input[37] <= 2.3398711681365967) {
        if (input[73] <= 13.824427127838135) {
            if (input[13] <= 581.5) {
                if (input[22] <= 1.2911896705627441) {
                    if (input[7] <= -175.25) {
                        if (input[67] <= 1.1728410720825195) {
                            if (input[45] <= 89.04675674438477) {
                                if (input[6] <= 86.46293640136719) {
                                    if (input[8] <= -57.5) {
                                        if (input[75] <= -331.74999237060547) {
                                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 62.96180725097656) {
                                            memcpy(var71, (double[]){0.25, 0.0625, 0.0625, 0.625}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.09090909090909091, 0.18181818181818182, 0.7272727272727273, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[35] <= 1.970892071723938) {
                                if (input[78] <= 3005.0) {
                                    if (input[7] <= -234.5) {
                                        if (input[73] <= 4.73664116859436) {
                                            memcpy(var71, (double[]){0.0, 0.0, 0.5, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 21.94348430633545) {
                                            memcpy(var71, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[43] <= 8.568604707717896) {
                                    if (input[27] <= -1.8885394930839539) {
                                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[42] <= 5.625) {
                                        if (input[13] <= -45.0) {
                                            memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[36] <= 3.728298932313919) {
                                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 48.70000076293945) {
                            if (input[12] <= -65.30000305175781) {
                                if (input[7] <= -38.099998474121094) {
                                    if (input[62] <= -3.7250895500183105) {
                                        if (input[45] <= 26.53081703186035) {
                                            memcpy(var71, (double[]){0.3703703703703704, 0.2592592592592593, 0.3703703703703704, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.9444444444444444, 0.0, 0.05555555555555555, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[47] <= 3.605681896209717) {
                                            memcpy(var71, (double[]){0.13157894736842107, 0.368421052631579, 0.26315789473684215, 0.2368421052631579}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.3333333333333333, 0.125, 0.4027777777777778, 0.1388888888888889}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= 1.174418568611145) {
                                    if (input[66] <= 0.8847122192382812) {
                                        if (input[33] <= 2.0420920848846436) {
                                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.4, 0.0, 0.6, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[77] <= -3722.0) {
                                            memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[3] <= 13.799999713897705) {
                                memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[45] <= 72.6633186340332) {
                                    if (input[61] <= 1.1880468130111694) {
                                        if (input[40] <= 6.195253849029541) {
                                            memcpy(var71, (double[]){0.09433962264150944, 0.6792452830188679, 0.20754716981132076, 0.018867924528301886}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 0.1, 0.2, 0.7}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[67] <= -2.897494673728943) {
                                            memcpy(var71, (double[]){0.17391304347826086, 0.6956521739130435, 0.043478260869565216, 0.08695652173913043}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.5118110236220472, 0.16535433070866143, 0.2677165354330709, 0.05511811023622047}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= 147.6500015258789) {
                                        if (input[78] <= 5833.0) {
                                            memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[72] <= -181.7137451171875) {
                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[78] <= 9445.0) {
                            if (input[67] <= -0.3415297716856003) {
                                if (input[32] <= 1.4391631484031677) {
                                    if (input[15] <= 42.92499923706055) {
                                        if (input[36] <= 2.2624868154525757) {
                                            memcpy(var71, (double[]){0.15789473684210525, 0.8421052631578947, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[53] <= 984.5) {
                                    memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[26] <= 5.578433036804199) {
                                        if (input[75] <= -655.7499847412109) {
                                            memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[67] <= -2.472977340221405) {
                                memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[28] <= 17.971590995788574) {
                if (input[78] <= 12803.0) {
                    if (input[57] <= -2.223159372806549) {
                        if (input[3] <= 112.5) {
                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[75] <= -488.34999084472656) {
                                if (input[26] <= 1.3670213520526886) {
                                    memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[46] <= 135.4039454460144) {
                                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[37] <= -1.3051444292068481) {
                                    if (input[6] <= 95.37753295898438) {
                                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[10] <= 208.0250015258789) {
                            if (input[72] <= 0.057251930236816406) {
                                if (input[53] <= 648.5) {
                                    memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[62] <= -1.2776164952665567) {
                                memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[71] <= 15.07711124420166) {
                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[71] <= 13.724394798278809) {
                    if (input[48] <= 156.1904754638672) {
                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[28] <= 29.777777671813965) {
                            if (input[16] <= 74.43749237060547) {
                                if (input[78] <= 9437.0) {
                                    if (input[47] <= 0.9053091406822205) {
                                        memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[58] <= 25.040369033813477) {
                                    memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 182.5) {
                                memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[32] <= 0.026234567165374756) {
                        memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[38] <= 8.130102157592773) {
            if (input[2] <= -2.199999898672104) {
                if (input[16] <= 2.2100226879119873) {
                    if (input[3] <= -185.5) {
                        memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var71, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 1.9000000357627869) {
                        memcpy(var71, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[73] <= -76.54961657524109) {
                            memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var71, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var71, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var30, var71, 4, var29);
    double var72[4];
    if (input[35] <= 4.762754440307617) {
        if (input[38] <= 3.6036415100097656) {
            if (input[42] <= -4.735499382019043) {
                if (input[18] <= 174.5) {
                    memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[31] <= 0.804263174533844) {
                    if (input[27] <= -1.631033182144165) {
                        if (input[42] <= 0.49714286625385284) {
                            if (input[36] <= 0.5946212857961655) {
                                memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[18] <= 85.5) {
                                if (input[58] <= 0.2622532993555069) {
                                    if (input[73] <= 11.122137546539307) {
                                        if (input[30] <= 0.30656634271144867) {
                                            memcpy(var72, (double[]){0.75, 0.0, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.1111111111111111, 0.7962962962962963, 0.05555555555555555, 0.037037037037037035}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 11.699999809265137) {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[46] <= 4.609074831008911) {
                                        if (input[66] <= 0.8466740548610687) {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 65.84796142578125) {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[61] <= 1.4979368448257446) {
                                    memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[31] <= 0.30472733080387115) {
                            if (input[3] <= -121.5) {
                                memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[60] <= 1.0832145512104034) {
                                    if (input[45] <= 46.85240936279297) {
                                        if (input[41] <= 1.6287866234779358) {
                                            memcpy(var72, (double[]){0.15789473684210525, 0.3333333333333333, 0.3508771929824561, 0.15789473684210525}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0625, 0.0, 0.8125, 0.125}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[62] <= -1.685964584350586) {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[53] <= 73.5) {
                                        if (input[28] <= 3.0931352376937866) {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 9.904579877853394) {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[77] <= -1494.0) {
                                if (input[81] <= -0.6129347085952759) {
                                    if (input[5] <= 61.02499771118164) {
                                        if (input[50] <= -57.04999923706055) {
                                            memcpy(var72, (double[]){0.2857142857142857, 0.0, 0.7142857142857143, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.9, 0.0, 0.1, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[20] <= 5.882115125656128) {
                                        if (input[27] <= -0.05968436226248741) {
                                            memcpy(var72, (double[]){0.06060606060606061, 0.18181818181818182, 0.7575757575757576, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.02631578947368421, 0.631578947368421, 0.2894736842105263, 0.05263157894736842}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[78] <= 2858.0) {
                                    if (input[45] <= 17.803640365600586) {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[72] <= -14.851145267486572) {
                        if (input[36] <= 0.5994584858417511) {
                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[70] <= -0.3358778804540634) {
                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[66] <= 1.4806432127952576) {
                                if (input[63] <= 3.5931118726730347) {
                                    memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[76] <= 2714.306640625) {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[52] <= -178.0) {
                                    memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[8] <= -63.75) {
                memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[8] <= -54.25) {
                    if (input[12] <= -268.9499969482422) {
                        if (input[12] <= -486.5) {
                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[60] <= -1.6756532192230225) {
                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[2] <= -68.5999984741211) {
                        if (input[71] <= 4.900282144546509) {
                            if (input[41] <= 4.489433526992798) {
                                if (input[16] <= 8.451486349105835) {
                                    if (input[3] <= -109.0) {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= -94.5) {
                                        memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[77] <= -8439.0) {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -94.0) {
                                    if (input[77] <= -5623.0) {
                                        if (input[21] <= 4.5889892578125) {
                                            memcpy(var72, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= 7.253053426742554) {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[66] <= 0.9470778107643127) {
                                if (input[76] <= 837.3357543945312) {
                                    if (input[5] <= -151.75) {
                                        memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[66] <= 0.23353413492441177) {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[60] <= -1.0435150861740112) {
                                        if (input[23] <= 1.8066666722297668) {
                                            memcpy(var72, (double[]){0.6, 0.4, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.04, 0.04, 0.92, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[72] <= -204.28244018554688) {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[3] <= 155.0) {
                                    if (input[67] <= -0.4964875429868698) {
                                        memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[31] <= 0.7347752451896667) {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[68] <= 5.646497964859009) {
                                        if (input[12] <= -184.0) {
                                            memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.6, 0.0, 0.4}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.8582056760787964) {
                                            memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.7692307692307693, 0.07692307692307693, 0.15384615384615385, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[23] <= 22.5) {
                            if (input[73] <= -152.0457992553711) {
                                if (input[77] <= -2615.0) {
                                    if (input[8] <= 50.400001525878906) {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[3] <= 34.299999713897705) {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[16] <= 8.159446477890015) {
                                        if (input[57] <= -1.5283750295639038) {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.25, 0.0, 0.0, 0.75}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[28] <= 3.377673864364624) {
                                    memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[5] <= 113.5250015258789) {
                                        if (input[3] <= 202.5) {
                                            memcpy(var72, (double[]){0.16666666666666666, 0.2962962962962963, 0.42592592592592593, 0.1111111111111111}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0, 0.7037037037037037, 0.037037037037037035, 0.25925925925925924}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[5] <= 166.875) {
                                            memcpy(var72, (double[]){0.7045454545454546, 0.045454545454545456, 0.022727272727272728, 0.22727272727272727}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.0625, 0.375, 0.5625, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[25] <= 5.369637727737427) {
                                if (input[8] <= 183.5) {
                                    memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[2] <= -65.20000076293945) {
                                        memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[31] <= 2.2919852137565613) {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[48] <= 359.0) {
                                    if (input[51] <= 415.2060241699219) {
                                        memcpy(var72, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 135.0) {
                                        memcpy(var72, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[75] <= 1077.1499633789062) {
                                            memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var72, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        memcpy(var72, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var29, var72, 4, var28);
    double var73[4];
    if (input[20] <= 5.940221786499023) {
        if (input[13] <= -224.5) {
            if (input[0] <= -192.4250030517578) {
                memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[30] <= 0.7618507742881775) {
                    if (input[55] <= -1.9016814827919006) {
                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[35] <= 0.8777807652950287) {
                        if (input[37] <= 0.7870344817638397) {
                            if (input[13] <= -234.0) {
                                memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[30] <= 1.298687756061554) {
                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[11] <= 294.21624755859375) {
                if (input[2] <= -26.600000381469727) {
                    if (input[8] <= 54.5) {
                        if (input[13] <= -56.70000076293945) {
                            if (input[25] <= -1.0137682557106018) {
                                if (input[31] <= 0.01836241874843836) {
                                    memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[5] <= -141.625) {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[32] <= 0.016910639125853777) {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.6111111111111112, 0.1111111111111111, 0.16666666666666666, 0.1111111111111111}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[31] <= 0.5267351865768433) {
                                    if (input[75] <= 200.6500015258789) {
                                        if (input[67] <= -0.3990102559328079) {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.6, 0.4}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.20512820512820512, 0.6923076923076923, 0.05128205128205128, 0.05128205128205128}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[31] <= 0.2479843571782112) {
                                            memcpy(var73, (double[]){0.041666666666666664, 0.125, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.08333333333333333, 0.6666666666666666, 0.16666666666666666, 0.08333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[57] <= -6.857874631881714) {
                                        if (input[12] <= -442.5) {
                                            memcpy(var73, (double[]){0.9166666666666666, 0.0, 0.08333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[68] <= 2.401007056236267) {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.10526315789473684, 0.05263157894736842, 0.6842105263157895, 0.15789473684210525}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[68] <= 1.8029707074165344) {
                                if (input[43] <= 9.567500114440918) {
                                    memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[41] <= 2.3729909658432007) {
                                        if (input[62] <= -1.988342523574829) {
                                            memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[25] <= -0.9615583121776581) {
                                    if (input[58] <= 0.2357829511165619) {
                                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[78] <= 1544.0) {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[42] <= 4.794871807098389) {
                                        if (input[30] <= 1.266323745250702) {
                                            memcpy(var73, (double[]){0.04166666666666667, 0.6666666666666667, 0.22916666666666669, 0.06250000000000001}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.07142857142857142, 0.14285714285714285, 0.7857142857142857, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[26] <= 1.0980300903320312) {
                            if (input[72] <= -18.030534744262695) {
                                if (input[72] <= -201.22901153564453) {
                                    if (input[12] <= -4.299999237060547) {
                                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 0.8828369975090027) {
                                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[38] <= 3.832421660423279) {
                                            memcpy(var73, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[8] <= 140.5) {
                                    if (input[70] <= -0.8811068832874298) {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[43] <= 10.406593322753906) {
                                            memcpy(var73, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[58] <= 2.168565094470978) {
                                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[51] <= 92.61946105957031) {
                                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[8] <= 78.0) {
                                if (input[78] <= 3106.0) {
                                    memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[11] <= 24.638628005981445) {
                                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[3] <= 19.299999237060547) {
                                    if (input[5] <= 52.45000076293945) {
                                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[42] <= 0.3452381044626236) {
                                        if (input[7] <= -179.5) {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[28] <= 3.3795454502105713) {
                                            memcpy(var73, (double[]){0.48484848484848486, 0.48484848484848486, 0.0, 0.030303030303030304}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.25925925925925924, 0.2716049382716049, 0.3148148148148148, 0.15432098765432098}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[73] <= 1.3549618422985077) {
                        if (input[45] <= 10.38918161392212) {
                            if (input[66] <= 0.5153093934059143) {
                                memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[57] <= -1.5803536176681519) {
                                    memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 179.0) {
                                if (input[0] <= 1.4500000476837158) {
                                    if (input[67] <= -0.3307522018440068) {
                                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[78] <= 2313.0) {
                                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[67] <= -2.8982131481170654) {
                            if (input[26] <= 4.024462580680847) {
                                if (input[73] <= 35.564884185791016) {
                                    if (input[26] <= 2.9091243743896484) {
                                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[67] <= -1.268402338027954) {
                                if (input[61] <= 2.8534120321273804) {
                                    if (input[71] <= 6.597682476043701) {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[37] <= -1.0696191787719727) {
                                            memcpy(var73, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[36] <= 2.111529231071472) {
                                        if (input[46] <= 11.718099117279053) {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.06666666666666667, 0.0, 0.9333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 4.449886322021484) {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[48] <= 82.18055725097656) {
                                    if (input[31] <= 1.6435438394546509) {
                                        if (input[52] <= -331.5) {
                                            memcpy(var73, (double[]){0.8, 0.0, 0.2, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[55] <= 7.052130699157715) {
                                        if (input[1] <= 79.40353393554688) {
                                            memcpy(var73, (double[]){0.8571428571428571, 0.047619047619047616, 0.047619047619047616, 0.047619047619047616}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[31] <= 2.2364001274108887) {
                                            memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[50] <= -15.050000190734863) {
                    if (input[22] <= 0.8554216623306274) {
                        memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[66] <= 1.9234776496887207) {
                        memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[13] <= 308.1000061035156) {
            if (input[13] <= 35.55000305175781) {
                memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[43] <= 152.66666412353516) {
                    memcpy(var73, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var73, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            memcpy(var73, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var28, var73, 4, var27);
    double var74[4];
    if (input[72] <= 4.996183156967163) {
        if (input[38] <= 8.15700078010559) {
            if (input[16] <= 76.78444290161133) {
                if (input[66] <= 2.2037999629974365) {
                    if (input[65] <= 3.005060911178589) {
                        if (input[20] <= 1.38428395986557) {
                            if (input[27] <= -1.341269850730896) {
                                if (input[65] <= 0.9748627841472626) {
                                    if (input[42] <= 0.2358175665140152) {
                                        memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[32] <= 0.3269190490245819) {
                                            memcpy(var74, (double[]){0.0, 0.08, 0.88, 0.04}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.0, 0.25, 0.75}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[71] <= 6.998286247253418) {
                                        if (input[27] <= -1.5980392098426819) {
                                            memcpy(var74, (double[]){0.23484848484848486, 0.49242424242424243, 0.1893939393939394, 0.08333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[67] <= 0.4750521183013916) {
                                            memcpy(var74, (double[]){0.16666666666666666, 0.0, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.7222222222222223, 0.11111111111111112, 0.16666666666666669, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[23] <= 1.8983268737792969) {
                                    if (input[72] <= -188.93893432617188) {
                                        if (input[52] <= -184.0) {
                                            memcpy(var74, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= 53.94999885559082) {
                                            memcpy(var74, (double[]){0.4225352112676057, 0.08450704225352114, 0.3943661971830986, 0.09859154929577466}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.4444444444444444, 0.0, 0.5555555555555556}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[47] <= 3.4268476963043213) {
                                        if (input[77] <= -7374.0) {
                                            memcpy(var74, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[67] <= -0.2533930614590645) {
                                            memcpy(var74, (double[]){0.0, 0.15789473684210525, 0.8421052631578947, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.125, 0.75, 0.0, 0.125}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[30] <= 2.9240705966949463) {
                                if (input[40] <= 33.22404861450195) {
                                    if (input[81] <= -0.5548567175865173) {
                                        if (input[16] <= 25.078625679016113) {
                                            memcpy(var74, (double[]){0.12727272727272726, 0.8, 0.03636363636363636, 0.03636363636363636}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[37] <= 1.6624765396118164) {
                                            memcpy(var74, (double[]){0.06666666666666667, 0.44, 0.30666666666666664, 0.18666666666666668}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.02857142857142857, 0.3142857142857143, 0.02857142857142857, 0.6285714285714286}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[25] <= 6.507564067840576) {
                                        if (input[71] <= 5.0820934772491455) {
                                            memcpy(var74, (double[]){0.5862068965517241, 0.3103448275862069, 0.10344827586206896, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.16, 0.1, 0.66, 0.08}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 12.400763511657715) {
                                            memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.6666666666666666, 0.0, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[16] <= 37.76108932495117) {
                                    if (input[71] <= 3.682599663734436) {
                                        memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[13] <= 391.0500030517578) {
                                        memcpy(var74, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[51] <= 356.3019104003906) {
                                            memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[81] <= -0.5855594575405121) {
                            memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[21] <= 0.666438490152359) {
                                if (input[45] <= 4.588507890701294) {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[50] <= 37.59999990463257) {
                                        memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[10] <= 301.59999084472656) {
                                    if (input[32] <= 0.2308546081185341) {
                                        memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[6] <= 163.94634246826172) {
                                            memcpy(var74, (double[]){0.9215686274509804, 0.0, 0.03921568627450981, 0.03921568627450981}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[75] <= 400.6999969482422) {
                        if (input[71] <= 7.809178590774536) {
                            if (input[78] <= 7085.0) {
                                if (input[48] <= 138.4272689819336) {
                                    if (input[22] <= -0.7075216341763735) {
                                        memcpy(var74, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[33] <= 2.4456722736358643) {
                                    memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[11] <= 171.19776916503906) {
                                if (input[25] <= 7.077812910079956) {
                                    memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[10] <= 160.67499923706055) {
                                    memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[40] <= 41.114681243896484) {
                            if (input[21] <= 4.4763898849487305) {
                                if (input[67] <= -7.699748516082764) {
                                    memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[53] <= 336.0) {
                                    memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var74, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        memcpy(var74, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var27, var74, 4, var26);
    double var75[4];
    if (input[35] <= 4.789341926574707) {
        if (input[28] <= 31.342857360839844) {
            if (input[57] <= 0.24668969213962555) {
                if (input[5] <= 112.7750015258789) {
                    if (input[31] <= 0.2468656376004219) {
                        if (input[70] <= 4.562213897705078) {
                            if (input[12] <= -40.29999923706055) {
                                if (input[35] <= 1.9226693511009216) {
                                    if (input[43] <= 53.875) {
                                        if (input[57] <= -0.8121511340141296) {
                                            memcpy(var75, (double[]){0.2571428571428571, 0.6, 0.05714285714285714, 0.08571428571428572}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.07142857142857142, 0.5714285714285714, 0.35714285714285715}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[75] <= 202.1999969482422) {
                                            memcpy(var75, (double[]){0.23076923076923078, 0.0, 0.0, 0.7692307692307693}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[36] <= 0.6266329884529114) {
                                        if (input[6] <= 30.835387229919434) {
                                            memcpy(var75, (double[]){0.17241379310344832, 0.03448275862068966, 0.7586206896551725, 0.03448275862068966}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.6666666666666666, 0.0, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[67] <= 0.35075059812515974) {
                                            memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[72] <= -181.3396987915039) {
                                    memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[3] <= 25.299999237060547) {
                                        memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[42] <= 0.24862638115882874) {
                            if (input[30] <= 1.2047326564788818) {
                                if (input[27] <= -6.5) {
                                    memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[61] <= 3.126221537590027) {
                                    memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[50] <= 62.974998474121094) {
                                if (input[42] <= 3.458042025566101) {
                                    if (input[61] <= 0.8504153788089752) {
                                        if (input[48] <= 15.382444858551025) {
                                            memcpy(var75, (double[]){0.5714285714285714, 0.4, 0.0, 0.02857142857142857}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.7368421052631579, 0.18421052631578946, 0.07894736842105263}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[38] <= 6.983328819274902) {
                                            memcpy(var75, (double[]){0.3267716535433071, 0.21259842519685043, 0.3818897637795276, 0.07874015748031497}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.7000000000000001, 0.20000000000000004, 0.10000000000000002}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[57] <= -6.079960346221924) {
                                        memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[38] <= 2.4294872283935547) {
                                            memcpy(var75, (double[]){0.08333333333333333, 0.8333333333333334, 0.08333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.17647058823529413, 0.10588235294117647, 0.6470588235294118, 0.07058823529411765}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[70] <= 1.9007633924484253) {
                                    memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[8] <= 266.0) {
                        if (input[2] <= 43.5) {
                            if (input[17] <= 4.5) {
                                if (input[11] <= 166.84255981445312) {
                                    if (input[15] <= 20.449999809265137) {
                                        if (input[47] <= 4.918004512786865) {
                                            memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 93.35640716552734) {
                                            memcpy(var75, (double[]){0.5, 0.0, 0.25, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[48] <= 104.76922988891602) {
                                        memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[37] <= 1.4270884990692139) {
                                    memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[21] <= 3.573738217353821) {
                                if (input[60] <= 2.1407398506999016) {
                                    memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[77] <= -7053.0) {
                                        memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[67] <= -3.1257399320602417) {
                            if (input[10] <= 408.375) {
                                memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[76] <= 6036.689453125) {
                                memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[15] <= 53.57500076293945) {
                    memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[81] <= -0.5726424157619476) {
                if (input[3] <= 153.0) {
                    memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[10] <= 123.5) {
                        memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[41] <= 49.543174743652344) {
                    if (input[78] <= 2618.0) {
                        memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[42] <= -2.0066175907850266) {
                            memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[41] <= 37.057003021240234) {
                                memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[78] <= 8029.0) {
                        if (input[45] <= 22.543946266174316) {
                            memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[56] <= 5.008103132247925) {
                                memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var75, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var75, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[16] <= 1.9903899431228638) {
            memcpy(var75, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var75, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var26, var75, 4, var25);
    double var76[4];
    if (input[40] <= 47.98474884033203) {
        if (input[35] <= 3.0723865032196045) {
            if (input[3] <= 286.5) {
                if (input[36] <= 0.34741371870040894) {
                    if (input[48] <= 56.5) {
                        if (input[60] <= -0.6424764394760132) {
                            if (input[47] <= 3.086680769920349) {
                                if (input[70] <= 0.8291984796524048) {
                                    memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[66] <= 0.6729030013084412) {
                                        if (input[68] <= 1.5775993466377258) {
                                            memcpy(var76, (double[]){0.1, 0.1, 0.2, 0.6}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[51] <= 98.24419021606445) {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -295.5) {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[68] <= 1.701781153678894) {
                                        if (input[2] <= -70.9000015258789) {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[72] <= -199.91603088378906) {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[80] <= -0.4262465089559555) {
                                if (input[30] <= 0.8799878358840942) {
                                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[53] <= -28.0) {
                                        memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[60] <= -0.33027319610118866) {
                                    if (input[10] <= 13.199999988079071) {
                                        if (input[77] <= 105.0) {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.125, 0.875}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[66] <= 1.4728751182556152) {
                                        if (input[21] <= 1.025344043970108) {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.9090909090909091, 0.09090909090909091}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.6653677225112915) {
                                            memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[26] <= 1.891731321811676) {
                            if (input[52] <= -18.0) {
                                if (input[63] <= -0.5887011736631393) {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[15] <= 1.6500000357627869) {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[67] <= 0.5452261958271265) {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[80] <= 0.4617920219898224) {
                                memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[11] <= 32.402021408081055) {
                                    if (input[58] <= 0.12058654567226768) {
                                        memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[65] <= 0.9213041365146637) {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.5, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[46] <= 24.294591903686523) {
                                        if (input[37] <= 1.2624531388282776) {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 15.014339447021484) {
                                            memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[48] <= 423.875) {
                        if (input[11] <= 167.55236053466797) {
                            if (input[8] <= -66.0) {
                                memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[65] <= 0.0840053092688322) {
                                    if (input[1] <= 63.84983444213867) {
                                        if (input[56] <= 2.2932225465774536) {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= -5.9375) {
                                        if (input[63] <= -1.0336984694004059) {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= 0.6292929351329803) {
                                            memcpy(var76, (double[]){0.4550561797752809, 0.21348314606741572, 0.2752808988764045, 0.056179775280898875}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.1694915254237288, 0.0847457627118644, 0.5084745762711864, 0.23728813559322035}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[58] <= 3.2276426553726196) {
                                if (input[15] <= 19.774999618530273) {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= 0.7992423996329308) {
                                    if (input[45] <= 5.523898363113403) {
                                        memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[60] <= 2.212488532066345) {
                                            memcpy(var76, (double[]){0.0, 0.07692307692307693, 0.9230769230769231, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[8] <= 178.0) {
                            if (input[7] <= -174.10000610351562) {
                                if (input[11] <= 26.72666358947754) {
                                    memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[17] <= 0.5) {
                                memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[53] <= 798.0) {
                                    memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[41] <= 25.145243644714355) {
                if (input[20] <= 0.707999974489212) {
                    if (input[31] <= 0.2454373762011528) {
                        if (input[40] <= 9.430952548980713) {
                            if (input[11] <= 4.464076578617096) {
                                if (input[58] <= -1.2475656270980835) {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[61] <= 1.0998194813728333) {
                            if (input[38] <= 4.53125) {
                                memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[7] <= -165.5) {
                                    if (input[40] <= 1.3138116002082825) {
                                        memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[42] <= 5.061781644821167) {
                        if (input[77] <= -766.0) {
                            if (input[0] <= -12.324999809265137) {
                                if (input[5] <= -51.80000114440918) {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[52] <= -340.5) {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[30] <= 0.6364601254463196) {
                                    if (input[2] <= -42.20000076293945) {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[70] <= 1.7515267729759216) {
                    if (input[80] <= -0.5454544723033905) {
                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[46] <= 34.66779899597168) {
                        memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[58] <= 26.746352195739746) {
                            if (input[50] <= 17.375000476837158) {
                                if (input[40] <= 33.108659744262695) {
                                    if (input[62] <= -5.5187225341796875) {
                                        if (input[12] <= -91.9000015258789) {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[78] <= 5996.0) {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[43] <= 163.75555419921875) {
                                        memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[11] <= 232.8890838623047) {
                                            memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[68] <= 4.718068838119507) {
            if (input[67] <= -3.1496901512145996) {
                memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[33] <= 1.2175925374031067) {
                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[31] <= 2.470646858215332) {
                        if (input[13] <= 461.0) {
                            if (input[56] <= 0.23501656204462051) {
                                if (input[52] <= -123.0) {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[77] <= -763.0) {
                                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[65] <= 0.41505688428878784) {
                                        memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[23] <= 16.499999523162842) {
                                if (input[15] <= 36.64999961853027) {
                                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[53] <= 1062.5) {
                if (input[73] <= 8.270992279052734) {
                    if (input[51] <= 390.89808654785156) {
                        if (input[10] <= -313.3249969482422) {
                            memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[40] <= 50.967721939086914) {
                                memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 76.82865905761719) {
                        memcpy(var76, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[30] <= 3.246448516845703) {
                            memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[41] <= 651.4540405273438) {
                                memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var76, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[38] <= 6.3068695068359375) {
                    memcpy(var76, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var76, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var25, var76, 4, var24);
    double var77[4];
    if (input[0] <= -192.8499984741211) {
        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    } else {
        if (input[42] <= 0.40666666626930237) {
            if (input[38] <= 1.9599128365516663) {
                if (input[50] <= 25.024999618530273) {
                    if (input[76] <= 33.289955139160156) {
                        if (input[36] <= 0.03990810178220272) {
                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[76] <= 28.7064266204834) {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[70] <= 0.8496183156967163) {
                            if (input[8] <= -128.5) {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[3] <= -101.5) {
                        if (input[55] <= -0.7367978096008301) {
                            if (input[53] <= 51.5) {
                                memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[62] <= -0.9198072552680969) {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[21] <= 4.1185808181762695) {
                            if (input[52] <= 46.5) {
                                memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[56] <= 4.033553838729858) {
                                memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[16] <= 54.28695869445801) {
                    if (input[12] <= -284.6999969482422) {
                        if (input[40] <= 0.20119376480579376) {
                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[2] <= -109.70000076293945) {
                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[75] <= 760.3999938964844) {
                                if (input[72] <= -13.232824802398682) {
                                    if (input[37] <= 0.6509383916854858) {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 53.425065994262695) {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[23] <= 14.734375) {
                                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[67] <= -7.417614698410034) {
                                    memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[17] <= 5.5) {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[71] <= 11.326016187667847) {
                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= -33.60000038146973) {
                if (input[60] <= -1.7879348993301392) {
                    if (input[32] <= 0.2072356566786766) {
                        if (input[25] <= 0.1031574453227222) {
                            if (input[12] <= -255.75) {
                                memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[40] <= 9.524017333984375) {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[73] <= 10.377862453460693) {
                                if (input[30] <= 0.8468528985977173) {
                                    memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[63] <= -1.023873507976532) {
                            if (input[15] <= 25.524999618530273) {
                                if (input[40] <= 1.9164882898330688) {
                                    memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[21] <= 0.6172637641429901) {
                                        if (input[5] <= -49.75) {
                                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[28] <= 16.982142448425293) {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[51] <= 65.1146354675293) {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[70] <= 6.308778762817383) {
                                if (input[50] <= -75.875) {
                                    if (input[56] <= 0.9211050868034363) {
                                        if (input[80] <= -0.6888565421104431) {
                                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 64.4000015258789) {
                                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= -229.0) {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[73] <= 0.8816793859004974) {
                                            memcpy(var77, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.9642857142857143, 0.03571428571428571, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[30] <= 1.0595768690109253) {
                                    if (input[15] <= 18.199999809265137) {
                                        if (input[66] <= 0.7702944576740265) {
                                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[73] <= 13.729007244110107) {
                                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[38] <= 2.399807572364807) {
                        if (input[8] <= -56.25) {
                            if (input[21] <= 0.7352661192417145) {
                                if (input[16] <= 14.061244487762451) {
                                    memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[27] <= -0.7928571403026581) {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[70] <= -1.4200381636619568) {
                                    memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[24] <= 0.32500000298023224) {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[33] <= 3.138138175010681) {
                                if (input[48] <= 8.666580200195312) {
                                    if (input[76] <= 4214.80517578125) {
                                        if (input[38] <= 2.2188289165496826) {
                                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[16] <= 19.892542839050293) {
                                        if (input[2] <= -88.20000076293945) {
                                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.7142857142857143, 0.0, 0.2857142857142857}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[27] <= -3.650246262550354) {
                            if (input[36] <= 0.18663505464792252) {
                                memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[31] <= 0.5425754487514496) {
                                    if (input[78] <= 658.0) {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[21] <= 1.6319929957389832) {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 5.065177083015442) {
                                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[5] <= -50.47500038146973) {
                                if (input[45] <= 4.8376617431640625) {
                                    if (input[45] <= 3.855302095413208) {
                                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[38] <= 5.214078903198242) {
                                        if (input[6] <= 80.34005737304688) {
                                            memcpy(var77, (double[]){0.0, 0.9545454545454546, 0.045454545454545456, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.125, 0.25, 0.625, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 947.7740478515625) {
                                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.25, 0.0, 0.75, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[35] <= 4.1747517585754395) {
                                    if (input[38] <= 6.984305381774902) {
                                        if (input[73] <= 17.786259651184082) {
                                            memcpy(var77, (double[]){0.41279069767441867, 0.1802325581395349, 0.33720930232558144, 0.06976744186046513}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.058823529411764705, 0.0, 0.9411764705882353, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[63] <= 24.15481662750244) {
                                            memcpy(var77, (double[]){0.0, 0.875, 0.0625, 0.0625}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[51] <= 316.90802001953125) {
                                        if (input[78] <= 4233.0) {
                                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.16666666666666666, 0.0, 0.8333333333333334}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[27] <= 0.2050865851342678) {
                    if (input[17] <= 0.5) {
                        if (input[67] <= -3.8193376064300537) {
                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[78] <= 2039.0) {
                            memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[57] <= -1.303352177143097) {
                        if (input[77] <= -2634.0) {
                            if (input[51] <= 74.02457427978516) {
                                memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[21] <= 4.249008893966675) {
                                    if (input[46] <= 35.25222206115723) {
                                        if (input[2] <= 4.799999952316284) {
                                            memcpy(var77, (double[]){0.0, 0.0, 0.8666666666666667, 0.13333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.125, 0.3125, 0.3125, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= -52.42500114440918) {
                                            memcpy(var77, (double[]){0.5833333333333334, 0.16666666666666666, 0.0, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[72] <= -187.53435516357422) {
                                if (input[67] <= -0.45768822729587555) {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[21] <= 0.44606417417526245) {
                                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[80] <= -0.7165184617042542) {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[75] <= 380.75) {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] <= 46.0) {
                            if (input[52] <= -234.5) {
                                if (input[50] <= 59.97500038146973) {
                                    if (input[48] <= 12.04515552520752) {
                                        memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[25] <= 6.961202383041382) {
                                            memcpy(var77, (double[]){0.9615384615384616, 0.038461538461538464, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 30.916029930114746) {
                                        memcpy(var77, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[62] <= 0.2959127128124237) {
                                    memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[2] <= 92.5) {
                                if (input[37] <= 1.6053999662399292) {
                                    memcpy(var77, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var77, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var77, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var24, var77, 4, var23);
    double var78[4];
    if (input[38] <= 7.850174427032471) {
        if (input[22] <= 0.9289915859699249) {
            if (input[50] <= -91.45000076293945) {
                if (input[23] <= 1.5099999904632568) {
                    if (input[40] <= 1.3356747031211853) {
                        if (input[8] <= -66.25) {
                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[35] <= 5.089015245437622) {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[57] <= -2.3866316080093384) {
                            if (input[48] <= 8.9700927734375) {
                                if (input[60] <= -1.9232631921768188) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[50] <= -94.95000076293945) {
                                if (input[75] <= 179.5500030517578) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[78] <= 8662.0) {
                        if (input[1] <= 13.764176845550537) {
                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[41] <= 1.6227200627326965) {
                                if (input[8] <= -69.5) {
                                    memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[55] <= -2.7280389070510864) {
                                        memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[73] <= 11.248091697692871) {
                                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[12] <= -273.6999969482422) {
                                    if (input[43] <= 6.474308490753174) {
                                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[16] <= 9.744531154632568) {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[80] <= -0.7591192424297333) {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[47] <= 2.6381733417510986) {
                                            memcpy(var78, (double[]){0.0, 0.18181818181818182, 0.8181818181818182, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.1509433962264151, 0.5943396226415094, 0.2169811320754717, 0.03773584905660377}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[50] <= -106.42499923706055) {
                            if (input[26] <= 11.91878604888916) {
                                memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[45] <= 5.8354573249816895) {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[83] <= 0.75) {
                                    memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[35] <= 1.7513262629508972) {
                    if (input[65] <= 0.7635322213172913) {
                        if (input[63] <= -0.5040318667888641) {
                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[15] <= 37.599998474121094) {
                                if (input[12] <= -365.5) {
                                    memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[51] <= 17.608081340789795) {
                                        if (input[30] <= 1.2510539293289185) {
                                            memcpy(var78, (double[]){0.0, 0.125, 0.125, 0.75}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[21] <= 3.980771064758301) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[78] <= 9522.0) {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[33] <= 1.2880302667617798) {
                            if (input[27] <= -1.25) {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[67] <= 0.8489146828651428) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[55] <= -1.0038724541664124) {
                                        memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[78] <= 8788.0) {
                                if (input[18] <= 174.5) {
                                    if (input[10] <= -223.875) {
                                        if (input[62] <= -6.125959396362305) {
                                            memcpy(var78, (double[]){0.18181818181818182, 0.6363636363636364, 0.09090909090909091, 0.09090909090909091}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.5333333333333333, 0.0, 0.26666666666666666, 0.2}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[55] <= 2.187857151031494) {
                                            memcpy(var78, (double[]){0.0, 0.76, 0.12, 0.12}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[76] <= 2824.6561279296875) {
                                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[58] <= 6.844085931777954) {
                                    if (input[62] <= -2.4050947427749634) {
                                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[67] <= -2.650208830833435) {
                        if (input[58] <= 3.37350070476532) {
                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[50] <= -14.5) {
                            if (input[80] <= 0.6769205629825592) {
                                if (input[38] <= 2.4082109928131104) {
                                    if (input[11] <= 124.6263313293457) {
                                        if (input[56] <= 0.37086448073387146) {
                                            memcpy(var78, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[41] <= 4.664792418479919) {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[7] <= -178.0500030517578) {
                                        if (input[56] <= 1.818454086780548) {
                                            memcpy(var78, (double[]){0.0, 0.1111111111111111, 0.0, 0.8888888888888888}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[68] <= 1.8543438911437988) {
                                            memcpy(var78, (double[]){0.3181818181818182, 0.2727272727272727, 0.4090909090909091, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.7285714285714285, 0.02857142857142857, 0.1, 0.14285714285714285}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[70] <= -4.738358736038208) {
                                    if (input[7] <= -146.5) {
                                        if (input[58] <= -1.2021894454956055) {
                                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 195.0) {
                                        if (input[17] <= 0.5) {
                                            memcpy(var78, (double[]){0.33333333333333337, 0.33333333333333337, 0.16666666666666669, 0.16666666666666669}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.08, 0.04, 0.84, 0.04}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 163.94634246826172) {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.5, 0.25, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[76] <= 1088.9798278808594) {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[20] <= 3.9865490198135376) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[31] <= 2.2040704488754272) {
                                        if (input[48] <= 469.0) {
                                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.8, 0.2, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[58] <= 4.54259991645813) {
                if (input[13] <= 49.70000076293945) {
                    if (input[72] <= -190.99236297607422) {
                        if (input[44] <= 0.9749999940395355) {
                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[6] <= 17.677083015441895) {
                            if (input[76] <= 1468.722412109375) {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[55] <= -0.9709711968898773) {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[38] <= 2.8187026977539062) {
                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[48] <= 12.801668643951416) {
                            if (input[62] <= -1.792068064212799) {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[76] <= 929.9715270996094) {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[57] <= -0.32786743342876434) {
                    if (input[77] <= -4778.0) {
                        if (input[0] <= 104.70000076293945) {
                            if (input[50] <= 47.50000071525574) {
                                if (input[77] <= -10310.0) {
                                    if (input[46] <= 41.2906379699707) {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[0] <= 82.8499984741211) {
                                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= 7.5) {
                                        if (input[16] <= 58.59241485595703) {
                                            memcpy(var78, (double[]){0.0, 0.05, 0.95, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= 20.5) {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[2] <= 30.800000190734863) {
                                if (input[63] <= 6.164013385772705) {
                                    if (input[73] <= 10.851144790649414) {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[16] <= 39.135032653808594) {
                                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[38] <= 6.401796102523804) {
                                        memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[40] <= 76.78001403808594) {
                            if (input[76] <= 2085.2998046875) {
                                if (input[62] <= -4.564074397087097) {
                                    memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[60] <= 7.274920225143433) {
                        if (input[47] <= 5.215801000595093) {
                            memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[66] <= 1.9244112968444824) {
                                if (input[24] <= 0.9749999940395355) {
                                    memcpy(var78, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[61] <= 1.7522150874137878) {
                                        memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var78, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[65] <= 5.644252777099609) {
                            memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var78, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        memcpy(var78, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var23, var78, 4, var22);
    double var79[4];
    if (input[45] <= 66.55071640014648) {
        if (input[43] <= 5.719841718673706) {
            if (input[77] <= 71.0) {
                if (input[35] <= 3.122789978981018) {
                    if (input[55] <= -1.2369784712791443) {
                        if (input[77] <= -2648.0) {
                            if (input[56] <= 1.2169767618179321) {
                                memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[45] <= 4.015179872512817) {
                            if (input[67] <= 0.7419770359992981) {
                                if (input[13] <= -37.5) {
                                    if (input[52] <= 27.0) {
                                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[13] <= -231.0) {
                                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[72] <= -8.729007482528687) {
                                memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[11] <= 2.567808508872986) {
                                    if (input[2] <= -101.0) {
                                        memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[3] <= -108.5) {
                    memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[30] <= 1.4322634935379028) {
                        memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[35] <= 4.777108907699585) {
                if (input[7] <= -251.0) {
                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[65] <= 1.0204280614852905) {
                        if (input[22] <= 1.2004429697990417) {
                            if (input[27] <= 0.5794117748737335) {
                                if (input[16] <= 3.065524935722351) {
                                    if (input[51] <= 76.04842758178711) {
                                        if (input[68] <= 1.2739108800888062) {
                                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 77.69999694824219) {
                                            memcpy(var79, (double[]){0.8666666666666667, 0.13333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[7] <= 32.10000038146973) {
                                        if (input[21] <= 5.908331871032715) {
                                            memcpy(var79, (double[]){0.10666666666666667, 0.14666666666666667, 0.5866666666666667, 0.16}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.55, 0.3, 0.15, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[8] <= 37.900001525878906) {
                                    if (input[50] <= 37.90000057220459) {
                                        memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[43] <= 6.955128192901611) {
                                        memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[22] <= 0.14742822758853436) {
                                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 0.024390243902439025, 0.975609756097561, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[7] <= -20.550000190734863) {
                                if (input[67] <= -3.1859747171401978) {
                                    memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[50] <= -282.97499084472656) {
                                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[38] <= 6.816781282424927) {
                                        memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[72] <= -12.541984558105469) {
                            if (input[8] <= 238.8499984741211) {
                                if (input[56] <= 1.7333778738975525) {
                                    if (input[68] <= 2.0018770694732666) {
                                        memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[25] <= 0.47256793081760406) {
                                            memcpy(var79, (double[]){0.8076923076923077, 0.0, 0.19230769230769232, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.3617021276595745, 0.3191489361702128, 0.1702127659574468, 0.14893617021276595}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[38] <= 6.956412315368652) {
                                        if (input[21] <= 0.7124877870082855) {
                                            memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.9130434782608696, 0.0, 0.04347826086956522, 0.04347826086956522}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[46] <= 47.73941230773926) {
                                            memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[57] <= -5.6269824504852295) {
                                    memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[26] <= 9.976017475128174) {
                                        memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[32] <= 0.2072356566786766) {
                                if (input[10] <= -118.89999771118164) {
                                    if (input[58] <= -1.2927131652832031) {
                                        memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[75] <= 297.5) {
                                            memcpy(var79, (double[]){0.13333333333333333, 0.06666666666666667, 0.6666666666666666, 0.13333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.8235294117647058, 0.0, 0.17647058823529413, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[16] <= 51.46076774597168) {
                                        if (input[45] <= 15.62797498703003) {
                                            memcpy(var79, (double[]){0.0, 0.23529411764705882, 0.0, 0.7647058823529411}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 0.5714285714285714, 0.42857142857142855, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 2.5) {
                                            memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[22] <= 0.15942028909921646) {
                                    if (input[77] <= -6528.0) {
                                        if (input[27] <= -1.7327648401260376) {
                                            memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.125, 0.0, 0.875, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[29] <= 0.07500000111758709) {
                                            memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.10752688172043011, 0.7096774193548387, 0.16129032258064516, 0.021505376344086023}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[7] <= -139.75) {
                                        if (input[7] <= -145.0) {
                                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 123.11476516723633) {
                                            memcpy(var79, (double[]){0.13636363636363635, 0.09090909090909091, 0.75, 0.022727272727272728}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var79, (double[]){0.1475409836065574, 0.34426229508196726, 0.4426229508196722, 0.0655737704918033}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[81] <= -0.5512709617614746) {
            if (input[71] <= 5.251861095428467) {
                if (input[2] <= -45.69999980926514) {
                    memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[42] <= 3.6145397424697876) {
                    memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[51] <= 10.366105556488037) {
                if (input[49] <= 0.2500000074505806) {
                    if (input[75] <= 134.59999656677246) {
                        memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var79, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[22] <= -1.135952353477478) {
                    if (input[22] <= -1.5147758722305298) {
                        if (input[16] <= 52.761526107788086) {
                            memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var79, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[47] <= 3.242692232131958) {
                        if (input[47] <= 2.61555552482605) {
                            memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var79, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var79, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var22, var79, 4, var21);
    double var80[4];
    if (input[73] <= 13.904580116271973) {
        if (input[0] <= -192.5250015258789) {
            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[20] <= 6.023494005203247) {
                if (input[67] <= 0.6403084695339203) {
                    if (input[42] <= 4.292815446853638) {
                        if (input[23] <= 2.4646464586257935) {
                            if (input[0] <= -91.8499984741211) {
                                if (input[77] <= -1119.0) {
                                    if (input[51] <= 16.71568775177002) {
                                        if (input[55] <= -1.3982029557228088) {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[52] <= -41.0) {
                                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[52] <= 5.0) {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[38] <= 3.436002254486084) {
                                    if (input[2] <= -113.70000076293945) {
                                        if (input[16] <= 12.38740587234497) {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[46] <= 1.4248339533805847) {
                                            memcpy(var80, (double[]){0.38461538461538464, 0.0, 0.46153846153846156, 0.15384615384615385}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.1111111111111111, 0.06666666666666667, 0.8, 0.022222222222222223}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[60] <= -0.9742448329925537) {
                                        if (input[12] <= -295.25) {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.15, 0.1, 0.7, 0.05}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= -15.200000286102295) {
                                            memcpy(var80, (double[]){0.8333333333333334, 0.03333333333333333, 0.13333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[73] <= -151.71755981445312) {
                                if (input[21] <= 0.6109461784362793) {
                                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[27] <= -0.9707884192466736) {
                                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[16] <= 53.50358581542969) {
                                    if (input[16] <= 3.595418930053711) {
                                        if (input[76] <= 2446.6159057617188) {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[65] <= 1.0359956622123718) {
                                            memcpy(var80, (double[]){0.13157894736842105, 0.21052631578947367, 0.2894736842105263, 0.3684210526315789}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.34306569343065696, 0.2846715328467153, 0.23357664233576642, 0.1386861313868613}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[68] <= 9.931427478790283) {
                                        if (input[21] <= 5.429976463317871) {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[15] <= 7.5) {
                            if (input[70] <= -183.52767181396484) {
                                memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[16] <= 2.1855032444000244) {
                                    memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[38] <= 2.620098114013672) {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 8.439909100532532) {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[47] <= 4.413894891738892) {
                                memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[10] <= 186.0) {
                                    memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[35] <= 3.1709333658218384) {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[5] <= -173.92499542236328) {
                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[2] <= -105.5) {
                            if (input[32] <= 0.22011535614728928) {
                                if (input[56] <= 0.4656422436237335) {
                                    if (input[3] <= -159.0) {
                                        if (input[35] <= 4.309875965118408) {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[52] <= -102.5) {
                                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[46] <= 1.7061144709587097) {
                                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[52] <= -78.0) {
                                            memcpy(var80, (double[]){0.96, 0.04, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[7] <= -123.5) {
                                    if (input[7] <= -232.5) {
                                        if (input[18] <= 85.5) {
                                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 862.0301513671875) {
                                            memcpy(var80, (double[]){0.17391304347826086, 0.8260869565217391, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.46153846153846156, 0.5384615384615384, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[37] <= 1.4580378532409668) {
                                        if (input[56] <= 0.02089835610240698) {
                                            memcpy(var80, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[36] <= 0.4619160443544388) {
                                if (input[6] <= 2.8959587812423706) {
                                    if (input[30] <= 1.4322634935379028) {
                                        memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[46] <= 1.4603240489959717) {
                                        memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[8] <= 231.8499984741211) {
                                    if (input[58] <= -0.8181427121162415) {
                                        if (input[50] <= -190.4749984741211) {
                                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 5.522666931152344) {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.9333333333333333, 0.0, 0.06666666666666667, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[51] <= 322.7652282714844) {
                                        memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[33] <= 7.634573221206665) {
                                            memcpy(var80, (double[]){0.0, 0.8571428571428571, 0.0, 0.14285714285714285}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[38] <= 4.006073594093323) {
                    memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[55] <= 1.2215336561203003) {
            if (input[61] <= 3.107336163520813) {
                if (input[70] <= 8.322137355804443) {
                    if (input[57] <= -4.1294684410095215) {
                        if (input[10] <= -171.89999771118164) {
                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[46] <= 1.4716682434082031) {
                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[68] <= 2.0185224413871765) {
                                if (input[45] <= 59.34965133666992) {
                                    memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[6] <= 71.48423767089844) {
                    memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[66] <= 2.2133604288101196) {
                if (input[20] <= 5.885806322097778) {
                    if (input[0] <= 68.0) {
                        if (input[7] <= -185.5) {
                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[25] <= 2.199732542037964) {
                                memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[75] <= 1134.0999755859375) {
                                    memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[7] <= 45.70000076293945) {
                            if (input[13] <= 400.25) {
                                memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[72] <= -8.412213802337646) {
                                    if (input[11] <= 192.3914031982422) {
                                        memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[52] <= -465.5) {
                                            memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var80, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[48] <= 159.33333587646484) {
                    if (input[38] <= 6.765357971191406) {
                        if (input[32] <= 0.9768300652503967) {
                            if (input[15] <= 59.32500076293945) {
                                if (input[80] <= -0.5887198001146317) {
                                    memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var80, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[66] <= 2.5504831075668335) {
                                memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var80, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var80, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var21, var80, 4, var20);
    double var81[4];
    if (input[38] <= 7.850174427032471) {
        if (input[17] <= 8.5) {
            if (input[57] <= -1.9952706098556519) {
                if (input[2] <= -68.20000076293945) {
                    if (input[32] <= 0.31860119104385376) {
                        if (input[51] <= 33.31959342956543) {
                            if (input[29] <= 0.17500000447034836) {
                                if (input[48] <= 187.0) {
                                    memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[62] <= -3.643777370452881) {
                                    if (input[58] <= -0.7471316903829575) {
                                        if (input[76] <= 2350.6907958984375) {
                                            memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= -356.0) {
                                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[45] <= 4.849541664123535) {
                                if (input[26] <= 1.1581774353981018) {
                                    if (input[40] <= 1.410947024822235) {
                                        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[51] <= 41.36543846130371) {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[12] <= -264.25) {
                                    if (input[3] <= 97.29999923706055) {
                                        if (input[48] <= 16.690475463867188) {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.47500000000000003, 0.17500000000000002, 0.22500000000000003, 0.12500000000000003}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 8.510613918304443) {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.75, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 7.045801401138306) {
                                        if (input[56] <= 0.9058419764041901) {
                                            memcpy(var81, (double[]){0.16666666666666666, 0.8333333333333334, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.9047619047619048, 0.047619047619047616, 0.047619047619047616, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 0.8312523066997528) {
                                            memcpy(var81, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.04, 0.8, 0.16, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[46] <= 2.1218875646591187) {
                            if (input[6] <= 94.15602111816406) {
                                if (input[55] <= -4.311207294464111) {
                                    memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[32] <= 0.660935640335083) {
                                if (input[77] <= -4775.0) {
                                    if (input[8] <= 181.0) {
                                        if (input[5] <= -23.125) {
                                            memcpy(var81, (double[]){0.3, 0.0, 0.7, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[53] <= 1679.0) {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[13] <= -185.0) {
                                        if (input[33] <= 2.5218950510025024) {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[72] <= -3.977099299430847) {
                                            memcpy(var81, (double[]){0.15, 0.625, 0.2, 0.025}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[5] <= -130.9000015258789) {
                                    memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[22] <= -4.059999942779541) {
                                        if (input[35] <= 0.7638761699199677) {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= 0.2906322330236435) {
                                            memcpy(var81, (double[]){0.8387096774193549, 0.06451612903225806, 0.0967741935483871, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.5, 0.25, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[36] <= 0.31222009658813477) {
                        memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[23] <= 22.5) {
                            if (input[53] <= -16.0) {
                                if (input[1] <= 12.692941665649414) {
                                    if (input[77] <= -4515.0) {
                                        memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[73] <= -172.7595443725586) {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[6] <= 74.89299392700195) {
                                    if (input[41] <= 1.4337406754493713) {
                                        if (input[73] <= -169.91603088378906) {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.75, 0.25}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.8888888888888888, 0.0, 0.1111111111111111}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[7] <= 7.25) {
                                            memcpy(var81, (double[]){0.7368421052631579, 0.10526315789473684, 0.15789473684210525, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.09090909090909091, 0.5454545454545454, 0.18181818181818182, 0.18181818181818182}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= 119.60000228881836) {
                                        if (input[10] <= 106.17500305175781) {
                                            memcpy(var81, (double[]){0.5454545454545454, 0.09090909090909091, 0.18181818181818182, 0.18181818181818182}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.7352941176470589, 0.2647058823529412, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[72] <= -12.213740348815918) {
                                            memcpy(var81, (double[]){0.0, 0.2727272727272727, 0.7272727272727273, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[65] <= 0.36970120668411255) {
                                memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[12] <= -139.0) {
                                    if (input[27] <= -0.34375) {
                                        if (input[78] <= 7668.0) {
                                            memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[8] <= 78.4000015258789) {
                                        if (input[78] <= 5082.0) {
                                            memcpy(var81, (double[]){0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[67] <= 0.9441167116165161) {
                    if (input[37] <= 1.3594871759414673) {
                        if (input[65] <= 0.6202202439308167) {
                            if (input[8] <= -109.5) {
                                memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[32] <= 0.9101219475269318) {
                                    if (input[72] <= -5.805343568325043) {
                                        if (input[53] <= 131.0) {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.5, 0.25, 0.0, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[37] <= 1.2287586331367493) {
                                if (input[12] <= -259.0) {
                                    memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[75] <= 149.1999969482422) {
                                        if (input[0] <= 119.875) {
                                            memcpy(var81, (double[]){0.8888888888888888, 0.1111111111111111, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= 0.41583968698978424) {
                                            memcpy(var81, (double[]){0.375, 0.25, 0.375, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.038461538461538464, 0.8076923076923077, 0.15384615384615385, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[71] <= 11.861037254333496) {
                                    memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[53] <= 70.0) {
                                        memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[82] <= 45.0) {
                                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[81] <= -0.6013678908348083) {
                            if (input[7] <= -14.200000286102295) {
                                if (input[46] <= 97.40468978881836) {
                                    memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[77] <= -766.0) {
                                    if (input[51] <= 88.17453384399414) {
                                        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[21] <= 5.529688596725464) {
                                if (input[21] <= 3.7190645933151245) {
                                    if (input[18] <= 38.5) {
                                        if (input[52] <= -385.0) {
                                            memcpy(var81, (double[]){0.0, 0.0, 0.2222222222222222, 0.7777777777777778}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.17073170731707318, 0.3170731707317073, 0.3902439024390244, 0.12195121951219512}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[31] <= 2.0195447206497192) {
                                            memcpy(var81, (double[]){0.7777777777777778, 0.0, 0.05555555555555555, 0.16666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[48] <= 355.0833282470703) {
                                        memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[5] <= 71.50000190734863) {
                                    if (input[75] <= 156.25) {
                                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[10] <= -214.5) {
                        memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[48] <= 404.9375) {
                            if (input[76] <= 3493.33740234375) {
                                memcpy(var81, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var81, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[45] <= 46.9598331451416) {
                memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                memcpy(var81, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        memcpy(var81, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var20, var81, 4, var19);
    double var82[4];
    if (input[81] <= -0.5796427726745605) {
        if (input[10] <= 122.92499923706055) {
            if (input[11] <= 27.424654006958008) {
                if (input[20] <= 1.8934925198554993) {
                    if (input[2] <= -96.0999984741211) {
                        memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[41] <= 2.537769079208374) {
                            if (input[23] <= 1.6686046719551086) {
                                if (input[18] <= 4.0) {
                                    if (input[53] <= 63.0) {
                                        memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[81] <= -0.5907024145126343) {
                    if (input[51] <= 34.38342475891113) {
                        if (input[42] <= 0.5024258941411972) {
                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[3] <= -19.5) {
                                memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[40] <= 1.9331490993499756) {
                            memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[20] <= 0.7706606984138489) {
                                if (input[55] <= -2.642656445503235) {
                                    memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[5] <= 56.64999961853027) {
                                    if (input[80] <= -0.598114937543869) {
                                        if (input[68] <= 1.8157840371131897) {
                                            memcpy(var82, (double[]){0.0, 0.75, 0.25, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.8181818181818182, 0.18181818181818182, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[60] <= -0.6168897449970245) {
                                            memcpy(var82, (double[]){0.5714285714285714, 0.0, 0.42857142857142855, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[68] <= 5.803252220153809) {
                                        if (input[70] <= -167.69676208496094) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[46] <= 26.25237464904785) {
                if (input[33] <= 6.310754776000977) {
                    memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[73] <= 17.809160232543945) {
                    if (input[37] <= 2.0038276314735413) {
                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[26] <= 3.6011273860931396) {
                        memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[36] <= 2.577946186065674) {
            if (input[50] <= -217.3000030517578) {
                if (input[55] <= 1.774267517030239) {
                    if (input[1] <= 0.273861289024353) {
                        memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[45] <= 51.83639907836914) {
                    if (input[12] <= -261.9499969482422) {
                        if (input[32] <= 0.11930739879608154) {
                            if (input[25] <= -0.6258945316076279) {
                                if (input[70] <= 6.802480697631836) {
                                    if (input[51] <= 30.654988288879395) {
                                        memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[65] <= 1.0931467413902283) {
                                if (input[76] <= 1386.64697265625) {
                                    if (input[37] <= 1.5454130172729492) {
                                        if (input[72] <= -9.02671730518341) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[25] <= 2.2518726587295532) {
                                    if (input[62] <= -2.7873183488845825) {
                                        if (input[33] <= 0.8331343531608582) {
                                            memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.8431372549019608, 0.058823529411764705, 0.0196078431372549, 0.0784313725490196}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[22] <= -1.7999999523162842) {
                                            memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[6] <= 56.96086502075195) {
                                        if (input[71] <= 4.745042085647583) {
                                            memcpy(var82, (double[]){0.09090909090909091, 0.7272727272727273, 0.0, 0.18181818181818182}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.8888888888888888, 0.0, 0.1111111111111111, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 840.1824645996094) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.29411764705882354, 0.058823529411764705, 0.6470588235294118, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[17] <= 9.0) {
                            if (input[52] <= -444.5) {
                                if (input[31] <= 2.334881901741028) {
                                    if (input[47] <= 5.634746313095093) {
                                        if (input[25] <= 5.610151052474976) {
                                            memcpy(var82, (double[]){0.6829268292682927, 0.0975609756097561, 0.14634146341463414, 0.07317073170731707}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.15384615384615385, 0.6153846153846154, 0.23076923076923078}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 3101.3802490234375) {
                                            memcpy(var82, (double[]){0.6666666666666666, 0.0, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[55] <= 3.364103078842163) {
                                        if (input[72] <= -4.061068773269653) {
                                            memcpy(var82, (double[]){0.07142857142857142, 0.9285714285714286, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.75, 0.0, 0.25, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[23] <= 19.747678756713867) {
                                            memcpy(var82, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[57] <= -3.880277395248413) {
                                    if (input[61] <= 3.2185524702072144) {
                                        if (input[45] <= 15.896525382995605) {
                                            memcpy(var82, (double[]){0.1142857142857143, 0.4285714285714286, 0.4285714285714286, 0.028571428571428574}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.08695652173913043, 0.0, 0.9130434782608695, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[71] <= 5.399188756942749) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.5, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[63] <= -0.6845006048679352) {
                                        if (input[3] <= -110.5) {
                                            memcpy(var82, (double[]){0.8, 0.0, 0.2, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.058823529411764705, 0.9411764705882353, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[71] <= 1.3976712822914124) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){0.16560509554140126, 0.36942675159235666, 0.2484076433121019, 0.21656050955414013}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[25] <= 5.637362003326416) {
                        if (input[31] <= 0.018687927164137363) {
                            memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[36] <= 1.6657288670539856) {
                                if (input[53] <= 850.0) {
                                    if (input[3] <= -150.5) {
                                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[12] <= -250.25) {
                                            memcpy(var82, (double[]){0.0, 0.0, 0.25, 0.75}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[17] <= 2.0) {
                                    memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[13] <= 456.6000061035156) {
                            if (input[71] <= 77.25625991821289) {
                                if (input[17] <= 5.5) {
                                    memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[66] <= 0.7887798547744751) {
                                        memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[31] <= 0.7848101258277893) {
                                    memcpy(var82, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[53] <= 192.0) {
                                        memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var82, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[42] <= -2.9288398027420044) {
                                memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var82, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            memcpy(var82, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var19, var82, 4, var18);
    double var83[4];
    if (input[42] <= 0.4037037044763565) {
        if (input[32] <= 0.901643693447113) {
            if (input[2] <= -12.5) {
                if (input[27] <= -3.359354853630066) {
                    if (input[43] <= 6.113333225250244) {
                        if (input[46] <= 51.75472831726074) {
                            memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[35] <= 9.468975305557251) {
                                memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[48] <= 20.223684310913086) {
                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[42] <= 0.1551724076271057) {
                                memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[3] <= -95.5) {
                        memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[5] <= 184.625) {
                    if (input[28] <= 10.187179565429688) {
                        if (input[67] <= -0.7498806118965149) {
                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[48] <= 294.0) {
                            if (input[1] <= 56.2882194519043) {
                                if (input[65] <= 1.903411865234375) {
                                    memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[35] <= 1.6785558462142944) {
                                        memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[70] <= 6.26335883140564) {
                                memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[5] <= 207.9499969482422) {
                        if (input[45] <= 27.881921768188477) {
                            memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[75] <= 123.5999984741211) {
                if (input[65] <= 0.814216822385788) {
                    memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[33] <= 1.5106382966041565) {
                    if (input[63] <= -0.7432943284511566) {
                        if (input[67] <= 0.825802743434906) {
                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[25] <= 5.942764759063721) {
            if (input[32] <= 0.10086194053292274) {
                if (input[5] <= -102.89999771118164) {
                    memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[2] <= -20.800000190734863) {
                    if (input[17] <= 6.5) {
                        if (input[67] <= 0.2426154837012291) {
                            if (input[10] <= 21.324999809265137) {
                                if (input[27] <= 0.6898800134658813) {
                                    if (input[32] <= 0.45346495509147644) {
                                        if (input[7] <= -164.0) {
                                            memcpy(var83, (double[]){0.5, 0.1111111111111111, 0.3888888888888889, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.12195121951219512, 0.2073170731707317, 0.5487804878048781, 0.12195121951219512}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[77] <= -3455.0) {
                                            memcpy(var83, (double[]){0.8, 0.15, 0.05, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.28571428571428575, 0.1142857142857143, 0.31428571428571433, 0.28571428571428575}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[8] <= 37.900001525878906) {
                                        if (input[81] <= -0.7019721865653992) {
                                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 35.492366790771484) {
                                            memcpy(var83, (double[]){0.02631578947368421, 0.07894736842105263, 0.8947368421052632, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[78] <= 2895.0) {
                                    memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[40] <= 36.952775955200195) {
                                        if (input[38] <= 5.851082801818848) {
                                            memcpy(var83, (double[]){0.7073170731707317, 0.14634146341463414, 0.024390243902439025, 0.12195121951219512}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.25, 0.42857142857142855, 0.2857142857142857, 0.03571428571428571}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[3] <= 201.0) {
                                            memcpy(var83, (double[]){0.15625, 0.09375, 0.59375, 0.15625}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[65] <= 1.5806829333305359) {
                                if (input[32] <= 0.6469213962554932) {
                                    if (input[45] <= 5.121417284011841) {
                                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 0.17045454680919647) {
                                        memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 0.7476950287818909) {
                                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[32] <= 0.18107302486896515) {
                                    if (input[41] <= 1.6776959896087646) {
                                        memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[6] <= 83.89430236816406) {
                                            memcpy(var83, (double[]){0.06666666666666667, 0.0, 0.9333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[72] <= -12.660305500030518) {
                                        if (input[37] <= 0.26256127655506134) {
                                            memcpy(var83, (double[]){0.0, 0.0, 0.6666666666666666, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.85, 0.0, 0.15, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[43] <= 368.5) {
                                            memcpy(var83, (double[]){0.43373493975903615, 0.4819277108433735, 0.08433734939759036, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 0.2222222222222222, 0.7777777777777778, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[23] <= 15.018808364868164) {
                            memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[42] <= 2.7677778005599976) {
                                memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[58] <= 7.579093098640442) {
                                    memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[73] <= -152.7519073486328) {
                        if (input[63] <= 0.7176662385463715) {
                            if (input[25] <= 2.4022576808929443) {
                                memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[13] <= 20.700000762939453) {
                                    memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[16] <= 12.130118370056152) {
                            if (input[30] <= 2.7273550033569336) {
                                if (input[15] <= 16.800000190734863) {
                                    if (input[20] <= 2.7529512643814087) {
                                        memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[57] <= 0.35207727551460266) {
                                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[36] <= 2.1806687116622925) {
                                if (input[73] <= 16.10687017440796) {
                                    if (input[57] <= -0.4112154543399811) {
                                        if (input[61] <= 3.2006746530532837) {
                                            memcpy(var83, (double[]){0.11764705882352941, 0.35294117647058826, 0.058823529411764705, 0.47058823529411764}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.8571428571428571, 0.0, 0.14285714285714285, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= 87.0) {
                                        memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[68] <= 4.997328042984009) {
                                    memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[42] <= 4.651778221130371) {
                                        memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[15] <= 52.60000038146973) {
                                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 63.218536376953125) {
                if (input[73] <= 11.667938709259033) {
                    if (input[81] <= -0.5583607256412506) {
                        if (input[53] <= 114.5) {
                            memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[61] <= 4.001837253570557) {
                        if (input[52] <= -84.0) {
                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[53] <= 548.5) {
                    if (input[80] <= -0.5926739871501923) {
                        if (input[31] <= 0.8803966641426086) {
                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var83, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[53] <= 484.5) {
                            if (input[48] <= 535.0) {
                                memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[28] <= 45.39999961853027) {
                                    memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var83, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[3] <= 188.0) {
                        memcpy(var83, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var83, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var18, var83, 4, var17);
    double var84[4];
    if (input[50] <= -225.875) {
        if (input[47] <= 3.489181876182556) {
            if (input[43] <= 173.0994110107422) {
                memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[33] <= 6.578112840652466) {
                    memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[81] <= -0.7255019247531891) {
                memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[13] <= -229.5) {
                    memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[73] <= -173.29007720947266) {
                        if (input[71] <= 2.0568716526031494) {
                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[45] <= 73.666259765625) {
            if (input[7] <= -175.0) {
                if (input[57] <= -6.857874631881714) {
                    if (input[72] <= -11.889313220977783) {
                        if (input[20] <= 1.2597903609275818) {
                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[5] <= -147.0) {
                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[25] <= 2.5340226888656616) {
                                if (input[13] <= 99.0) {
                                    memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[29] <= 0.625) {
                        memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[44] <= 0.9749999940395355) {
                            if (input[77] <= -1074.0) {
                                if (input[40] <= 39.514474868774414) {
                                    if (input[2] <= -143.0) {
                                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[58] <= 2.55474317073822) {
                                            memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[47] <= 13.270833492279053) {
                                    if (input[28] <= 15.375) {
                                        if (input[0] <= -144.9000015258789) {
                                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[31] <= 0.5045550614595413) {
                                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[27] <= -1.923707664012909) {
                                if (input[35] <= 1.3345323204994202) {
                                    memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[22] <= -0.4368191808462143) {
                                    if (input[41] <= 29.21906614303589) {
                                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[2] <= -109.5) {
                                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[5] <= -130.5250015258789) {
                    if (input[82] <= 15.0) {
                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 581.5) {
                        if (input[36] <= 0.5274023413658142) {
                            if (input[78] <= 3164.0) {
                                if (input[7] <= -143.75) {
                                    if (input[6] <= 34.6372013092041) {
                                        memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[61] <= 0.3975736200809479) {
                                        if (input[50] <= 53.94999885559082) {
                                            memcpy(var84, (double[]){0.2, 0.17777777777777778, 0.4888888888888889, 0.13333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[46] <= 28.24625873565674) {
                                            memcpy(var84, (double[]){0.09090909090909091, 0.13636363636363635, 0.2727272727272727, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.6363636363636364, 0.2727272727272727, 0.0, 0.09090909090909091}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[50] <= 5.549999952316284) {
                                    if (input[65] <= 1.039228916168213) {
                                        if (input[17] <= 0.5) {
                                            memcpy(var84, (double[]){0.0, 0.7777777777777778, 0.2222222222222222, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.018867924528301886, 0.07547169811320754, 0.9056603773584906, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 3.5) {
                                            memcpy(var84, (double[]){0.14893617021276595, 0.3191489361702128, 0.5319148936170213, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.17647058823529413, 0.23529411764705882, 0.0, 0.5882352941176471}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[7] <= -103.75) {
                                        if (input[43] <= 25.7590913772583) {
                                            memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[3] <= 177.8000030517578) {
                                if (input[32] <= 0.5272743403911591) {
                                    if (input[6] <= 83.38634490966797) {
                                        if (input[61] <= 1.3217796683311462) {
                                            memcpy(var84, (double[]){0.13924050632911394, 0.41772151898734183, 0.3417721518987342, 0.10126582278481014}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 8.668900489807129) {
                                            memcpy(var84, (double[]){0.0, 0.0, 0.6, 0.4}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[67] <= -2.0792362689971924) {
                                        if (input[41] <= 23.567683219909668) {
                                            memcpy(var84, (double[]){0.0, 0.2727272727272727, 0.7272727272727273, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[70] <= 5.803244233131409) {
                                            memcpy(var84, (double[]){0.8, 0.05, 0.13333333333333333, 0.016666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 5.908732175827026) {
                                    if (input[62] <= -0.48831896483898163) {
                                        if (input[21] <= 5.467519521713257) {
                                            memcpy(var84, (double[]){0.13402061855670103, 0.23711340206185566, 0.4948453608247423, 0.13402061855670103}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[47] <= 4.645122528076172) {
                                            memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var84, (double[]){0.0, 0.4285714285714286, 0.28571428571428575, 0.28571428571428575}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[31] <= 1.3923848867416382) {
                if (input[32] <= 0.9083425998687744) {
                    if (input[7] <= -73.25) {
                        memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var84, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[44] <= 0.07500000298023224) {
                        memcpy(var84, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 295.0) {
                    memcpy(var84, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var84, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var17, var84, 4, var16);
    double var85[4];
    if (input[36] <= 2.364275574684143) {
        if (input[50] <= -203.0) {
            if (input[70] <= -175.86927032470703) {
                memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[22] <= 0.10465116053819656) {
                    memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[81] <= -0.7610744833946228) {
                        memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[38] <= 7.920766592025757) {
                            if (input[53] <= -59.5) {
                                memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[22] <= 0.748565673828125) {
                                    memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[12] <= -158.9499969482422) {
                                        memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[38] <= 7.354505300521851) {
                                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[75] <= 165.14999389648438) {
                if (input[20] <= 6.2433764934539795) {
                    if (input[8] <= -66.5) {
                        if (input[27] <= -1.8679245710372925) {
                            if (input[24] <= 0.7750000059604645) {
                                if (input[35] <= 1.7735246419906616) {
                                    memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[60] <= -0.9916548132896423) {
                                if (input[47] <= 1.149999976158142) {
                                    memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[6] <= 14.817688941955566) {
                                        memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[23] <= 0.6834625340998173) {
                                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[36] <= 0.1585191935300827) {
                            if (input[68] <= 2.249043107032776) {
                                memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[10] <= 310.2250061035156) {
                                if (input[11] <= 166.6176986694336) {
                                    if (input[42] <= 9.366666316986084) {
                                        if (input[60] <= 1.5917623043060303) {
                                            memcpy(var85, (double[]){0.3825503355704698, 0.19463087248322147, 0.2953020134228188, 0.12751677852348994}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.775, 0.05, 0.15, 0.025}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[33] <= 4.273379921913147) {
                                        if (input[38] <= 2.5512174367904663) {
                                            memcpy(var85, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[56] <= 4.970804452896118) {
                                            memcpy(var85, (double[]){0.1, 0.0, 0.9, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.25, 0.5, 0.125, 0.125}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[38] <= 6.765357971191406) {
                                    if (input[76] <= 2451.8583984375) {
                                        memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[27] <= -5.025000095367432) {
                    if (input[44] <= 0.07500000111758709) {
                        if (input[78] <= 964.0) {
                            memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= -166.5999984741211) {
                            memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[42] <= 9.449999809265137) {
                                if (input[48] <= 54.35714340209961) {
                                    if (input[72] <= -13.30534315109253) {
                                        memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[46] <= 18.14193058013916) {
                                    memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[20] <= 5.938079595565796) {
                        if (input[38] <= 3.294899106025696) {
                            if (input[65] <= 0.5348377823829651) {
                                if (input[48] <= 87.5) {
                                    if (input[56] <= 0.7950011193752289) {
                                        memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[1] <= 67.85114097595215) {
                                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= -82.4000015258789) {
                                        if (input[6] <= 41.19286894798279) {
                                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[58] <= 8.448875546455383) {
                                            memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[68] <= 3.0475425720214844) {
                                    if (input[77] <= 147.0) {
                                        if (input[28] <= 3.352941155433655) {
                                            memcpy(var85, (double[]){0.0392156862745098, 0.7647058823529411, 0.13725490196078433, 0.058823529411764705}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.13333333333333333, 0.26666666666666666, 0.3333333333333333, 0.26666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[66] <= 1.6253011226654053) {
                                        if (input[75] <= 478.75) {
                                            memcpy(var85, (double[]){0.0, 0.6, 0.2, 0.2}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.5000000000000001, 0.03571428571428572, 0.4285714285714286, 0.03571428571428572}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[41] <= 97.46018981933594) {
                                            memcpy(var85, (double[]){0.0, 0.058823529411764705, 0.9411764705882353, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[10] <= -139.5) {
                                if (input[45] <= 3.9027379751205444) {
                                    memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[3] <= -5.400000095367432) {
                                        if (input[58] <= -1.1621899604797363) {
                                            memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.9565217391304348, 0.043478260869565216, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 45.30838584899902) {
                                            memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.5714285714285714, 0.0, 0.42857142857142855, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[23] <= 2.013253629207611) {
                                    memcpy(var85, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[56] <= 0.8770485818386078) {
                                        if (input[75] <= 1983.1000366210938) {
                                            memcpy(var85, (double[]){0.08333333333333333, 0.9166666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[21] <= 6.19349217414856) {
                                            memcpy(var85, (double[]){0.23469387755102042, 0.2857142857142857, 0.2755102040816326, 0.20408163265306123}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var85, (double[]){0.2222222222222222, 0.7777777777777778, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 159.8000030517578) {
                            if (input[68] <= 1.3244458436965942) {
                                memcpy(var85, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var85, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        memcpy(var85, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var16, var85, 4, var15);
    double var86[4];
    if (input[40] <= 48.02288246154785) {
        if (input[33] <= 1.0564882159233093) {
            if (input[70] <= -1.7603053450584412) {
                memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[16] <= 6.34826135635376) {
                    if (input[10] <= -203.625) {
                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[35] <= 3.1517536640167236) {
                            if (input[80] <= 0.4890918582677841) {
                                if (input[61] <= 0.38032299280166626) {
                                    if (input[47] <= 18.583333015441895) {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[60] <= -1.9297879934310913) {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[8] <= -75.5) {
                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[65] <= 1.5178436040878296) {
                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[23] <= 1.8933143615722656) {
                if (input[27] <= 0.5674418807029724) {
                    if (input[12] <= -120.1500015258789) {
                        if (input[35] <= 0.5755434334278107) {
                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[12] <= -269.75) {
                                if (input[55] <= -1.7238317728042603) {
                                    memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[18] <= 20.5) {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[80] <= -0.5915895700454712) {
                                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -111.54999923706055) {
                                    if (input[5] <= -128.5) {
                                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[25] <= -1.4820871353149414) {
                                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[68] <= 0.694316178560257) {
                                            memcpy(var86, (double[]){0.0, 0.0, 0.42857142857142855, 0.5714285714285714}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.17391304347826086, 0.6304347826086957, 0.10869565217391304, 0.08695652173913043}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[38] <= 2.109813690185547) {
                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[68] <= 1.1603869497776031) {
                            memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[16] <= 1.54713636636734) {
                                memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[78] <= 4102.0) {
                    if (input[6] <= 96.25980758666992) {
                        if (input[31] <= 0.8155858218669891) {
                            if (input[58] <= -1.2504450678825378) {
                                if (input[46] <= 28.107558250427246) {
                                    memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[43] <= 310.5) {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[63] <= 0.8929749727249146) {
                                    if (input[35] <= 3.7796345949172974) {
                                        if (input[51] <= 68.25618362426758) {
                                            memcpy(var86, (double[]){0.0, 0.8536585365853658, 0.12195121951219512, 0.024390243902439025}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.10256410256410256, 0.5384615384615384, 0.1794871794871795, 0.1794871794871795}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= -0.8883109092712402) {
                                            memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[23] <= 2.4601662158966064) {
                                        if (input[8] <= 110.4000015258789) {
                                            memcpy(var86, (double[]){0.09090909090909091, 0.0, 0.9090909090909091, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= 0.6614992618560791) {
                                            memcpy(var86, (double[]){0.13333333333333333, 0.5666666666666667, 0.23333333333333334, 0.06666666666666667}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[51] <= 245.99275970458984) {
                                memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[75] <= -608.9999847412109) {
                                    if (input[70] <= -3.911641240119934) {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[68] <= 3.5400784015655518) {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[32] <= 0.7327770292758942) {
                                            memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 0.5, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[80] <= -0.7129969000816345) {
                        if (input[8] <= 61.45000076293945) {
                            if (input[42] <= 2.535253345966339) {
                                memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[57] <= -0.34811072051525116) {
                            if (input[20] <= 0.6756294071674347) {
                                if (input[1] <= 55.680620193481445) {
                                    if (input[7] <= -171.0) {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[60] <= -0.432006374001503) {
                                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[46] <= 4.269342422485352) {
                                        if (input[42] <= 0.743105947971344) {
                                            memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[75] <= -390.6000061035156) {
                                    if (input[76] <= 5657.423095703125) {
                                        if (input[42] <= 3.449762225151062) {
                                            memcpy(var86, (double[]){0.6250000000000001, 0.04166666666666667, 0.29166666666666674, 0.04166666666666667}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[80] <= -0.5597289204597473) {
                                        if (input[77] <= -7440.0) {
                                            memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.6153846153846154, 0.11538461538461539, 0.2692307692307692, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 4.5) {
                                            memcpy(var86, (double[]){0.13114754098360656, 0.48360655737704916, 0.2540983606557377, 0.13114754098360656}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var86, (double[]){0.034482758620689655, 0.10344827586206896, 0.1724137931034483, 0.6896551724137931}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[65] <= 4.607209205627441) {
                                if (input[10] <= 217.75) {
                                    if (input[58] <= 12.005190372467041) {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[68] <= 3.8490359783172607) {
            if (input[0] <= 136.92499923706055) {
                memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[47] <= -2.153549373149872) {
                    if (input[15] <= 36.75) {
                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[53] <= 870.5) {
                if (input[33] <= 6.4865570068359375) {
                    if (input[12] <= -444.5) {
                        if (input[5] <= -175.9499969482422) {
                            memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[22] <= -2.057142913341522) {
                            memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[26] <= 5.1053760051727295) {
                                if (input[45] <= 63.594390869140625) {
                                    if (input[42] <= -6.877907037734985) {
                                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[70] <= 2.1513359546661377) {
                                    if (input[10] <= -322.4250030517578) {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 246.5) {
                                        memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var86, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[70] <= -6.010877847671509) {
                    if (input[65] <= 2.1973705291748047) {
                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var86, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[80] <= 0.8763840198516846) {
                        memcpy(var86, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var86, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var15, var86, 4, var14);
    double var87[4];
    if (input[35] <= 4.726902008056641) {
        if (input[11] <= 159.49331665039062) {
            if (input[38] <= 0.9199857711791992) {
                if (input[50] <= 52.44999885559082) {
                    if (input[12] <= -194.5) {
                        if (input[48] <= 94.0) {
                            if (input[76] <= 27.682743072509766) {
                                memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[8] <= -109.5) {
                                    if (input[7] <= -110.5) {
                                        memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[50] <= 17.549999713897705) {
                                memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[45] <= 27.6675443649292) {
                        if (input[30] <= 1.3683370351791382) {
                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= -270.9499969482422) {
                    if (input[10] <= -217.2249984741211) {
                        if (input[80] <= -0.12904061749577522) {
                            if (input[35] <= 1.2595494389533997) {
                                if (input[62] <= -3.491925001144409) {
                                    memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[33] <= 2.3542377948760986) {
                                if (input[72] <= -12.538167953491211) {
                                    if (input[50] <= -69.44999885559082) {
                                        if (input[43] <= 140.16666412353516) {
                                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[62] <= -6.476231098175049) {
                                            memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.7142857142857143, 0.0, 0.2857142857142857, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= -144.77499389648438) {
                                        if (input[76] <= 1620.1282958984375) {
                                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.8, 0.2, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[53] <= 76.5) {
                                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[44] <= 0.7750000059604645) {
                            if (input[37] <= 1.2156761288642883) {
                                if (input[18] <= 11.5) {
                                    memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[60] <= -1.218405306339264) {
                                if (input[81] <= -0.6949867010116577) {
                                    memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[1] <= 24.901148796081543) {
                                        if (input[75] <= 257.6000061035156) {
                                            memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[47] <= -2.1851582527160645) {
                        if (input[24] <= 0.9000000059604645) {
                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[7] <= -129.25) {
                            if (input[72] <= -241.6946563720703) {
                                if (input[53] <= 261.5) {
                                    memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 62.72747802734375) {
                                    if (input[76] <= 2381.8553466796875) {
                                        if (input[65] <= 0.8944499790668488) {
                                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.23809523809523808, 0.38095238095238093, 0.3333333333333333, 0.047619047619047616}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[48] <= 370.1666564941406) {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.33333333333333337, 0.0, 0.5000000000000001, 0.16666666666666669}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 9.469465732574463) {
                                        if (input[22] <= -4.733333349227905) {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.9629629629629629, 0.037037037037037035, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= -105.5) {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.13043478260869565, 0.43478260869565216, 0.43478260869565216, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[29] <= 0.9249999821186066) {
                                if (input[25] <= 6.862708568572998) {
                                    if (input[36] <= 0.6555324196815491) {
                                        if (input[75] <= 116.9000015258789) {
                                            memcpy(var87, (double[]){0.8333333333333334, 0.05555555555555555, 0.0, 0.1111111111111111}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.28125, 0.40625, 0.28125, 0.03125}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[30] <= 2.7958709001541138) {
                                            memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[11] <= 26.15115451812744) {
                                    if (input[81] <= 0.22210382670164108) {
                                        if (input[1] <= 7.838104009628296) {
                                            memcpy(var87, (double[]){0.0, 0.125, 0.125, 0.75}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.7352941176470589, 0.17647058823529413, 0.08823529411764706}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= -173.00381469726562) {
                                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[18] <= 25.5) {
                                        if (input[37] <= 1.5757073760032654) {
                                            memcpy(var87, (double[]){0.6666666666666667, 0.06666666666666668, 0.13333333333333336, 0.13333333333333336}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.15384615384615385, 0.11538461538461539, 0.23076923076923078, 0.5}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[25] <= 0.360396146774292) {
                                            memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.24793388429752067, 0.34710743801652894, 0.30578512396694213, 0.09917355371900827}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[22] <= 0.9289915859699249) {
                if (input[0] <= -7.200000286102295) {
                    if (input[38] <= 2.9572454690933228) {
                        memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 75.640380859375) {
                        if (input[77] <= -6106.0) {
                            if (input[7] <= -141.5) {
                                if (input[71] <= 6.046647310256958) {
                                    memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[67] <= -2.756068706512451) {
                                    if (input[80] <= 0.843692809343338) {
                                        if (input[16] <= 49.56005859375) {
                                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[51] <= 415.5420684814453) {
                                        if (input[3] <= 157.0) {
                                            memcpy(var87, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 0.9375, 0.0625}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[62] <= -3.1150753498077393) {
                                if (input[61] <= 2.2789366245269775) {
                                    if (input[41] <= 4.051215291023254) {
                                        memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[36] <= 1.3664403557777405) {
                                        if (input[0] <= 61.27499961853027) {
                                            memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.8, 0.2, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[71] <= 10.395215511322021) {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[52] <= -101.0) {
                                    if (input[42] <= -4.988372087478638) {
                                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 233.91588592529297) {
                                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[36] <= 2.1991907358169556) {
                    if (input[16] <= 33.15383434295654) {
                        memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[78] <= 8235.0) {
                            if (input[63] <= 16.84096622467041) {
                                memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[60] <= -0.8103433847427368) {
                        memcpy(var87, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[55] <= 1.308899074792862) {
                            memcpy(var87, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[43] <= 0.8666666746139526) {
            if (input[6] <= 5.072234094142914) {
                memcpy(var87, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            memcpy(var87, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var14, var87, 4, var13);
    double var88[4];
    if (input[5] <= -157.9499969482422) {
        if (input[38] <= 3.675287365913391) {
            memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        if (input[38] <= 7.920766592025757) {
            if (input[45] <= 64.02600479125977) {
                if (input[50] <= -218.5250015258789) {
                    if (input[3] <= 26.799999237060547) {
                        if (input[23] <= 2.341216206550598) {
                            memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[82] <= 60.0) {
                            memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[70] <= 6.268129944801331) {
                                memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[30] <= 3.521302103996277) {
                        if (input[75] <= 203.3000030517578) {
                            if (input[27] <= -3.7887930870056152) {
                                if (input[57] <= -2.2460479736328125) {
                                    if (input[26] <= 6.537781715393066) {
                                        if (input[80] <= 0.8045043349266052) {
                                            memcpy(var88, (double[]){0.8611111111111112, 0.08333333333333333, 0.027777777777777776, 0.027777777777777776}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[73] <= 2.916030526161194) {
                                        memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[42] <= 0.39182692766189575) {
                                    if (input[0] <= -112.5) {
                                        if (input[52] <= 23.0) {
                                            memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[35] <= 0.6368066966533661) {
                                            memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.18518518518518517, 0.1111111111111111, 0.07407407407407407, 0.6296296296296297}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[76] <= 1619.7398071289062) {
                                        if (input[29] <= 0.32500000298023224) {
                                            memcpy(var88, (double[]){0.36363636363636365, 0.0, 0.45454545454545453, 0.18181818181818182}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.0925925925925926, 0.5185185185185186, 0.11111111111111112, 0.27777777777777785}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 0.6093021333217621) {
                                            memcpy(var88, (double[]){0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.42400000000000004, 0.24800000000000003, 0.25600000000000006, 0.07200000000000001}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 1.5) {
                                if (input[0] <= -6.8500001430511475) {
                                    if (input[62] <= -2.592724323272705) {
                                        if (input[38] <= 2.96088445186615) {
                                            memcpy(var88, (double[]){0.125, 0.5, 0.375, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.26666666666666666, 0.0, 0.6666666666666666, 0.06666666666666667}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[10] <= -208.8499984741211) {
                                            memcpy(var88, (double[]){0.25, 0.125, 0.625, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.034482758620689655, 0.0, 0.9655172413793104, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[81] <= -0.5837164223194122) {
                                        if (input[6] <= 15.936951160430908) {
                                            memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[33] <= 2.8842732906341553) {
                                            memcpy(var88, (double[]){0.0, 0.25, 0.0, 0.75}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.2857142857142857, 0.5714285714285714, 0.14285714285714285, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[68] <= 3.2657289505004883) {
                                    if (input[23] <= 1.9102316498756409) {
                                        if (input[51] <= 48.775522232055664) {
                                            memcpy(var88, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.8918918918918919, 0.0, 0.10810810810810811, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[32] <= 0.1488688662648201) {
                                            memcpy(var88, (double[]){0.06666666666666667, 0.0, 0.6, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.09183673469387756, 0.6122448979591837, 0.21428571428571427, 0.08163265306122448}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[10] <= -90.42500305175781) {
                                        if (input[16] <= 9.808281898498535) {
                                            memcpy(var88, (double[]){0.8947368421052632, 0.0, 0.0, 0.10526315789473684}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 42.53654098510742) {
                                            memcpy(var88, (double[]){0.12280701754385966, 0.10526315789473685, 0.6666666666666667, 0.10526315789473685}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var88, (double[]){0.5789473684210527, 0.3684210526315789, 0.05263157894736842, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[23] <= 16.315789699554443) {
                            memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[21] <= 3.9540315866470337) {
                                if (input[61] <= 6.262939929962158) {
                                    if (input[37] <= 1.22757089138031) {
                                        memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[63] <= 18.692753791809082) {
                                    memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[26] <= 5.322655916213989) {
                    if (input[42] <= 2.9335354566574097) {
                        if (input[80] <= 0.1874130219221115) {
                            if (input[58] <= 4.6287009716033936) {
                                if (input[0] <= -148.0) {
                                    if (input[15] <= 0.9999999701976776) {
                                        memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var88, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[38] <= 6.751058578491211) {
                                memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[48] <= 102.0) {
                            memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[50] <= 15.674999713897705) {
                                if (input[10] <= 236.62500762939453) {
                                    memcpy(var88, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[3] <= 138.8000030517578) {
                        memcpy(var88, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var88, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var13, var88, 4, var12);
    double var89[4];
    if (input[38] <= 7.850174427032471) {
        if (input[25] <= 5.948552846908569) {
            if (input[66] <= 2.1422144174575806) {
                if (input[50] <= -238.92499542236328) {
                    if (input[16] <= 2.4275379180908203) {
                        if (input[77] <= -2319.0) {
                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[70] <= -166.78072357177734) {
                            memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[38] <= 3.650910258293152) {
                        if (input[67] <= 0.7443720698356628) {
                            if (input[67] <= -1.8406922221183777) {
                                if (input[81] <= -0.35629478842020035) {
                                    if (input[20] <= 3.5563836097717285) {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[7] <= -99.5) {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[75] <= 441.6000061035156) {
                                        if (input[30] <= 1.2344074249267578) {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 0.4, 0.6}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[18] <= 18.0) {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[71] <= 14.552017211914062) {
                                    if (input[52] <= -119.0) {
                                        if (input[3] <= 2.799999952316284) {
                                            memcpy(var89, (double[]){0.2622950819672132, 0.19672131147540986, 0.4754098360655738, 0.0655737704918033}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.20833333333333334, 0.4722222222222222, 0.1527777777777778, 0.16666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[44] <= 0.8250000178813934) {
                                            memcpy(var89, (double[]){0.20689655172413793, 0.1724137931034483, 0.3275862068965517, 0.29310344827586204}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 0.06666666666666667, 0.9333333333333333}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[58] <= 4.6238017082214355) {
                                        if (input[21] <= 0.3696628510951996) {
                                            memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.04, 0.0, 0.96, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[81] <= 0.6427916586399078) {
                                if (input[25] <= 4.282552480697632) {
                                    if (input[51] <= 5.769254684448242) {
                                        if (input[3] <= -99.0) {
                                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= -95.0999984741211) {
                                            memcpy(var89, (double[]){0.3333333333333333, 0.2222222222222222, 0.4444444444444444, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.8, 0.14285714285714285, 0.05714285714285714, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[57] <= -4.63411808013916) {
                                    if (input[35] <= 1.8933404684066772) {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[22] <= 0.8554216623306274) {
                                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[72] <= -14.118320941925049) {
                                        memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[68] <= 1.8851198554039001) {
                            if (input[20] <= 0.7494330704212189) {
                                if (input[43] <= 7.520000219345093) {
                                    if (input[73] <= 12.977099418640137) {
                                        memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[32] <= 0.12568437680602074) {
                                        memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[18] <= 10.0) {
                                    memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[3] <= 171.5) {
                                        if (input[46] <= 2.7444844245910645) {
                                            memcpy(var89, (double[]){0.5, 0.0, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[65] <= 1.2550201416015625) {
                                if (input[10] <= 176.4250030517578) {
                                    if (input[2] <= -116.70000076293945) {
                                        memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[77] <= -2369.0) {
                                            memcpy(var89, (double[]){0.5384615384615384, 0.1794871794871795, 0.23076923076923078, 0.05128205128205128}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.15, 0.15, 0.65, 0.05}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[45] <= 31.085079193115234) {
                                        memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[13] <= -106.0) {
                                    if (input[2] <= -152.0) {
                                        if (input[16] <= 4.352319717407227) {
                                            memcpy(var89, (double[]){0.5, 0.5, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 0.6, 0.4}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[81] <= -0.6708270013332367) {
                                        if (input[28] <= 3.939655065536499) {
                                            memcpy(var89, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 12.904580116271973) {
                                            memcpy(var89, (double[]){0.7425742574257426, 0.10891089108910891, 0.12871287128712872, 0.019801980198019802}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.3103448275862069, 0.10344827586206896, 0.2413793103448276, 0.3448275862068966}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= 136.9749984741211) {
                    if (input[73] <= 11.782442569732666) {
                        if (input[27] <= 1.0740761756896973) {
                            if (input[48] <= 97.86904907226562) {
                                memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[26] <= 6.63437032699585) {
                                    memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[76] <= 5549.695556640625) {
                                if (input[75] <= -265.70000076293945) {
                                    memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[81] <= 0.8800829946994781) {
                            if (input[22] <= 1.4320679306983948) {
                                if (input[76] <= 2847.6390380859375) {
                                    memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[76] <= 5769.414794921875) {
                                        if (input[18] <= 323.0) {
                                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[75] <= 322.3499755859375) {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[11] <= 121.26361846923828) {
                                    memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[3] <= 184.3000030517578) {
                                        memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[55] <= 4.0600279569625854) {
                                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[60] <= 8.154647827148438) {
                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[42] <= 3.3082317113876343) {
                if (input[50] <= 79.5250015258789) {
                    if (input[45] <= 55.446685791015625) {
                        if (input[53] <= 484.5) {
                            if (input[78] <= 2799.0) {
                                if (input[55] <= 0.4172389954328537) {
                                    memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[8] <= 296.5) {
                                    if (input[5] <= -23.700000762939453) {
                                        memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[13] <= 45.70000076293945) {
                            if (input[66] <= 0.9228979349136353) {
                                if (input[42] <= 2.712626338005066) {
                                    memcpy(var89, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var89, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[28] <= 44.30000114440918) {
                    memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    memcpy(var89, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var89, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var12, var89, 4, var11);
    double var90[4];
    if (input[45] <= 63.802995681762695) {
        if (input[5] <= -161.0) {
            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        } else {
            if (input[12] <= -40.64999961853027) {
                if (input[36] <= 2.3103809356689453) {
                    if (input[1] <= 129.01099014282227) {
                        if (input[67] <= 0.5728886723518372) {
                            if (input[33] <= 1.4595999121665955) {
                                if (input[77] <= -2463.0) {
                                    if (input[72] <= -4.022900700569153) {
                                        if (input[47] <= 1.25789475440979) {
                                            memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.037037037037037035, 0.9629629629629629, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[30] <= 1.2333133816719055) {
                                        if (input[53] <= -37.0) {
                                            memcpy(var90, (double[]){0.2, 0.3333333333333333, 0.4, 0.06666666666666667}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.0, 0.17647058823529413, 0.8235294117647058}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[13] <= 440.8500061035156) {
                                    if (input[0] <= 48.02499961853027) {
                                        if (input[5] <= 31.25) {
                                            memcpy(var90, (double[]){0.2512562814070352, 0.2763819095477387, 0.3266331658291458, 0.14572864321608042}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.65, 0.05, 0.275, 0.025}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 3182.747802734375) {
                                            memcpy(var90, (double[]){0.08571428571428572, 0.6857142857142857, 0.22857142857142856, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0625, 0.25, 0.6875, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[32] <= 1.1821927428245544) {
                                        memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[45] <= 39.525461196899414) {
                                if (input[32] <= 0.18200066685676575) {
                                    if (input[23] <= 1.3478261232376099) {
                                        if (input[70] <= -0.8156488388776779) {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[81] <= -0.7028937041759491) {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.8947368421052632, 0.05263157894736842, 0.0, 0.05263157894736842}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[20] <= 0.6340420842170715) {
                                        if (input[78] <= 6805.0) {
                                            memcpy(var90, (double[]){0.21428571428571427, 0.7321428571428571, 0.03571428571428571, 0.017857142857142856}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.875, 0.125, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[81] <= -0.33924026787281036) {
                                            memcpy(var90, (double[]){0.8461538461538461, 0.07692307692307693, 0.07692307692307693, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.28888888888888886, 0.37777777777777777, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[78] <= 668.0) {
                                    memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[75] <= 211.25) {
                                        memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[11] <= 46.16505527496338) {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[56] <= 0.876487523317337) {
                    if (input[73] <= -150.51526641845703) {
                        if (input[50] <= -217.0250015258789) {
                            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[28] <= 2.699699640274048) {
                                if (input[33] <= 1.2729031443595886) {
                                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[58] <= 0.3246435672044754) {
                                        memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[40] <= 11.85816478729248) {
                        if (input[32] <= 0.9658122658729553) {
                            if (input[11] <= 102.57938385009766) {
                                if (input[25] <= 1.2317615151405334) {
                                    if (input[70] <= -163.36965942382812) {
                                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[21] <= 0.8905930519104004) {
                                if (input[37] <= 1.068539321422577) {
                                    memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[41] <= 2.9582671523094177) {
                                    memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[6] <= 40.121002197265625) {
                            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[3] <= 246.5) {
                                if (input[22] <= 2.055355191230774) {
                                    if (input[0] <= 81.375) {
                                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[13] <= 408.8500061035156) {
                                            memcpy(var90, (double[]){0.9545454545454546, 0.0, 0.045454545454545456, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.52, 0.04, 0.04, 0.4}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[71] <= 12.482612133026123) {
                                        if (input[81] <= -0.5411437600851059) {
                                            memcpy(var90, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[53] <= 329.0) {
                                    if (input[18] <= 173.5) {
                                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[5] <= 166.5749969482422) {
                                            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= 151.4250030517578) {
                                        if (input[53] <= 421.0) {
                                            memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[66] <= 0.19995971769094467) {
            if (input[75] <= 160.6500015258789) {
                if (input[38] <= 12.667958974838257) {
                    if (input[15] <= 0.9999999701976776) {
                        memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[65] <= 0.6900949478149414) {
                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 139.20000457763672) {
                if (input[21] <= 7.268732070922852) {
                    if (input[81] <= -0.2643759399652481) {
                        memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[81] <= -0.5636107325553894) {
                    if (input[30] <= 3.7254605293273926) {
                        if (input[33] <= 5.328333139419556) {
                            memcpy(var90, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[35] <= 3.002135396003723) {
                                memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[73] <= 29.122138023376465) {
                                    memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var90, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[38] <= 1.8794326782226562) {
                        memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[0] <= 55.32500076293945) {
                            memcpy(var90, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var90, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var11, var90, 4, var10);
    double var91[4];
    if (input[35] <= 4.613385200500488) {
        if (input[67] <= -3.312671184539795) {
            if (input[63] <= 9.514174938201904) {
                if (input[38] <= 6.645905494689941) {
                    if (input[76] <= 3113.024169921875) {
                        memcpy(var91, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[57] <= -3.1400831937789917) {
                        memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[68] <= 3.9630388021469116) {
                    if (input[51] <= 136.26583099365234) {
                        memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[13] <= 511.75) {
                if (input[12] <= -479.5) {
                    memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[73] <= 41.00381851196289) {
                        if (input[26] <= 0.5710967183113098) {
                            if (input[3] <= 2.399999976158142) {
                                if (input[60] <= -0.7615862786769867) {
                                    if (input[21] <= 0.3276519477367401) {
                                        if (input[50] <= 32.77499961853027) {
                                            memcpy(var91, (double[]){0.625, 0.25, 0.125, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.0, 0.875, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[15] <= 12.400000095367432) {
                                            memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= -111.1500015258789) {
                                        memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[15] <= 4.574999809265137) {
                                            memcpy(var91, (double[]){0.0, 0.16666666666666666, 0.7222222222222222, 0.1111111111111111}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.7, 0.0, 0.1, 0.2}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[22] <= 1.5337867736816406) {
                                    memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[62] <= -1.5478984713554382) {
                                        memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[67] <= 0.6391109526157379) {
                                if (input[22] <= 0.8001663088798523) {
                                    if (input[77] <= -6182.0) {
                                        if (input[83] <= 0.75) {
                                            memcpy(var91, (double[]){0.6086956521739131, 0.0, 0.3333333333333333, 0.057971014492753624}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.2631578947368421, 0.05263157894736842, 0.21052631578947367, 0.47368421052631576}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[81] <= -0.548530787229538) {
                                            memcpy(var91, (double[]){0.4186046511627907, 0.37209302325581395, 0.1744186046511628, 0.03488372093023256}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.1656441717791411, 0.22699386503067484, 0.3128834355828221, 0.294478527607362}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= -1.400000000372529) {
                                        if (input[32] <= 0.578242689371109) {
                                            memcpy(var91, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.058823529411764705, 0.058823529411764705, 0.8823529411764706, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[83] <= 0.75) {
                                            memcpy(var91, (double[]){0.07575757575757576, 0.21212121212121213, 0.06060606060606061, 0.6515151515151515}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.34615384615384615, 0.19230769230769232, 0.2692307692307692, 0.19230769230769232}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[66] <= 1.9644494652748108) {
                                    if (input[58] <= -1.6435861587524414) {
                                        if (input[10] <= -139.27499771118164) {
                                            memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.0, 0.4, 0.6, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[24] <= 0.02500000037252903) {
                                            memcpy(var91, (double[]){0.21428571428571427, 0.35714285714285715, 0.42857142857142855, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var91, (double[]){0.6190476190476191, 0.22857142857142856, 0.14285714285714285, 0.009523809523809525}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[62] <= -3.7080769538879395) {
                    if (input[55] <= 0.871973529458046) {
                        memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[45] <= 31.91854763031006) {
                            memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[23] <= 14.770833492279053) {
                        memcpy(var91, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[6] <= 4.330732047557831) {
            memcpy(var91, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            if (input[51] <= 705.5573120117188) {
                if (input[81] <= -0.5355675220489502) {
                    if (input[31] <= 0.2821597009897232) {
                        memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var91, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var91, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        }
    }
    add_vectors(var10, var91, 4, var9);
    double var92[4];
    if (input[35] <= 4.777108907699585) {
        if (input[25] <= 5.816256046295166) {
            if (input[65] <= 0.8228089809417725) {
                if (input[2] <= -20.200000762939453) {
                    if (input[78] <= 2948.0) {
                        if (input[65] <= 0.7460785210132599) {
                            if (input[63] <= 1.129123866558075) {
                                if (input[82] <= 35.0) {
                                    if (input[32] <= 0.2242656908929348) {
                                        memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[36] <= 0.054344819858670235) {
                                            memcpy(var92, (double[]){0.0, 0.0, 0.8, 0.2}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[25] <= 2.4199904203414917) {
                                        memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[25] <= 2.601187586784363) {
                                    memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[5] <= -114.20000076293945) {
                                if (input[3] <= -112.5) {
                                    if (input[67] <= 0.5587580502033234) {
                                        memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[30] <= 1.394178330898285) {
                                    memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[38] <= 3.5842411518096924) {
                            if (input[70] <= 6.579580307006836) {
                                if (input[28] <= 19.9375) {
                                    if (input[27] <= 0.9883720874786377) {
                                        if (input[77] <= -10883.0) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.02631578947368421, 0.0, 0.9210526315789473, 0.05263157894736842}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[80] <= -0.725330263376236) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[31] <= 0.7011851370334625) {
                                        memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[36] <= 1.3122963905334473) {
                                if (input[57] <= -3.214471459388733) {
                                    if (input[17] <= 2.5) {
                                        memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[23] <= 2.433823585510254) {
                                        memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[46] <= 2.488823354244232) {
                                            memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.25, 0.75, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[80] <= -0.534436970949173) {
                                    if (input[6] <= 89.5118408203125) {
                                        if (input[70] <= -1.6269084811210632) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[42] <= 3.6113672256469727) {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[66] <= 0.9054928719997406) {
                        if (input[2] <= -18.200000762939453) {
                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[28] <= 1.7567567825317383) {
                                memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[20] <= 3.801810145378113) {
                            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                if (input[35] <= 0.6245363354682922) {
                    memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[7] <= -251.0) {
                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[66] <= 0.6542767882347107) {
                            if (input[37] <= 1.4816380143165588) {
                                if (input[35] <= 1.833015501499176) {
                                    if (input[1] <= 12.623188972473145) {
                                        if (input[52] <= 14.5) {
                                            memcpy(var92, (double[]){0.8461538461538461, 0.0, 0.15384615384615385, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.6, 0.4, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[51] <= 22.877790927886963) {
                                            memcpy(var92, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.8947368421052632, 0.0, 0.10526315789473684}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[23] <= 6.5) {
                                        if (input[27] <= -11.199999809265137) {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.7619047619047619, 0.047619047619047616, 0.14285714285714285, 0.047619047619047616}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[25] <= -0.9899474680423737) {
                                    if (input[5] <= -127.57500076293945) {
                                        if (input[43] <= 4.12971568107605) {
                                            memcpy(var92, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[57] <= -2.398844838142395) {
                                            memcpy(var92, (double[]){0.0, 0.16666666666666666, 0.5, 0.3333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.8, 0.15, 0.05}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[2] <= -10.700000405311584) {
                                        if (input[46] <= 1.6704915761947632) {
                                            memcpy(var92, (double[]){0.6, 0.4, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.9310344827586207, 0.06896551724137931, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[17] <= 3.5) {
                                if (input[78] <= 11374.0) {
                                    if (input[40] <= 3.2227736711502075) {
                                        if (input[30] <= 0.45969365537166595) {
                                            memcpy(var92, (double[]){0.3333333333333333, 0.0, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.037037037037037035, 0.14814814814814814, 0.8148148148148148, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 413.8500061035156) {
                                            memcpy(var92, (double[]){0.577922077922078, 0.18831168831168832, 0.2012987012987013, 0.032467532467532464}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.21153846153846154, 0.36538461538461536, 0.23076923076923078, 0.19230769230769232}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[20] <= 0.7260611057281494) {
                                        if (input[0] <= 35.625) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[52] <= -2253.0) {
                                            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[66] <= 2.014902114868164) {
                                    if (input[36] <= 1.6375949382781982) {
                                        if (input[47] <= 0.5731707215309143) {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.43859649122807015, 0.10526315789473684, 0.017543859649122806, 0.43859649122807015}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[50] <= 5.399999618530273) {
                                            memcpy(var92, (double[]){0.05263157894736842, 0.0, 0.0, 0.9473684210526315}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[6] <= 162.78279876708984) {
                                        if (input[3] <= 201.8000030517578) {
                                            memcpy(var92, (double[]){0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.875, 0.0625, 0.0625}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[15] <= 26.375) {
                memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[30] <= 3.0833901166915894) {
                    if (input[8] <= 296.5) {
                        if (input[25] <= 6.191594839096069) {
                            if (input[70] <= 1.2582061290740967) {
                                memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[47] <= 5.017857074737549) {
                                if (input[6] <= 71.77923583984375) {
                                    if (input[22] <= -0.7220588326454163) {
                                        if (input[35] <= 1.185344398021698) {
                                            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.5, 0.5, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[61] <= 2.9731000661849976) {
                                        if (input[76] <= 1761.1019897460938) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.1, 0.9, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[65] <= 3.19573438167572) {
                                            memcpy(var92, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[48] <= 295.3499984741211) {
                                    memcpy(var92, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        if (input[49] <= 0.32500000298023224) {
            memcpy(var92, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
        } else {
            memcpy(var92, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    }
    add_vectors(var9, var92, 4, var8);
    double var93[4];
    if (input[25] <= 5.948552846908569) {
        if (input[38] <= 7.920766592025757) {
            if (input[36] <= 0.49936409294605255) {
                if (input[50] <= -274.9250030517578) {
                    memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[31] <= 0.6531294286251068) {
                        if (input[80] <= -0.6753296554088593) {
                            if (input[61] <= 1.0645504593849182) {
                                if (input[44] <= 0.07500000111758709) {
                                    memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[52] <= -9.5) {
                                        memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[22] <= 0.5460526347160339) {
                                    memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[23] <= 1.7841615080833435) {
                                if (input[75] <= 220.8000030517578) {
                                    if (input[10] <= -169.17499542236328) {
                                        if (input[38] <= 0.8682598173618317) {
                                            memcpy(var93, (double[]){0.0, 0.5909090909090909, 0.36363636363636365, 0.045454545454545456}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.53125, 0.3125, 0.09375, 0.0625}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[27] <= 0.10185185074806213) {
                                            memcpy(var93, (double[]){0.1875, 0.0, 0.0, 0.8125}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.5, 0.16666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[11] <= 33.45320129394531) {
                                        if (input[38] <= 0.9604826867580414) {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.05555555555555555, 0.16666666666666666, 0.7777777777777778, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[38] <= 2.7377036809921265) {
                                            memcpy(var93, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.8, 0.0, 0.2, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[6] <= 21.71449375152588) {
                                    if (input[2] <= -14.700000286102295) {
                                        memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[62] <= -2.1819812059402466) {
                                            memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[71] <= 4.314587593078613) {
                                        if (input[68] <= 8.403285503387451) {
                                            memcpy(var93, (double[]){0.14285714285714285, 0.7142857142857143, 0.11428571428571428, 0.02857142857142857}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[25] <= 3.7419413328170776) {
                                            memcpy(var93, (double[]){0.10526315789473685, 0.052631578947368425, 0.8157894736842106, 0.026315789473684213}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[63] <= 4.3206058740615845) {
                            if (input[61] <= 1.78355872631073) {
                                if (input[33] <= 2.251129984855652) {
                                    memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[47] <= 2.727787137031555) {
                                memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[73] <= 13.202290058135986) {
                    if (input[5] <= -155.8499984741211) {
                        memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[38] <= 6.980366468429565) {
                            if (input[65] <= 2.6089247465133667) {
                                if (input[48] <= 16.468181610107422) {
                                    if (input[42] <= 3.5236841440200806) {
                                        if (input[16] <= 9.657125473022461) {
                                            memcpy(var93, (double[]){0.7567567567567568, 0.14864864864864866, 0.04054054054054054, 0.05405405405405406}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.8333333333333334, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[20] <= 1.7756056785583496) {
                                            memcpy(var93, (double[]){0.23076923076923078, 0.38461538461538464, 0.38461538461538464, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.125, 0.0, 0.875}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[45] <= 44.1229190826416) {
                                        if (input[65] <= 1.2335248589515686) {
                                            memcpy(var93, (double[]){0.023809523809523808, 0.5, 0.19047619047619047, 0.2857142857142857}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.2857142857142857, 0.24489795918367346, 0.46938775510204084, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[45] <= 73.89988327026367) {
                                            memcpy(var93, (double[]){0.7027027027027027, 0.08108108108108109, 0.1891891891891892, 0.02702702702702703}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.16666666666666666, 0.25, 0.0, 0.5833333333333334}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[61] <= 8.411420345306396) {
                                    if (input[45] <= 63.81185531616211) {
                                        if (input[78] <= 2345.0) {
                                            memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.9714285714285714, 0.02857142857142857, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[33] <= 6.7233617305755615) {
                                if (input[6] <= 84.29642486572266) {
                                    if (input[40] <= 4.566969037055969) {
                                        memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[77] <= -7439.0) {
                                            memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.08333333333333333, 0.0, 0.9166666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 97.375) {
                                        if (input[29] <= 0.9249999821186066) {
                                            memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[18] <= 326.0) {
                        if (input[73] <= 44.332061767578125) {
                            if (input[66] <= 2.3261945247650146) {
                                if (input[75] <= -139.0) {
                                    if (input[40] <= 37.45831108093262) {
                                        if (input[8] <= 208.5999984741211) {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.75, 0.0, 0.0, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[76] <= 4252.9327392578125) {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[83] <= 0.75) {
                                        if (input[22] <= 0.8442239463329315) {
                                            memcpy(var93, (double[]){0.19047619047619052, 0.33333333333333337, 0.14285714285714288, 0.33333333333333337}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 2.0) {
                                            memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[58] <= 23.838313102722168) {
                                    if (input[52] <= -204.0) {
                                        memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[13] <= 500.1000061035156) {
                                            memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[40] <= 31.973711013793945) {
                                        memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[61] <= 6.3261799812316895) {
                                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
        }
    } else {
        if (input[42] <= 2.5089224576950073) {
            if (input[80] <= -0.5506713688373566) {
                if (input[30] <= 2.0093343257904053) {
                    memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                if (input[21] <= 4.287543773651123) {
                    if (input[27] <= -0.9388322532176971) {
                        memcpy(var93, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[73] <= 15.232824325561523) {
                        if (input[68] <= 1.4743740558624268) {
                            memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[44] <= 0.9249999821186066) {
                                memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[3] <= 141.3000030517578) {
                                    memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 41.47955513000488) {
                memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            } else {
                if (input[33] <= 7.1524927616119385) {
                    if (input[8] <= 233.5) {
                        memcpy(var93, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var93, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var93, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var8, var93, 4, var7);
    double var94[4];
    if (input[42] <= 0.4037037044763565) {
        if (input[38] <= 1.6620625257492065) {
            if (input[77] <= 147.0) {
                if (input[77] <= 23.0) {
                    if (input[27] <= -0.9493780136108398) {
                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[10] <= -234.5500030517578) {
                            if (input[32] <= 1.2061415910720825) {
                                memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[62] <= -1.1156001091003418) {
                                memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
            }
        } else {
            if (input[81] <= -0.26175645738840103) {
                if (input[8] <= -54.25) {
                    memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[80] <= -0.21112645417451859) {
                        if (input[66] <= 1.2404045164585114) {
                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[67] <= -1.2433744072914124) {
                    if (input[37] <= -1.4256043434143066) {
                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[60] <= -1.466332197189331) {
                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[46] <= 67.82415580749512) {
                                if (input[28] <= 3.375) {
                                    memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[33] <= 2.763606071472168) {
                                    memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[75] <= -587.4000244140625) {
                                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[7] <= -174.0) {
                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[7] <= -168.25) {
                            if (input[1] <= 29.009653091430664) {
                                memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if (input[25] <= 6.1336140632629395) {
            if (input[47] <= 8.175812721252441) {
                if (input[72] <= -12.553435325622559) {
                    if (input[11] <= 21.22345542907715) {
                        if (input[80] <= -0.4928194135427475) {
                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[17] <= 3.5) {
                            if (input[77] <= -2839.0) {
                                if (input[56] <= 1.092606782913208) {
                                    if (input[36] <= 0.5125064253807068) {
                                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[42] <= 4.038461446762085) {
                                            memcpy(var94, (double[]){0.8125, 0.0, 0.1875, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[44] <= 0.9749999940395355) {
                                        if (input[60] <= -3.3948370218276978) {
                                            memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.2, 0.2, 0.6, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[40] <= 91.86334228515625) {
                                            memcpy(var94, (double[]){0.9705882352941176, 0.0, 0.0, 0.029411764705882353}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[53] <= 256.5) {
                                    if (input[20] <= 1.1494258046150208) {
                                        if (input[11] <= 61.42601203918457) {
                                            memcpy(var94, (double[]){0.6190476190476191, 0.09523809523809523, 0.2857142857142857, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 0.18181818181818182, 0.8181818181818182, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[78] <= 5793.0) {
                                            memcpy(var94, (double[]){0.05, 0.05, 0.9, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[78] <= 5760.0) {
                                if (input[13] <= 77.69999694824219) {
                                    if (input[68] <= 3.6809054613113403) {
                                        if (input[31] <= 0.3722146302461624) {
                                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.9230769230769231, 0.07692307692307693, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[73] <= -151.98473358154297) {
                                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[1] <= 61.33061981201172) {
                                            memcpy(var94, (double[]){0.0, 0.7272727272727273, 0.0, 0.2727272727272727}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.7777777777777778, 0.0, 0.2222222222222222, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[20] <= 2.739377021789551) {
                                    if (input[53] <= 24.0) {
                                        if (input[45] <= 8.841093301773071) {
                                            memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[3] <= 202.3000030517578) {
                                        if (input[65] <= 2.1879701614379883) {
                                            memcpy(var94, (double[]){0.0, 0.14285714285714285, 0.8571428571428571, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[40] <= 37.12095832824707) {
                                            memcpy(var94, (double[]){0.6, 0.4, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[66] <= 0.6648183465003967) {
                        if (input[28] <= 0.5121951252222061) {
                            if (input[66] <= 0.48903004825115204) {
                                if (input[81] <= -0.2712376266717911) {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[5] <= -55.375) {
                                if (input[45] <= 21.42959499359131) {
                                    if (input[38] <= 4.289423108100891) {
                                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[53] <= -31.5) {
                            if (input[78] <= 3198.0) {
                                memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[33] <= 1.0542960166931152) {
                                    if (input[72] <= -6.790076017379761) {
                                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[47] <= 3.1250646114349365) {
                                if (input[63] <= -1.2705605626106262) {
                                    if (input[60] <= -3.6344854831695557) {
                                        memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[22] <= 0.8984408378601074) {
                                        if (input[40] <= 5.3263373374938965) {
                                            memcpy(var94, (double[]){0.875, 0.0, 0.0625, 0.0625}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.2727272727272727, 0.07272727272727272, 0.6181818181818182, 0.03636363636363636}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 79.32500076293945) {
                                    if (input[25] <= 5.648392200469971) {
                                        if (input[2] <= -70.70000076293945) {
                                            memcpy(var94, (double[]){0.28, 0.2, 0.52, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.08571428571428572, 0.7428571428571429, 0.14285714285714285, 0.02857142857142857}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 148.21642303466797) {
                                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.875, 0.0, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[13] <= 378.90000915527344) {
                                        memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[76] <= 3739.147216796875) {
                                            memcpy(var94, (double[]){0.09523809523809523, 0.14285714285714285, 0.19047619047619047, 0.5714285714285714}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 0.125, 0.8125, 0.0625}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[58] <= -0.7043765783309937) {
                    if (input[38] <= 2.3833333253860474) {
                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[57] <= -2.1046221256256104) {
                            if (input[31] <= 0.5195216536521912) {
                                if (input[16] <= 3.058329224586487) {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[45] <= 33.98720169067383) {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[37] <= 1.6426125168800354) {
                        if (input[23] <= -1.2000000476837158) {
                            if (input[13] <= -153.5) {
                                memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[16] <= 5.53557562828064) {
                                if (input[76] <= 1451.7853393554688) {
                                    if (input[75] <= 194.89999389648438) {
                                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[33] <= 1.3935185074806213) {
                                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[50] <= -185.8249969482422) {
                            memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[0] <= 10.650000095367432) {
                                if (input[21] <= 0.23518039286136627) {
                                    memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] <= 63.218536376953125) {
                if (input[35] <= 1.114954650402069) {
                    memcpy(var94, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            } else {
                if (input[70] <= 2.995801568031311) {
                    if (input[17] <= 3.5) {
                        if (input[75] <= 116.19999694824219) {
                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[21] <= 5.274501323699951) {
                            memcpy(var94, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[10] <= 134.375) {
                        memcpy(var94, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var94, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var7, var94, 4, var6);
    double var95[4];
    if (input[36] <= 1.559267282485962) {
        if (input[65] <= 1.433748483657837) {
            if (input[78] <= 3231.0) {
                if (input[68] <= 0.8786129057407379) {
                    if (input[46] <= 13.796854496002197) {
                        if (input[78] <= 261.0) {
                            if (input[37] <= 0.8759886026382446) {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[58] <= -0.7432943284511566) {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[38] <= 0.7137532532215118) {
                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[76] <= 287.60326385498047) {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[50] <= -287.3000030517578) {
                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[1] <= 17.89903736114502) {
                            if (input[42] <= 4.121621608734131) {
                                if (input[73] <= -144.98091888427734) {
                                    if (input[15] <= 4.625) {
                                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[50] <= 57.67499923706055) {
                                        if (input[37] <= 0.3199141174554825) {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.6071428571428571, 0.14285714285714285, 0.21428571428571427, 0.03571428571428571}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[28] <= 2.7930314540863037) {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[36] <= 0.7271440625190735) {
                                if (input[38] <= 2.4119287729263306) {
                                    if (input[67] <= 0.6225853264331818) {
                                        if (input[57] <= -3.8251973390579224) {
                                            memcpy(var95, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[58] <= 0.12680956721305847) {
                                        if (input[73] <= 9.125954151153564) {
                                            memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[56] <= 1.4089390635490417) {
                                            memcpy(var95, (double[]){0.0, 0.9565217391304348, 0.043478260869565216, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[72] <= -13.793892860412598) {
                                    if (input[55] <= -0.3530716150999069) {
                                        if (input[66] <= 0.352144718170166) {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[57] <= -2.6020662784576416) {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[50] <= -32.64999961853027) {
                                        if (input[12] <= -270.3999938964844) {
                                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0625, 0.25, 0.625, 0.0625}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[42] <= 0.3663594573736191) {
                                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[27] <= 1.0208871960639954) {
                    if (input[47] <= 9.035714149475098) {
                        if (input[72] <= -241.78244018554688) {
                            if (input[40] <= 27.785545349121094) {
                                memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[13] <= 36.70000076293945) {
                                if (input[20] <= 5.438706159591675) {
                                    if (input[63] <= 3.027544140815735) {
                                        if (input[35] <= 1.7714936137199402) {
                                            memcpy(var95, (double[]){0.5, 0.0, 0.5, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[63] <= 0.8260382115840912) {
                                    if (input[40] <= 5.7169671058654785) {
                                        if (input[76] <= 1694.8128662109375) {
                                            memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.33333333333333337, 0.0, 0.5000000000000001, 0.16666666666666669}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[35] <= 2.0113163590431213) {
                                        if (input[71] <= 5.6678855419158936) {
                                            memcpy(var95, (double[]){0.1, 0.1, 0.0, 0.8}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.18181818181818182, 0.09090909090909091, 0.5454545454545454, 0.18181818181818182}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[23] <= 1.8156617879867554) {
                                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.18823529411764706, 0.11764705882352941, 0.6823529411764706, 0.011764705882352941}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[42] <= 3.6973683834075928) {
                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[2] <= -7.599999904632568) {
                            if (input[58] <= 6.331343173980713) {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[50] <= -132.3249969482422) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[0] <= 45.32500171661377) {
                                    memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[38] <= 3.9777777194976807) {
                if (input[53] <= 241.5) {
                    if (input[53] <= 10.5) {
                        if (input[58] <= -0.7841320633888245) {
                            if (input[46] <= 2.613346815109253) {
                                if (input[58] <= -1.847878634929657) {
                                    memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[50] <= -68.3499984741211) {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[53] <= -46.5) {
                                if (input[43] <= 5.426532745361328) {
                                    if (input[26] <= 0.6452227830886841) {
                                        memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[57] <= -1.404797375202179) {
                                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[57] <= -7.095102787017822) {
                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[81] <= 0.6829796433448792) {
                                if (input[37] <= 1.2521668076515198) {
                                    if (input[41] <= 43.64271926879883) {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[27] <= -5.196428537368774) {
                                            memcpy(var95, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.16666666666666666, 0.8333333333333334, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[73] <= 15.816793441772461) {
                                        if (input[27] <= -1.811253547668457) {
                                            memcpy(var95, (double[]){0.2, 0.4, 0.2, 0.2}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[15] <= 17.875) {
                                    memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[27] <= -1.5067402124404907) {
                                        if (input[40] <= 3.071554660797119) {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.8333333333333334, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[61] <= 2.7069679498672485) {
                        if (input[42] <= -7.79998517036438) {
                            memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[31] <= 0.46480342745780945) {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[45] <= 5.519952297210693) {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[2] <= -23.0) {
                                        if (input[50] <= -63.5) {
                                            memcpy(var95, (double[]){0.2, 0.0, 0.0, 0.8}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[48] <= 277.5) {
                                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[56] <= 2.837817907333374) {
                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[31] <= 1.3416324853897095) {
                                if (input[45] <= 30.504112243652344) {
                                    memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[66] <= 1.821386992931366) {
                    if (input[3] <= -26.5) {
                        if (input[44] <= 0.5250000059604645) {
                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[68] <= 2.924558401107788) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[6] <= 157.13705444335938) {
                            if (input[73] <= 12.64503812789917) {
                                memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[46] <= 6.637682557106018) {
                                    if (input[60] <= -2.3290717601776123) {
                                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[16] <= 7.307952642440796) {
                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[65] <= 2.3455324172973633) {
                            if (input[51] <= 289.7538604736328) {
                                memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[67] <= -0.0228724405169487) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[27] <= -0.08832252025604248) {
            if (input[47] <= 3.206810712814331) {
                if (input[0] <= -87.45000076293945) {
                    memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[31] <= 2.839902639389038) {
                        if (input[43] <= 38.47500038146973) {
                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[61] <= 0.9011648893356323) {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[17] <= 1.5) {
                                    memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[41] <= 41.96687126159668) {
                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[42] <= 0.42500000074505806) {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[26] <= 10.833484172821045) {
                    if (input[10] <= -250.47500610351562) {
                        if (input[56] <= 0.28338194638490677) {
                            memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[80] <= -0.6507737934589386) {
                            if (input[52] <= -391.0) {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                }
            }
        } else {
            if (input[45] <= 41.55339241027832) {
                if (input[48] <= 91.95995712280273) {
                    if (input[62] <= -4.7289674282073975) {
                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                } else {
                    if (input[66] <= 2.050358295440674) {
                        if (input[80] <= -0.5469853281974792) {
                            if (input[77] <= -6581.0) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[49] <= 0.9749999940395355) {
                                    memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[78] <= 12141.0) {
                                memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[60] <= 7.171682357788086) {
                            if (input[58] <= 6.095868349075317) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[20] <= 3.84880793094635) {
                                    memcpy(var95, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[5] <= 60.05000114440918) {
                                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[20] <= 5.31444787979126) {
                                memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[6] <= 99.20130920410156) {
                    if (input[10] <= 174.9000015258789) {
                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[68] <= 12.87873888015747) {
                            memcpy(var95, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[65] <= 2.865072011947632) {
                        memcpy(var95, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var95, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var6, var95, 4, var5);
    double var96[4];
    if (input[36] <= 1.5912773609161377) {
        if (input[65] <= 0.8995992839336395) {
            if (input[61] <= 1.3962887525558472) {
                if (input[76] <= 1480.4859008789062) {
                    if (input[52] <= 16.5) {
                        if (input[75] <= 112.69999694824219) {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[2] <= -22.300000190734863) {
                                if (input[33] <= 2.1009587049484253) {
                                    if (input[43] <= 9.77879285812378) {
                                        if (input[46] <= 0.9594050943851471) {
                                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.375, 0.3125, 0.0625, 0.25}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[50] <= -43.75) {
                                        if (input[63] <= 3.3986403942108154) {
                                            memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[7] <= -119.0) {
                                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.0, 0.0, 0.4, 0.6}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[33] <= 1.0758155584335327) {
                                    if (input[13] <= 61.20000076293945) {
                                        memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[66] <= 0.09386025741696358) {
                            if (input[57] <= -0.7431745827198029) {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[30] <= 1.406690001487732) {
                                memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[50] <= -209.35000610351562) {
                        if (input[7] <= 12.899999618530273) {
                            if (input[60] <= -0.2364022135734558) {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[45] <= 55.19422912597656) {
                            if (input[35] <= 3.115865468978882) {
                                if (input[38] <= 2.493765950202942) {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[7] <= -11.600000381469727) {
                                        if (input[48] <= 370.1666564941406) {
                                            memcpy(var96, (double[]){0.044444444444444446, 0.022222222222222223, 0.9111111111111111, 0.022222222222222223}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[63] <= 1.3529384434223175) {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[27] <= -0.15554775297641754) {
                    if (input[81] <= -0.5996220409870148) {
                        memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[57] <= -3.51887845993042) {
                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[6] <= 86.65208435058594) {
                                if (input[3] <= 212.5) {
                                    memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[47] <= 2.727787137031555) {
                                    memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[41] <= 28.876042366027832) {
                        if (input[60] <= -0.8441956043243408) {
                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[52] <= -1723.5) {
                                memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[7] <= -36.5) {
                                    if (input[47] <= 4.241841435432434) {
                                        memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[20] <= 6.483963251113892) {
                if (input[23] <= 38.35000038146973) {
                    if (input[78] <= 11374.0) {
                        if (input[71] <= 78.56258392333984) {
                            if (input[5] <= -161.79999542236328) {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[73] <= 12.267175674438477) {
                                    if (input[77] <= -4775.0) {
                                        if (input[60] <= -3.578613042831421) {
                                            memcpy(var96, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.625, 0.06944444444444445, 0.1111111111111111, 0.19444444444444445}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[2] <= -215.0) {
                                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.35319148936170214, 0.3191489361702128, 0.22127659574468084, 0.10638297872340426}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[68] <= 5.627218246459961) {
                                        if (input[65] <= 1.1663745045661926) {
                                            memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.06666666666666667, 0.1, 0.36666666666666664, 0.4666666666666667}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[17] <= 6.0) {
                                            memcpy(var96, (double[]){0.1875, 0.6875, 0.125, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[47] <= 3.1996337175369263) {
                            if (input[75] <= 814.1499633789062) {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[61] <= 1.2894947528839111) {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[0] <= 56.274999141693115) {
                                        memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[21] <= 0.5816691815853119) {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            } else {
                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[11] <= 86.3222885131836) {
            if (input[75] <= 274.6000061035156) {
                if (input[80] <= -0.9918456971645355) {
                    memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[68] <= 1.4989229440689087) {
                        if (input[15] <= 7.100000023841858) {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[23] <= 16.071839332580566) {
                            if (input[22] <= -5.445714473724365) {
                                if (input[31] <= 0.3111468404531479) {
                                    memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
            }
        } else {
            if (input[27] <= -1.8729411363601685) {
                if (input[68] <= 1.7750687003135681) {
                    memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[51] <= 56.264583587646484) {
                        if (input[53] <= 10.0) {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[66] <= 2.03497576713562) {
                    if (input[40] <= 37.9213981628418) {
                        if (input[56] <= 4.596956968307495) {
                            if (input[30] <= 2.624243140220642) {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[43] <= 127.95335006713867) {
                                    memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[0] <= 74.39999771118164) {
                            if (input[47] <= 2.942460298538208) {
                                memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[33] <= 6.982632398605347) {
                        if (input[78] <= 6481.0) {
                            if (input[63] <= 7.397557497024536) {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[28] <= 9.92744755744934) {
                                memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[63] <= 5.6869282722473145) {
                                    memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[70] <= 12.245419979095459) {
                                        if (input[77] <= -7068.0) {
                                            memcpy(var96, (double[]){0.2857142857142857, 0.0, 0.7142857142857143, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[3] <= 235.0) {
                            if (input[38] <= 6.869959354400635) {
                                if (input[51] <= 374.07398986816406) {
                                    if (input[38] <= 6.589946985244751) {
                                        if (input[51] <= 263.70410919189453) {
                                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var96, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var96, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var96, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var96, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var5, var96, 4, var4);
    double var97[4];
    if (input[38] <= 7.920766592025757) {
        if (input[22] <= 0.8348484635353088) {
            if (input[76] <= 3187.294189453125) {
                if (input[5] <= -153.57500457763672) {
                    if (input[61] <= 1.6269132494926453) {
                        if (input[65] <= 1.1282038688659668) {
                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[62] <= -6.523294448852539) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[45] <= 45.22731590270996) {
                            memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[32] <= 0.1827458292245865) {
                        if (input[11] <= 159.17550659179688) {
                            if (input[22] <= -4.106187343597412) {
                                if (input[67] <= -2.113485038280487) {
                                    memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[47] <= 15.357142925262451) {
                                        memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[73] <= 2.385496199131012) {
                                            memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[62] <= -2.7516340017318726) {
                                    if (input[26] <= 0.6426377594470978) {
                                        memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[8] <= -66.0) {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.8529411764705882, 0.058823529411764705, 0.058823529411764705, 0.029411764705882353}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[22] <= -1.4373814463615417) {
                                        if (input[65] <= 1.023721158504486) {
                                            memcpy(var97, (double[]){0.0, 0.8, 0.2, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.8333333333333334, 0.16666666666666666, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[43] <= 6.730769157409668) {
                                            memcpy(var97, (double[]){0.25, 0.25, 0.0, 0.5}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.047619047619047616, 0.09523809523809523, 0.8095238095238095, 0.047619047619047616}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[21] <= 0.7750140428543091) {
                            if (input[35] <= 0.8809725642204285) {
                                if (input[7] <= -118.0) {
                                    if (input[45] <= 27.6675443649292) {
                                        memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[22] <= -4.106187343597412) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.375, 0.125, 0.0, 0.5}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[77] <= -1343.0) {
                                        memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[62] <= -0.7223351895809174) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.3333333333333333, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[42] <= 4.816126823425293) {
                                    if (input[3] <= -1.100000023841858) {
                                        if (input[82] <= 45.0) {
                                            memcpy(var97, (double[]){0.803921568627451, 0.058823529411764705, 0.0392156862745098, 0.09803921568627451}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.4117647058823529, 0.2647058823529412, 0.2647058823529412, 0.058823529411764705}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[13] <= 38.70000076293945) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.23076923076923078, 0.6538461538461539, 0.11538461538461539, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[33] <= 0.4171717166900635) {
                                        memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[15] <= 25.47499942779541) {
                                if (input[50] <= -48.32499885559082) {
                                    if (input[26] <= 1.5372114777565002) {
                                        if (input[28] <= 2.84358286857605) {
                                            memcpy(var97, (double[]){0.0, 0.8571428571428572, 0.07142857142857144, 0.07142857142857144}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.5, 0.0, 0.35714285714285715, 0.14285714285714285}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[46] <= 5.492189407348633) {
                                        if (input[40] <= 5.634377717971802) {
                                            memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[65] <= 1.6707356572151184) {
                                            memcpy(var97, (double[]){0.14285714285714285, 0.2857142857142857, 0.21428571428571427, 0.35714285714285715}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[10] <= 122.04999923706055) {
                                    if (input[60] <= 0.21134265512228012) {
                                        if (input[76] <= 1994.466064453125) {
                                            memcpy(var97, (double[]){0.10714285714285714, 0.14285714285714285, 0.75, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.6086956521739131, 0.08695652173913043, 0.30434782608695654, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[73] <= 8.503816604614258) {
                                            memcpy(var97, (double[]){0.8461538461538461, 0.07692307692307693, 0.07692307692307693, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.2222222222222222, 0.6111111111111112, 0.16666666666666666, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[50] <= -70.29999923706055) {
                                        memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 6.381731271743774) {
                                            memcpy(var97, (double[]){0.23076923076923078, 0.3076923076923077, 0.3076923076923077, 0.15384615384615385}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[55] <= 0.3841254934668541) {
                    if (input[75] <= -517.5000152587891) {
                        if (input[61] <= 1.6268573999404907) {
                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[66] <= 0.9138572216033936) {
                            if (input[26] <= 1.4149835705757141) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[73] <= -74.04961740970612) {
                                memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[78] <= 4036.0) {
                                    memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[66] <= 0.9910562634468079) {
                                        if (input[33] <= 2.421126961708069) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[6] <= 99.23980712890625) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 0.8333333333333334, 0.16666666666666666}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[81] <= 0.7982431054115295) {
                        if (input[42] <= 2.081980526447296) {
                            if (input[32] <= -7.84175181388855) {
                                memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[50] <= -92.70000076293945) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[43] <= 8.000388145446777) {
                                    memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 117.9000015258789) {
                            if (input[2] <= -82.4000015258789) {
                                memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[10] <= 291.47499084472656) {
                                if (input[32] <= -1.9293478727340698) {
                                    memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if (input[45] <= 42.3830509185791) {
                if (input[52] <= -498.5) {
                    if (input[0] <= 99.9749984741211) {
                        if (input[50] <= -142.9749984741211) {
                            if (input[31] <= 2.8386247158050537) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[1] <= 83.8727912902832) {
                                if (input[25] <= 2.867711067199707) {
                                    memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[7] <= 19.200000762939453) {
                                        memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[36] <= 1.2967430353164673) {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[55] <= 7.052130699157715) {
                            if (input[60] <= -0.3354470208287239) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[23] <= 10.252142906188965) {
                                    if (input[25] <= 3.833699941635132) {
                                        if (input[31] <= 1.7119236588478088) {
                                            memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[12] <= 154.3499984741211) {
                                        memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[80] <= -0.5571826994419098) {
                                memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[52] <= -365.5) {
                        if (input[2] <= -10.699999809265137) {
                            memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 16.299999713897705) {
                            if (input[71] <= 3.550496816635132) {
                                if (input[51] <= 78.17906188964844) {
                                    memcpy(var97, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[80] <= -0.26460882276296616) {
                                    memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[58] <= 0.39062365889549255) {
                                        memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[8] <= 24.449999809265137) {
                                memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[47] <= 3.096920609474182) {
                                    memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[76] <= 5820.34521484375) {
                                        if (input[37] <= 1.8426749110221863) {
                                            memcpy(var97, (double[]){0.06060606060606061, 0.8181818181818182, 0.06060606060606061, 0.06060606060606061}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var97, (double[]){0.0, 0.3333333333333333, 0.0, 0.6666666666666666}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[75] <= 1245.7000122070312) {
                    if (input[40] <= 125.67069244384766) {
                        if (input[26] <= 10.7806715965271) {
                            memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        memcpy(var97, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var97, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                }
            }
        }
    } else {
        memcpy(var97, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var4, var97, 4, var3);
    double var98[4];
    if (input[50] <= -217.17499542236328) {
        if (input[1] <= 28.448580741882324) {
            if (input[58] <= -1.3309123516082764) {
                memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
            } else {
                if (input[36] <= 0.3195622116327286) {
                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[30] <= 0.8114870488643646) {
                        memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[60] <= -0.3290642499923706) {
                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[17] <= 3.5) {
                if (input[43] <= 172.88888549804688) {
                    memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[53] <= 1086.0) {
                        memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
            }
        }
    } else {
        if (input[26] <= 8.030423879623413) {
            if (input[50] <= 57.67499923706055) {
                if (input[63] <= -1.0030381977558136) {
                    if (input[31] <= 0.040672773495316505) {
                        memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[47] <= 2.637096881866455) {
                            if (input[44] <= 0.9749999940395355) {
                                if (input[8] <= -90.5) {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[76] <= 1901.822265625) {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[41] <= 86.53068923950195) {
                                    if (input[58] <= -1.6366392374038696) {
                                        if (input[71] <= 3.202046036720276) {
                                            memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 2.5) {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[36] <= 0.5486979782581329) {
                                memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[28] <= 0.9024390280246735) {
                                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[62] <= -0.9585931599140167) {
                        if (input[32] <= 0.11819852888584137) {
                            if (input[6] <= 94.4084243774414) {
                                if (input[57] <= -2.115036368370056) {
                                    if (input[0] <= 177.4000015258789) {
                                        if (input[22] <= -1.1030111908912659) {
                                            memcpy(var98, (double[]){0.8888888888888888, 0.0, 0.0, 0.1111111111111111}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[71] <= 10.750089168548584) {
                                            memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[15] <= 35.349998474121094) {
                                    memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[78] <= 15948.0) {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if (input[48] <= 10.6626615524292) {
                                if (input[51] <= 111.42258071899414) {
                                    if (input[20] <= 1.3455901741981506) {
                                        if (input[36] <= 0.46084415912628174) {
                                            memcpy(var98, (double[]){0.06666666666666667, 0.0, 0.9, 0.03333333333333333}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.45454545454545453, 0.045454545454545456, 0.45454545454545453, 0.045454545454545456}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[30] <= 3.5671192407608032) {
                                    if (input[65] <= 2.23697829246521) {
                                        if (input[12] <= -25.149999618530273) {
                                            memcpy(var98, (double[]){0.2676923076923077, 0.2953846153846154, 0.3046153846153846, 0.13230769230769232}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.047619047619047616, 0.7142857142857143, 0.23809523809523808, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[10] <= 119.875) {
                                            memcpy(var98, (double[]){0.5818181818181818, 0.03636363636363636, 0.36363636363636365, 0.01818181818181818}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.17647058823529413, 0.29411764705882354, 0.5294117647058824, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[66] <= 2.9960280656814575) {
                                        memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[51] <= 5.884663105010986) {
                            if (input[78] <= 220.0) {
                                memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                if (input[8] <= -92.5) {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[73] <= 20.858778953552246) {
                                if (input[56] <= 1.1518337726593018) {
                                    if (input[37] <= 0.8411805331707001) {
                                        if (input[62] <= -0.8592119216918945) {
                                            memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[75] <= 1111.25) {
                                        if (input[73] <= 14.889313220977783) {
                                            memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[56] <= 2.2544307112693787) {
                                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[0] <= 170.6500015258789) {
                                        memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[38] <= 0.7750000059604645) {
                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                } else {
                    if (input[2] <= -5.700000047683716) {
                        if (input[72] <= -19.255724906921387) {
                            memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[35] <= 4.764555215835571) {
                            if (input[31] <= 2.227699398994446) {
                                if (input[66] <= 3.338898181915283) {
                                    if (input[0] <= 128.95000076293945) {
                                        if (input[80] <= -0.42704494297504425) {
                                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[7] <= 11.5) {
                                            memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[0] <= 76.4749984741211) {
                if (input[42] <= 2.644444465637207) {
                    if (input[13] <= 14.200000286102295) {
                        if (input[8] <= 71.4000015258789) {
                            if (input[72] <= -127.50763702392578) {
                                memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        } else {
                            memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[7] <= -176.60000610351562) {
                            memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            if (input[6] <= 92.90978240966797) {
                                if (input[2] <= -51.20000076293945) {
                                    memcpy(var98, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[61] <= 2.365986704826355) {
                                    memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[24] <= 0.9249999821186066) {
                        memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    }
                }
            } else {
                if (input[60] <= -0.23438189923763275) {
                    if (input[62] <= -4.9659507274627686) {
                        memcpy(var98, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var98, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                    }
                } else {
                    memcpy(var98, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var3, var98, 4, var2);
    double var99[4];
    if (input[38] <= 7.8938679695129395) {
        if (input[31] <= 0.7157183587551117) {
            if (input[12] <= -30.649999618530273) {
                if (input[2] <= -41.10000038146973) {
                    if (input[10] <= 6.525000095367432) {
                        if (input[30] <= 0.19441389292478561) {
                            memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[65] <= 0.7652985453605652) {
                                if (input[25] <= 0.9584112465381622) {
                                    if (input[57] <= -1.9573243260383606) {
                                        memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[33] <= 1.009259283542633) {
                                            memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 0.125, 0.625, 0.25}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[27] <= -0.7386363446712494) {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[24] <= 0.5) {
                                            memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.125, 0.75, 0.125, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[38] <= 3.9777777194976807) {
                                    if (input[31] <= 0.1918599009513855) {
                                        if (input[33] <= 1.3901253938674927) {
                                            memcpy(var99, (double[]){0.7941176470588235, 0.17647058823529413, 0.029411764705882353, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.24, 0.44, 0.32, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[11] <= 149.00747680664062) {
                                            memcpy(var99, (double[]){0.14814814814814814, 0.5493827160493827, 0.24691358024691357, 0.05555555555555555}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.6875, 0.1875, 0.0625, 0.0625}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[5] <= -140.89999389648438) {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[11] <= 39.020381927490234) {
                                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.76, 0.04, 0.12, 0.08}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[41] <= 2.885215163230896) {
                            if (input[16] <= 3.087570548057556) {
                                memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                            } else {
                                if (input[45] <= 10.152980327606201) {
                                    memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[18] <= 61.5) {
                                if (input[1] <= 66.9614372253418) {
                                    if (input[7] <= -61.5) {
                                        if (input[48] <= 10.393513679504395) {
                                            memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 0.9, 0.1, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[47] <= 4.268570184707642) {
                                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[78] <= 4869.0) {
                                        memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if (input[71] <= 2.353188633918762) {
                        if (input[47] <= 7.03205132484436) {
                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[3] <= 4.800000071525574) {
                            if (input[55] <= -1.0096083581447601) {
                                if (input[61] <= 0.7754236161708832) {
                                    memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[52] <= -333.0) {
                                if (input[36] <= 0.6636917889118195) {
                                    memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[10] <= 22.925000190734863) {
                                        memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[42] <= 4.672893762588501) {
                                    if (input[30] <= 1.4579089283943176) {
                                        if (input[66] <= 0.4980085492134094) {
                                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 0.3333333333333333, 0.3333333333333333, 0.3333333333333333}, 4 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    if (input[17] <= 2.5) {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[81] <= -0.2945573031902313) {
                    if (input[37] <= 2.5005613565444946) {
                        memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        if (input[42] <= 3.8968706130981445) {
                            memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                } else {
                    if (input[41] <= 12.422853112220764) {
                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    } else {
                        if (input[71] <= 10.025075912475586) {
                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if (input[25] <= 5.8381736278533936) {
                if (input[55] <= -1.443200409412384) {
                    memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                } else {
                    if (input[77] <= -1847.0) {
                        if (input[70] <= 4.010114550590515) {
                            if (input[8] <= 280.0) {
                                if (input[22] <= 2.068181872367859) {
                                    if (input[52] <= -451.0) {
                                        if (input[17] <= 2.5) {
                                            memcpy(var99, (double[]){0.7250000000000001, 0.07500000000000001, 0.12500000000000003, 0.07500000000000001}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.32142857142857145, 0.4107142857142857, 0.25, 0.017857142857142856}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[26] <= 4.034740328788757) {
                                            memcpy(var99, (double[]){0.0, 0.08333333333333333, 0.08333333333333333, 0.8333333333333334}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.25, 0.0, 0.75, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[25] <= 5.531339883804321) {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[3] <= 190.0) {
                                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                            }
                        } else {
                            if (input[55] <= 3.4289246797561646) {
                                if (input[29] <= 0.7000000178813934) {
                                    memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                } else {
                                    if (input[77] <= -6143.0) {
                                        if (input[56] <= 4.7537312507629395) {
                                            memcpy(var99, (double[]){0.06666666666666668, 0.06666666666666668, 0.7333333333333334, 0.13333333333333336}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    } else {
                                        if (input[16] <= 45.33493614196777) {
                                            memcpy(var99, (double[]){0.08695652173913043, 0.17391304347826086, 0.13043478260869565, 0.6086956521739131}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[71] <= 15.07711124420166) {
                                    if (input[73] <= 16.93129825592041) {
                                        memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[50] <= -81.125) {
                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[78] <= 2598.0) {
                                memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                            } else {
                                memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if (input[47] <= 4.823226690292358) {
                    if (input[52] <= -1401.0) {
                        if (input[8] <= 268.0) {
                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                        }
                    } else {
                        if (input[56] <= 1.5591229796409607) {
                            memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                        } else {
                            if (input[53] <= 362.5) {
                                if (input[61] <= 3.6931079626083374) {
                                    if (input[40] <= 95.45308303833008) {
                                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                    } else {
                                        memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                                }
                            } else {
                                if (input[66] <= 0.9962724447250366) {
                                    memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                } else {
                                    if (input[62] <= -3.2418969869613647) {
                                        memcpy(var99, (double[]){0.0, 0.0, 1.0, 0.0}, 4 * sizeof(double));
                                    } else {
                                        if (input[26] <= 9.803200244903564) {
                                            memcpy(var99, (double[]){1.0, 0.0, 0.0, 0.0}, 4 * sizeof(double));
                                        } else {
                                            memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] <= -36.60000038146973) {
                        memcpy(var99, (double[]){0.0, 1.0, 0.0, 0.0}, 4 * sizeof(double));
                    } else {
                        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
                    }
                }
            }
        }
    } else {
        memcpy(var99, (double[]){0.0, 0.0, 0.0, 1.0}, 4 * sizeof(double));
    }
    add_vectors(var2, var99, 4, var1);
    mul_vector_number(var1, 0.02, 4, var0);
    memcpy(output, var0, 4 * sizeof(double));
}
