#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define INP_DATA_SIZE 256
#define OUTPUT_DATA_SIZE 258





uint32_t inp_data[INP_DATA_SIZE] =
                           {0,	 1,	2,	3,	 4,	   5,	6,	7,	  8,  9,   10,	11,	 12,  13,  14,	15,
                             16,  17,  18,	19,	 20,  21,  22,	23,	 24,  25,  26,	27,	 28,  29,  30,	31,
                             32,  33,  34,	35,	 36,  37,  38,	39,	 40,  41,  42,	43,	 44,  45,  46,	47,
                             48,  49,  50,	51,	 52,  53,  54,	55,	 56,  57,  58,	59,	 60,  61,  62,	63,
                             64,  65,  66,	67,	 68,  69,  70,	71,	 72,  73,  74,	75,	 76,  77,  78,	79,
                             80,  81,  82,	83,	 84,  85,  86,	87,	 88,  89,  90,	91,	 92,  93,  94,	95,
                             96,  97,  98,	99,	100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
                            112, 113, 114, 115,	116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
                            128, 129, 130, 131, 132, 133, 134, 135,	136, 137, 138, 139, 140, 141, 142, 143,
                            144, 145, 146, 147, 148, 149, 150, 151,	152, 153, 154, 155, 156, 157, 158, 159,
                            160, 161, 162, 163, 164, 165, 166, 167,	168, 169, 170, 171, 172, 173, 174, 175,
                            176, 177, 178, 179, 180, 181, 182, 183,	184, 185, 186, 187, 188, 189, 190, 191,
                            192, 193, 194, 195, 196, 197, 198, 199,	200, 201, 202, 203, 204, 205, 206, 207,
                            208, 209, 210, 211, 212, 213, 214, 215,	216, 217, 218, 219, 220, 221, 222, 223,
                            224, 225, 226, 227, 228, 229, 230, 231,	232, 233, 234, 235, 236, 237, 238, 239,
                            240, 241, 242, 243, 244, 245, 246, 247,	248, 249, 250, 251, 252, 253, 254, 255,

                            };



 uint32_t output[OUTPUT_DATA_SIZE] =
                        {0,  1,  3,  6,  9,  12,  15,  18,  21,  24,  27,  30,  33,  36,  39,  42,  45,  48,  51,  54,
                        57,  60,  63,  66,  69,  72,  75,  78,  81,  84,  87,  90,  93,  96,  99,  102,  105,  108,  111,
                        114,  117,  120,  123,  126,  129,  132,  135,  138,  141,  144,  147,  150,  153,  156,  159,  162,
                        165,  168,  171,  174,  177,  180,  183,  186,  189,  192,  195,  198,  201,  204,  207,  210,  213,
                        216,  219,  222,  225,  228,  231,  234,  237,  240,  243,  246,  249,  252,  255,  258,  261,  264,  267,
                        270,  273,  276,  279,  282,  285,  288,  291,  294,  297,  300,  303,  306,  309,  312,  315,  318,  321,
                        324,  327,  330,  333,  336,  339,  342,  345,  348,  351,  354,  357,  360,  363,  366,  369,  372,  375,
                        378,  381,  384,  387,  390,  393,  396,  399,  402,  405,  408,  411,  414,  417,  420,  423,  426,  429,
                        432,  435,  438,  441,  444,  447,  450,  453,  456,  459,  462,  465,  468,  471,  474,  477,  480,  483,
                        486,  489,  492,  495,  498,  501,  504,  507,  510,  513,  516,  519,  522,  525,  528,  531,  534,  537,
                        540,  543,  546,  549,  552,  555,  558,  561,  564,  567,  570,  573,  576,  579,  582,  585,  588,  591,
                        594,  597,  600,  603,  606,  609,  612,  615,  618,  621,  624,  627,  630,  633,  636,  639,  642,  645,
                        648,  651,  654,  657,  660,  663,  666,  669,  672,  675,  678,  681,  684,  687,  690,  693,  696,  699,
                        702,  705,  708,  711,  714,  717,  720,  723,  726,  729,  732,  735,  738,  741,  744,  747,  750,  753,
                        756,  759,  762,  509,  255,
                        };

