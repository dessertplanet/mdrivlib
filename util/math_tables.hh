#pragma once
#include"interp_array.hh"
const InterpArray<float,2048> sinTable = 
{0,0.00306796,0.00613588,0.00920375,0.0122715,0.0153392,0.0184067,0.0214741,0.0245412,0.0276081,0.0306748,0.0337412,0.0368072,0.0398729,0.0429383,0.0460032,0.0490677,0.0521317,0.0551952,0.0582583,0.0613207,0.0643826,0.0674439,0.0705046,0.0735646,0.0766239,0.0796824,0.0827403,0.0857973,0.0888536,0.091909,0.0949635,0.0980171,0.10107,0.104122,0.107172,0.110222,0.113271,0.116319,0.119365,0.122411,0.125455,0.128498,0.13154,0.134581,0.13762,0.140658,0.143695,0.14673,0.149765,0.152797,0.155828,0.158858,0.161886,0.164913,0.167938,0.170962,0.173984,0.177004,0.180023,0.18304,0.186055,0.189069,0.19208,0.19509,0.198098,0.201105,0.204109,0.207111,0.210112,0.21311,0.216107,0.219101,0.222094,0.225084,0.228072,0.231058,0.234042,0.237024,0.240003,0.24298,0.245955,0.248928,0.251898,0.254866,0.257831,0.260794,0.263755,0.266713,0.269668,0.272621,0.275572,0.27852,0.281465,0.284408,0.287347,0.290285,0.293219,0.296151,0.29908,0.302006,0.304929,0.30785,0.310767,0.313682,0.316593,0.319502,0.322408,0.32531,0.32821,0.331106,0.334,0.33689,0.339777,0.342661,0.345541,0.348419,0.351293,0.354164,0.357031,0.359895,0.362756,0.365613,0.368467,0.371317,0.374164,0.377007,0.379847,0.382683,0.385516,0.388345,0.39117,0.393992,0.39681,0.399624,0.402435,0.405241,0.408044,0.410843,0.413638,0.41643,0.419217,0.422,0.42478,0.427555,0.430326,0.433094,0.435857,0.438616,0.441371,0.444122,0.446869,0.449611,0.45235,0.455084,0.457813,0.460539,0.46326,0.465977,0.468689,0.471397,0.4741,0.476799,0.479494,0.482184,0.484869,0.48755,0.490227,0.492898,0.495565,0.498228,0.500885,0.503538,0.506187,0.50883,0.511469,0.514103,0.516732,0.519356,0.521975,0.52459,0.527199,0.529804,0.532403,0.534998,0.537587,0.540172,0.542751,0.545325,0.547894,0.550458,0.553017,0.55557,0.558119,0.560662,0.563199,0.565732,0.568259,0.570781,0.573297,0.575808,0.578314,0.580814,0.583309,0.585798,0.588282,0.59076,0.593232,0.595699,0.598161,0.600616,0.603067,0.605511,0.60795,0.610383,0.61281,0.615232,0.617647,0.620057,0.622461,0.62486,0.627252,0.629638,0.632019,0.634393,0.636762,0.639124,0.641481,0.643832,0.646176,0.648514,0.650847,0.653173,0.655493,0.657807,0.660114,0.662416,0.664711,0.667,0.669283,0.671559,0.673829,0.676093,0.67835,0.680601,0.682846,0.685084,0.687315,0.689541,0.691759,0.693971,0.696177,0.698376,0.700569,0.702755,0.704934,0.707107,0.709273,0.711432,0.713585,0.715731,0.71787,0.720003,0.722128,0.724247,0.726359,0.728464,0.730563,0.732654,0.734739,0.736817,0.738887,0.740951,0.743008,0.745058,0.747101,0.749136,0.751165,0.753187,0.755201,0.757209,0.759209,0.761202,0.763188,0.765167,0.767139,0.769103,0.771061,0.77301,0.774953,0.776888,0.778817,0.780737,0.782651,0.784557,0.786455,0.788346,0.79023,0.792107,0.793975,0.795837,0.797691,0.799537,0.801376,0.803208,0.805031,0.806848,0.808656,0.810457,0.812251,0.814036,0.815814,0.817585,0.819348,0.821102,0.82285,0.824589,0.826321,0.828045,0.829761,0.83147,0.83317,0.834863,0.836548,0.838225,0.839894,0.841555,0.843208,0.844854,0.846491,0.84812,0.849742,0.851355,0.852961,0.854558,0.856147,0.857729,0.859302,0.860867,0.862424,0.863973,0.865514,0.867046,0.868571,0.870087,0.871595,0.873095,0.874587,0.87607,0.877545,0.879012,0.880471,0.881921,0.883363,0.884797,0.886223,0.88764,0.889048,0.890449,0.891841,0.893224,0.894599,0.895966,0.897325,0.898674,0.900016,0.901349,0.902673,0.903989,0.905297,0.906596,0.907886,0.909168,0.910441,0.911706,0.912962,0.91421,0.915449,0.916679,0.917901,0.919114,0.920318,0.921514,0.922701,0.92388,0.925049,0.92621,0.927363,0.928506,0.929641,0.930767,0.931884,0.932993,0.934093,0.935184,0.936266,0.937339,0.938404,0.939459,0.940506,0.941544,0.942573,0.943593,0.944605,0.945607,0.946601,0.947586,0.948561,0.949528,0.950486,0.951435,0.952375,0.953306,0.954228,0.955141,0.956045,0.95694,0.957826,0.958703,0.959571,0.960431,0.96128,0.962121,0.962953,0.963776,0.96459,0.965394,0.96619,0.966976,0.967754,0.968522,0.969281,0.970031,0.970772,0.971504,0.972227,0.97294,0.973644,0.974339,0.975025,0.975702,0.97637,0.977028,0.977677,0.978317,0.978948,0.97957,0.980182,0.980785,0.981379,0.981964,0.982539,0.983105,0.983662,0.98421,0.984748,0.985278,0.985798,0.986308,0.986809,0.987301,0.987784,0.988258,0.988722,0.989177,0.989622,0.990058,0.990485,0.990903,0.991311,0.99171,0.992099,0.99248,0.99285,0.993212,0.993564,0.993907,0.99424,0.994565,0.994879,0.995185,0.995481,0.995767,0.996045,0.996313,0.996571,0.99682,0.99706,0.99729,0.997511,0.997723,0.997925,0.998118,0.998302,0.998476,0.99864,0.998795,0.998941,0.999078,0.999205,0.999322,0.999431,0.999529,0.999619,0.999699,0.999769,0.999831,0.999882,0.999925,0.999958,0.999981,0.999995,1,0.999995,0.999981,0.999958,0.999925,0.999882,0.999831,0.999769,0.999699,0.999619,0.999529,0.999431,0.999322,0.999205,0.999078,0.998941,0.998795,0.99864,0.998476,0.998302,0.998118,0.997925,0.997723,0.997511,0.99729,0.99706,0.99682,0.996571,0.996313,0.996045,0.995767,0.995481,0.995185,0.994879,0.994565,0.99424,0.993907,0.993564,0.993212,0.99285,0.99248,0.992099,0.99171,0.991311,0.990903,0.990485,0.990058,0.989622,0.989177,0.988722,0.988258,0.987784,0.987301,0.986809,0.986308,0.985798,0.985278,0.984748,0.98421,0.983662,0.983105,0.982539,0.981964,0.981379,0.980785,0.980182,0.97957,0.978948,0.978317,0.977677,0.977028,0.97637,0.975702,0.975025,0.974339,0.973644,0.97294,0.972227,0.971504,0.970772,0.970031,0.969281,0.968522,0.967754,0.966976,0.96619,0.965394,0.96459,0.963776,0.962953,0.962121,0.96128,0.960431,0.959571,0.958703,0.957826,0.95694,0.956045,0.955141,0.954228,0.953306,0.952375,0.951435,0.950486,0.949528,0.948561,0.947586,0.946601,0.945607,0.944605,0.943593,0.942573,0.941544,0.940506,0.939459,0.938404,0.937339,0.936266,0.935184,0.934093,0.932993,0.931884,0.930767,0.929641,0.928506,0.927363,0.92621,0.925049,0.92388,0.922701,0.921514,0.920318,0.919114,0.917901,0.916679,0.915449,0.91421,0.912962,0.911706,0.910441,0.909168,0.907886,0.906596,0.905297,0.903989,0.902673,0.901349,0.900016,0.898674,0.897325,0.895966,0.894599,0.893224,0.891841,0.890449,0.889048,0.88764,0.886222,0.884797,0.883363,0.881921,0.880471,0.879012,0.877545,0.87607,0.874587,0.873095,0.871595,0.870087,0.868571,0.867046,0.865514,0.863973,0.862424,0.860867,0.859302,0.857729,0.856147,0.854558,0.852961,0.851355,0.849742,0.84812,0.846491,0.844854,0.843208,0.841555,0.839894,0.838225,0.836548,0.834863,0.83317,0.83147,0.829761,0.828045,0.826321,0.824589,0.82285,0.821102,0.819348,0.817585,0.815814,0.814036,0.812251,0.810457,0.808656,0.806848,0.805031,0.803208,0.801376,0.799537,0.797691,0.795837,0.793975,0.792107,0.79023,0.788346,0.786455,0.784557,0.782651,0.780737,0.778817,0.776888,0.774953,0.77301,0.771061,0.769103,0.767139,0.765167,0.763188,0.761202,0.759209,0.757209,0.755201,0.753187,0.751165,0.749136,0.747101,0.745058,0.743008,0.740951,0.738887,0.736817,0.734739,0.732654,0.730563,0.728464,0.726359,0.724247,0.722128,0.720003,0.71787,0.715731,0.713585,0.711432,0.709273,0.707107,0.704934,0.702755,0.700569,0.698376,0.696177,0.693971,0.691759,0.689541,0.687315,0.685084,0.682845,0.680601,0.67835,0.676093,0.673829,0.671559,0.669283,0.667,0.664711,0.662416,0.660114,0.657807,0.655493,0.653173,0.650847,0.648514,0.646176,0.643832,0.641481,0.639124,0.636762,0.634393,0.632019,0.629638,0.627252,0.624859,0.622461,0.620057,0.617647,0.615232,0.61281,0.610383,0.60795,0.605511,0.603067,0.600617,0.598161,0.595699,0.593232,0.59076,0.588282,0.585798,0.583309,0.580814,0.578314,0.575808,0.573297,0.570781,0.568259,0.565732,0.563199,0.560661,0.558118,0.55557,0.553017,0.550458,0.547894,0.545325,0.542751,0.540172,0.537587,0.534998,0.532403,0.529804,0.527199,0.52459,0.521975,0.519356,0.516732,0.514103,0.511469,0.50883,0.506187,0.503538,0.500885,0.498228,0.495565,0.492898,0.490226,0.48755,0.484869,0.482184,0.479494,0.476799,0.4741,0.471397,0.468689,0.465977,0.46326,0.460539,0.457813,0.455084,0.45235,0.449611,0.446869,0.444122,0.441371,0.438616,0.435857,0.433094,0.430326,0.427555,0.42478,0.422,0.419217,0.416429,0.413638,0.410843,0.408044,0.405241,0.402435,0.399624,0.39681,0.393992,0.39117,0.388345,0.385516,0.382683,0.379847,0.377007,0.374164,0.371317,0.368467,0.365613,0.362756,0.359895,0.357031,0.354163,0.351293,0.348419,0.345541,0.342661,0.339777,0.33689,0.334,0.331106,0.32821,0.32531,0.322408,0.319502,0.316593,0.313682,0.310767,0.30785,0.304929,0.302006,0.29908,0.296151,0.293219,0.290285,0.287347,0.284408,0.281465,0.27852,0.275572,0.272621,0.269668,0.266713,0.263755,0.260794,0.257831,0.254866,0.251898,0.248928,0.245955,0.24298,0.240003,0.237024,0.234042,0.231058,0.228072,0.225084,0.222094,0.219101,0.216107,0.21311,0.210112,0.207111,0.204109,0.201105,0.198098,0.19509,0.19208,0.189069,0.186055,0.18304,0.180023,0.177004,0.173984,0.170962,0.167938,0.164913,0.161886,0.158858,0.155829,0.152797,0.149765,0.146731,0.143695,0.140658,0.13762,0.134581,0.13154,0.128498,0.125455,0.122411,0.119365,0.116319,0.113271,0.110222,0.107172,0.104122,0.10107,0.0980171,0.0949634,0.0919089,0.0888535,0.0857972,0.0827402,0.0796823,0.0766238,0.0735644,0.0705047,0.067444,0.0643827,0.0613208,0.0582583,0.0551953,0.0521318,0.0490677,0.0460032,0.0429383,0.039873,0.0368072,0.0337412,0.0306748,0.0276081,0.0245412,0.0214741,0.0184067,0.0153392,0.0122715,0.00920369,0.00613581,0.00306788,-8.74228e-08,-0.00306805,-0.00613599,-0.00920387,-0.0122714,-0.0153391,-0.0184066,-0.021474,-0.0245411,-0.0276081,-0.0306747,-0.0337411,-0.0368072,-0.0398729,-0.0429382,-0.0460032,-0.0490677,-0.0521317,-0.0551952,-0.0582583,-0.0613208,-0.0643827,-0.067444,-0.0705046,-0.0735646,-0.0766239,-0.0796825,-0.0827404,-0.0857974,-0.0888536,-0.0919091,-0.0949636,-0.098017,-0.10107,-0.104122,-0.107172,-0.110222,-0.113271,-0.116319,-0.119365,-0.122411,-0.125455,-0.128498,-0.13154,-0.134581,-0.13762,-0.140658,-0.143695,-0.14673,-0.149765,-0.152797,-0.155828,-0.158858,-0.161886,-0.164913,-0.167938,-0.170962,-0.173984,-0.177004,-0.180023,-0.18304,-0.186055,-0.189069,-0.19208,-0.19509,-0.198098,-0.201105,-0.204109,-0.207111,-0.210112,-0.21311,-0.216107,-0.219101,-0.222094,-0.225084,-0.228072,-0.231058,-0.234042,-0.237024,-0.240003,-0.24298,-0.245955,-0.248928,-0.251898,-0.254866,-0.257831,-0.260794,-0.263755,-0.266713,-0.269668,-0.272621,-0.275572,-0.27852,-0.281465,-0.284407,-0.287347,-0.290285,-0.293219,-0.296151,-0.29908,-0.302006,-0.304929,-0.30785,-0.310767,-0.313682,-0.316593,-0.319502,-0.322408,-0.32531,-0.32821,-0.331106,-0.334,-0.33689,-0.339777,-0.342661,-0.345541,-0.348419,-0.351293,-0.354163,-0.357031,-0.359895,-0.362756,-0.365613,-0.368467,-0.371317,-0.374164,-0.377007,-0.379847,-0.382683,-0.385516,-0.388345,-0.39117,-0.393992,-0.39681,-0.399624,-0.402435,-0.405241,-0.408044,-0.410843,-0.413638,-0.41643,-0.419217,-0.422,-0.42478,-0.427555,-0.430326,-0.433094,-0.435857,-0.438616,-0.441371,-0.444122,-0.446869,-0.449611,-0.45235,-0.455084,-0.457813,-0.460539,-0.46326,-0.465977,-0.468689,-0.471397,-0.4741,-0.476799,-0.479494,-0.482184,-0.484869,-0.48755,-0.490227,-0.492898,-0.495565,-0.498228,-0.500885,-0.503538,-0.506187,-0.50883,-0.511469,-0.514103,-0.516732,-0.519356,-0.521975,-0.52459,-0.527199,-0.529804,-0.532403,-0.534998,-0.537587,-0.540172,-0.542751,-0.545325,-0.547894,-0.550458,-0.553017,-0.55557,-0.558119,-0.560662,-0.563199,-0.565732,-0.568259,-0.570781,-0.573297,-0.575808,-0.578314,-0.580814,-0.583309,-0.585798,-0.588282,-0.59076,-0.593232,-0.595699,-0.598161,-0.600617,-0.603067,-0.605511,-0.60795,-0.610383,-0.61281,-0.615232,-0.617647,-0.620057,-0.622461,-0.62486,-0.627252,-0.629638,-0.632019,-0.634393,-0.636762,-0.639124,-0.641481,-0.643831,-0.646176,-0.648514,-0.650847,-0.653173,-0.655493,-0.657807,-0.660114,-0.662416,-0.664711,-0.667,-0.669283,-0.671559,-0.673829,-0.676093,-0.67835,-0.680601,-0.682846,-0.685084,-0.687315,-0.689541,-0.691759,-0.693972,-0.696177,-0.698376,-0.700569,-0.702755,-0.704934,-0.707107,-0.709273,-0.711432,-0.713585,-0.715731,-0.71787,-0.720002,-0.722128,-0.724247,-0.726359,-0.728464,-0.730563,-0.732654,-0.734739,-0.736817,-0.738887,-0.740951,-0.743008,-0.745058,-0.747101,-0.749136,-0.751165,-0.753187,-0.755201,-0.757209,-0.759209,-0.761202,-0.763188,-0.765167,-0.767139,-0.769103,-0.771061,-0.77301,-0.774953,-0.776888,-0.778817,-0.780737,-0.782651,-0.784557,-0.786455,-0.788346,-0.79023,-0.792107,-0.793976,-0.795837,-0.797691,-0.799537,-0.801376,-0.803208,-0.805031,-0.806848,-0.808656,-0.810457,-0.812251,-0.814036,-0.815814,-0.817585,-0.819348,-0.821103,-0.82285,-0.824589,-0.826321,-0.828045,-0.829761,-0.831469,-0.83317,-0.834863,-0.836548,-0.838225,-0.839894,-0.841555,-0.843208,-0.844853,-0.846491,-0.84812,-0.849742,-0.851355,-0.852961,-0.854558,-0.856147,-0.857729,-0.859302,-0.860867,-0.862424,-0.863973,-0.865514,-0.867046,-0.868571,-0.870087,-0.871595,-0.873095,-0.874587,-0.87607,-0.877545,-0.879012,-0.880471,-0.881921,-0.883363,-0.884797,-0.886223,-0.88764,-0.889048,-0.890449,-0.891841,-0.893224,-0.8946,-0.895966,-0.897325,-0.898675,-0.900016,-0.901349,-0.902673,-0.903989,-0.905297,-0.906596,-0.907886,-0.909168,-0.910441,-0.911706,-0.912962,-0.91421,-0.915449,-0.916679,-0.917901,-0.919114,-0.920318,-0.921514,-0.922701,-0.92388,-0.925049,-0.92621,-0.927363,-0.928506,-0.929641,-0.930767,-0.931884,-0.932993,-0.934093,-0.935183,-0.936266,-0.937339,-0.938404,-0.939459,-0.940506,-0.941544,-0.942573,-0.943593,-0.944605,-0.945607,-0.946601,-0.947586,-0.948561,-0.949528,-0.950486,-0.951435,-0.952375,-0.953306,-0.954228,-0.955141,-0.956045,-0.95694,-0.957826,-0.958704,-0.959572,-0.960431,-0.961281,-0.962121,-0.962953,-0.963776,-0.96459,-0.965394,-0.96619,-0.966977,-0.967754,-0.968522,-0.969281,-0.970031,-0.970772,-0.971504,-0.972226,-0.97294,-0.973644,-0.974339,-0.975025,-0.975702,-0.97637,-0.977028,-0.977677,-0.978317,-0.978948,-0.97957,-0.980182,-0.980785,-0.981379,-0.981964,-0.982539,-0.983105,-0.983662,-0.98421,-0.984748,-0.985278,-0.985798,-0.986308,-0.986809,-0.987301,-0.987784,-0.988258,-0.988722,-0.989177,-0.989622,-0.990058,-0.990485,-0.990903,-0.991311,-0.99171,-0.992099,-0.99248,-0.99285,-0.993212,-0.993564,-0.993907,-0.99424,-0.994565,-0.994879,-0.995185,-0.995481,-0.995767,-0.996045,-0.996313,-0.996571,-0.99682,-0.99706,-0.99729,-0.997511,-0.997723,-0.997925,-0.998118,-0.998302,-0.998476,-0.99864,-0.998795,-0.998941,-0.999078,-0.999205,-0.999322,-0.999431,-0.999529,-0.999619,-0.999699,-0.999769,-0.999831,-0.999882,-0.999925,-0.999958,-0.999981,-0.999995,-1,-0.999995,-0.999981,-0.999958,-0.999925,-0.999882,-0.999831,-0.999769,-0.999699,-0.999619,-0.999529,-0.999431,-0.999322,-0.999205,-0.999078,-0.998941,-0.998795,-0.99864,-0.998476,-0.998302,-0.998118,-0.997925,-0.997723,-0.997511,-0.99729,-0.99706,-0.99682,-0.996571,-0.996313,-0.996045,-0.995767,-0.995481,-0.995185,-0.994879,-0.994565,-0.99424,-0.993907,-0.993564,-0.993212,-0.99285,-0.99248,-0.992099,-0.99171,-0.991311,-0.990903,-0.990485,-0.990058,-0.989622,-0.989177,-0.988722,-0.988258,-0.987784,-0.987301,-0.986809,-0.986308,-0.985798,-0.985278,-0.984748,-0.98421,-0.983662,-0.983105,-0.982539,-0.981964,-0.981379,-0.980785,-0.980182,-0.97957,-0.978948,-0.978317,-0.977677,-0.977028,-0.97637,-0.975702,-0.975025,-0.974339,-0.973644,-0.97294,-0.972226,-0.971504,-0.970772,-0.970031,-0.969281,-0.968522,-0.967754,-0.966977,-0.96619,-0.965394,-0.96459,-0.963776,-0.962953,-0.962121,-0.961281,-0.960431,-0.959572,-0.958704,-0.957826,-0.95694,-0.956045,-0.955141,-0.954228,-0.953306,-0.952375,-0.951435,-0.950486,-0.949528,-0.948561,-0.947586,-0.946601,-0.945607,-0.944605,-0.943593,-0.942573,-0.941544,-0.940506,-0.939459,-0.938403,-0.937339,-0.936266,-0.935183,-0.934093,-0.932993,-0.931884,-0.930767,-0.929641,-0.928506,-0.927362,-0.92621,-0.925049,-0.923879,-0.922701,-0.921514,-0.920318,-0.919114,-0.917901,-0.916679,-0.915449,-0.91421,-0.912962,-0.911706,-0.910441,-0.909168,-0.907886,-0.906596,-0.905297,-0.903989,-0.902673,-0.901349,-0.900016,-0.898675,-0.897325,-0.895966,-0.8946,-0.893224,-0.891841,-0.890449,-0.889048,-0.88764,-0.886223,-0.884797,-0.883363,-0.881921,-0.880471,-0.879012,-0.877545,-0.87607,-0.874587,-0.873095,-0.871595,-0.870087,-0.868571,-0.867046,-0.865514,-0.863973,-0.862424,-0.860867,-0.859302,-0.857729,-0.856147,-0.854558,-0.852961,-0.851355,-0.849742,-0.84812,-0.846491,-0.844853,-0.843208,-0.841555,-0.839894,-0.838225,-0.836548,-0.834863,-0.83317,-0.83147,-0.829761,-0.828045,-0.826321,-0.824589,-0.82285,-0.821103,-0.819348,-0.817585,-0.815814,-0.814036,-0.812251,-0.810457,-0.808656,-0.806848,-0.805031,-0.803208,-0.801376,-0.799537,-0.797691,-0.795837,-0.793976,-0.792107,-0.79023,-0.788346,-0.786455,-0.784557,-0.782651,-0.780737,-0.778817,-0.776888,-0.774953,-0.77301,-0.77106,-0.769103,-0.767139,-0.765167,-0.763188,-0.761202,-0.759209,-0.757209,-0.755201,-0.753187,-0.751165,-0.749136,-0.7471,-0.745058,-0.743008,-0.740951,-0.738887,-0.736816,-0.734739,-0.732654,-0.730563,-0.728465,-0.726359,-0.724247,-0.722128,-0.720003,-0.71787,-0.715731,-0.713585,-0.711432,-0.709273,-0.707107,-0.704934,-0.702755,-0.700569,-0.698376,-0.696177,-0.693972,-0.691759,-0.689541,-0.687315,-0.685084,-0.682846,-0.680601,-0.67835,-0.676093,-0.673829,-0.671559,-0.669283,-0.667,-0.664711,-0.662416,-0.660114,-0.657807,-0.655493,-0.653173,-0.650847,-0.648514,-0.646176,-0.643831,-0.641481,-0.639124,-0.636762,-0.634393,-0.632019,-0.629638,-0.627252,-0.624859,-0.622461,-0.620057,-0.617647,-0.615231,-0.61281,-0.610383,-0.60795,-0.605511,-0.603067,-0.600617,-0.598161,-0.595699,-0.593232,-0.59076,-0.588282,-0.585798,-0.583309,-0.580814,-0.578314,-0.575808,-0.573297,-0.570781,-0.568259,-0.565732,-0.563199,-0.560662,-0.558119,-0.55557,-0.553017,-0.550458,-0.547894,-0.545325,-0.542751,-0.540172,-0.537587,-0.534998,-0.532403,-0.529804,-0.527199,-0.52459,-0.521975,-0.519356,-0.516732,-0.514103,-0.511469,-0.50883,-0.506187,-0.503538,-0.500885,-0.498228,-0.495565,-0.492898,-0.490226,-0.48755,-0.484869,-0.482184,-0.479494,-0.476799,-0.4741,-0.471397,-0.468689,-0.465976,-0.46326,-0.460539,-0.457814,-0.455084,-0.45235,-0.449612,-0.446869,-0.444122,-0.441371,-0.438616,-0.435857,-0.433094,-0.430327,-0.427555,-0.42478,-0.422,-0.419217,-0.41643,-0.413638,-0.410843,-0.408044,-0.405241,-0.402435,-0.399624,-0.39681,-0.393992,-0.39117,-0.388345,-0.385516,-0.382683,-0.379847,-0.377007,-0.374164,-0.371317,-0.368467,-0.365613,-0.362756,-0.359895,-0.357031,-0.354163,-0.351293,-0.348419,-0.345541,-0.342661,-0.339777,-0.33689,-0.333999,-0.331106,-0.32821,-0.32531,-0.322407,-0.319502,-0.316593,-0.313682,-0.310767,-0.30785,-0.304929,-0.302006,-0.29908,-0.296151,-0.293219,-0.290285,-0.287348,-0.284408,-0.281465,-0.27852,-0.275572,-0.272621,-0.269668,-0.266713,-0.263755,-0.260794,-0.257831,-0.254866,-0.251898,-0.248928,-0.245955,-0.24298,-0.240003,-0.237024,-0.234042,-0.231058,-0.228072,-0.225084,-0.222094,-0.219101,-0.216107,-0.21311,-0.210112,-0.207111,-0.204109,-0.201105,-0.198098,-0.19509,-0.19208,-0.189069,-0.186055,-0.18304,-0.180023,-0.177004,-0.173984,-0.170962,-0.167938,-0.164913,-0.161886,-0.158858,-0.155828,-0.152797,-0.149764,-0.14673,-0.143695,-0.140658,-0.13762,-0.134581,-0.13154,-0.128498,-0.125455,-0.122411,-0.119365,-0.116319,-0.113271,-0.110222,-0.107173,-0.104122,-0.10107,-0.0980172,-0.0949636,-0.091909,-0.0888536,-0.0857974,-0.0827403,-0.0796825,-0.0766239,-0.0735646,-0.0705046,-0.0674439,-0.0643826,-0.0613207,-0.0582583,-0.0551952,-0.0521317,-0.0490676,-0.0460031,-0.0429382,-0.0398729,-0.0368072,-0.0337411,-0.0306747,-0.0276081,-0.0245411,-0.021474,-0.0184066,-0.0153391,-0.0122714,-0.00920361,-0.00613573,-0.00306779};
const InterpArray<float,2048> tanTable = 
{0,0.00153398,0.00306797,0.00460197,0.006136,0.00767005,0.00920414,0.0107383,0.0122725,0.0138067,0.015341,0.0168754,0.0184098,0.0199444,0.021479,0.0230138,0.0245486,0.0260836,0.0276187,0.0291539,0.0306892,0.0322247,0.0337604,0.0352962,0.0368322,0.0383683,0.0399047,0.0414412,0.0429779,0.0445148,0.0460519,0.0475893,0.0491269,0.0506646,0.0522027,0.053741,0.0552795,0.0568183,0.0583574,0.0598967,0.0614364,0.0629763,0.0645165,0.066057,0.0675978,0.069139,0.0706805,0.0722223,0.0737644,0.0753069,0.0768498,0.078393,0.0799366,0.0814806,0.0830249,0.0845697,0.0861148,0.0876604,0.0892064,0.0907528,0.0922996,0.0938469,0.0953946,0.0969428,0.0984914,0.100041,0.10159,0.10314,0.104691,0.106242,0.107793,0.109345,0.110898,0.112451,0.114005,0.115559,0.117114,0.118669,0.120225,0.121781,0.123338,0.124896,0.126454,0.128013,0.129572,0.131132,0.132693,0.134254,0.135816,0.137379,0.138942,0.140506,0.142071,0.143636,0.145202,0.146769,0.148336,0.149904,0.151473,0.153042,0.154613,0.156184,0.157756,0.159328,0.160901,0.162475,0.16405,0.165626,0.167202,0.16878,0.170358,0.171937,0.173516,0.175097,0.176678,0.178261,0.179844,0.181428,0.183013,0.184599,0.186185,0.187773,0.189362,0.190951,0.192541,0.194133,0.195725,0.197318,0.198912,0.200508,0.202104,0.203701,0.205299,0.206898,0.208498,0.210099,0.211702,0.213305,0.214909,0.216515,0.218121,0.219728,0.221337,0.222947,0.224558,0.226169,0.227782,0.229397,0.231012,0.232628,0.234246,0.235865,0.237484,0.239106,0.240728,0.242351,0.243976,0.245602,0.247229,0.248857,0.250487,0.252118,0.25375,0.255383,0.257018,0.258654,0.260291,0.26193,0.26357,0.265211,0.266853,0.268497,0.270143,0.271789,0.273437,0.275086,0.276737,0.278389,0.280043,0.281698,0.283354,0.285012,0.286672,0.288332,0.289995,0.291658,0.293324,0.29499,0.296659,0.298328,0.3,0.301672,0.303347,0.305023,0.3067,0.308379,0.31006,0.311742,0.313426,0.315111,0.316799,0.318487,0.320178,0.32187,0.323563,0.325259,0.326956,0.328655,0.330355,0.332058,0.333762,0.335467,0.337175,0.338884,0.340595,0.342308,0.344023,0.345739,0.347457,0.349177,0.350899,0.352623,0.354349,0.356076,0.357806,0.359537,0.36127,0.363005,0.364743,0.366482,0.368223,0.369965,0.37171,0.373457,0.375206,0.376957,0.37871,0.380465,0.382222,0.383981,0.385743,0.387506,0.389271,0.391039,0.392808,0.39458,0.396354,0.39813,0.399908,0.401689,0.403471,0.405256,0.407043,0.408832,0.410624,0.412418,0.414214,0.416012,0.417812,0.419615,0.421421,0.423228,0.425038,0.42685,0.428665,0.430482,0.432302,0.434123,0.435948,0.437775,0.439604,0.441435,0.443269,0.445106,0.446945,0.448787,0.450631,0.452478,0.454327,0.456179,0.458034,0.459891,0.461751,0.463613,0.465478,0.467346,0.469216,0.471089,0.472965,0.474843,0.476725,0.478608,0.480495,0.482385,0.484277,0.486172,0.48807,0.489971,0.491875,0.493781,0.495691,0.497603,0.499518,0.501437,0.503358,0.505282,0.507209,0.509139,0.511072,0.513008,0.514948,0.51689,0.518835,0.520784,0.522735,0.52469,0.526648,0.528609,0.530573,0.532541,0.534511,0.536485,0.538462,0.540443,0.542426,0.544413,0.546403,0.548397,0.550394,0.552394,0.554398,0.556405,0.558416,0.56043,0.562448,0.564469,0.566493,0.568521,0.570553,0.572588,0.574626,0.576669,0.578715,0.580764,0.582817,0.584874,0.586935,0.588999,0.591067,0.593139,0.595214,0.597294,0.599377,0.601464,0.603555,0.605649,0.607748,0.609851,0.611957,0.614068,0.616182,0.6183,0.620423,0.622549,0.62468,0.626814,0.628953,0.631096,0.633243,0.635394,0.63755,0.639709,0.641873,0.644041,0.646214,0.64839,0.650571,0.652757,0.654947,0.657141,0.659339,0.661542,0.66375,0.665962,0.668179,0.6704,0.672625,0.674856,0.677091,0.67933,0.681575,0.683823,0.686077,0.688335,0.690599,0.692867,0.695139,0.697417,0.6997,0.701987,0.704279,0.706577,0.708879,0.711186,0.713499,0.715816,0.718139,0.720466,0.722799,0.725137,0.72748,0.729829,0.732183,0.734542,0.736906,0.739276,0.741651,0.744031,0.746417,0.748808,0.751205,0.753607,0.756015,0.758429,0.760848,0.763273,0.765703,0.76814,0.770582,0.773029,0.775483,0.777942,0.780408,0.782879,0.785356,0.787839,0.790328,0.792823,0.795325,0.797832,0.800345,0.802865,0.805391,0.807923,0.810462,0.813006,0.815557,0.818115,0.820679,0.823249,0.825826,0.828409,0.830999,0.833596,0.836199,0.838809,0.841426,0.844049,0.84668,0.849317,0.85196,0.854611,0.857269,0.859934,0.862606,0.865285,0.867971,0.870664,0.873365,0.876072,0.878787,0.88151,0.884239,0.886976,0.889721,0.892473,0.895232,0.898,0.900774,0.903557,0.906347,0.909145,0.911951,0.914765,0.917586,0.920416,0.923253,0.926099,0.928952,0.931814,0.934684,0.937563,0.940449,0.943344,0.946247,0.949159,0.952079,0.955008,0.957945,0.960891,0.963846,0.966809,0.969782,0.972763,0.975753,0.978752,0.98176,0.984777,0.987803,0.990838,0.993883,0.996937,1,1.00307,1.00615,1.00925,1.01235,1.01546,1.01858,1.02171,1.02485,1.028,1.03116,1.03433,1.03751,1.0407,1.0439,1.04711,1.05033,1.05356,1.05681,1.06006,1.06332,1.0666,1.06988,1.07318,1.07648,1.0798,1.08313,1.08647,1.08982,1.09318,1.09655,1.09993,1.10333,1.10674,1.11016,1.11359,1.11703,1.12048,1.12395,1.12743,1.13092,1.13442,1.13793,1.14146,1.145,1.14855,1.15211,1.15569,1.15928,1.16288,1.16649,1.17012,1.17376,1.17742,1.18108,1.18476,1.18846,1.19217,1.19589,1.19962,1.20337,1.20713,1.21091,1.2147,1.2185,1.22232,1.22616,1.23,1.23386,1.23774,1.24163,1.24554,1.24946,1.2534,1.25735,1.26131,1.2653,1.26929,1.27331,1.27734,1.28138,1.28544,1.28952,1.29361,1.29772,1.30185,1.30599,1.31015,1.31432,1.31851,1.32272,1.32695,1.33119,1.33546,1.33973,1.34403,1.34834,1.35268,1.35703,1.36139,1.36578,1.37018,1.37461,1.37905,1.38351,1.38799,1.39249,1.39701,1.40154,1.4061,1.41068,1.41527,1.41989,1.42453,1.42918,1.43386,1.43856,1.44328,1.44802,1.45278,1.45756,1.46237,1.46719,1.47204,1.47691,1.4818,1.48671,1.49165,1.49661,1.50159,1.50659,1.51162,1.51667,1.52174,1.52684,1.53196,1.53711,1.54228,1.54748,1.5527,1.55794,1.56321,1.56851,1.57383,1.57917,1.58455,1.58994,1.59537,1.60082,1.6063,1.6118,1.61734,1.6229,1.62849,1.6341,1.63975,1.64542,1.65112,1.65685,1.66261,1.6684,1.67422,1.68007,1.68595,1.69186,1.6978,1.70377,1.70977,1.7158,1.72187,1.72797,1.7341,1.74026,1.74646,1.75269,1.75895,1.76525,1.77158,1.77794,1.78434,1.79078,1.79725,1.80376,1.8103,1.81688,1.8235,1.83015,1.83684,1.84357,1.85034,1.85714,1.86398,1.87087,1.87779,1.88475,1.89176,1.8988,1.90589,1.91301,1.92018,1.92739,1.93465,1.94195,1.94929,1.95667,1.9641,1.97157,1.97909,1.98666,1.99427,2.00193,2.00963,2.01739,2.02519,2.03304,2.04094,2.04889,2.05688,2.06493,2.07303,2.08119,2.08939,2.09765,2.10596,2.11432,2.12274,2.13121,2.13974,2.14833,2.15697,2.16567,2.17443,2.18325,2.19212,2.20106,2.21005,2.21911,2.22823,2.23741,2.24666,2.25596,2.26534,2.27478,2.28428,2.29385,2.30349,2.3132,2.32298,2.33282,2.34274,2.35273,2.36279,2.37293,2.38313,2.39342,2.40378,2.41421,2.42473,2.43532,2.44599,2.45674,2.46758,2.47849,2.48949,2.50057,2.51174,2.523,2.53434,2.54577,2.55729,2.5689,2.58061,2.5924,2.60429,2.61628,2.62836,2.64054,2.65282,2.6652,2.67768,2.69027,2.70295,2.71575,2.72865,2.74166,2.75478,2.76801,2.78135,2.79481,2.80839,2.82208,2.83589,2.84982,2.86387,2.87805,2.89236,2.90679,2.92135,2.93604,2.95086,2.96582,2.98092,2.99615,3.01153,3.02704,3.04271,3.05852,3.07447,3.09058,3.10685,3.12327,3.13984,3.15658,3.17348,3.19055,3.20778,3.22518,3.24276,3.26051,3.27845,3.29656,3.31486,3.33334,3.35201,3.37088,3.38994,3.4092,3.42867,3.44834,3.46822,3.48831,3.50862,3.52915,3.5499,3.57088,3.59209,3.61354,3.63522,3.65715,3.67932,3.70175,3.72443,3.74738,3.77058,3.79406,3.81782,3.84185,3.86617,3.89078,3.91568,3.94089,3.9664,3.99222,4.01837,4.04483,4.07163,4.09876,4.12624,4.15407,4.18225,4.2108,4.23972,4.26902,4.2987,4.32878,4.35926,4.39015,4.42146,4.4532,4.48538,4.518,4.55107,4.58461,4.61863,4.65313,4.68813,4.72363,4.75965,4.79621,4.8333,4.87094,4.90916,4.94795,4.98734,5.02734,5.06796,5.10921,5.15112,5.19369,5.23695,5.2809,5.32558,5.37099,5.41716,5.4641,5.51183,5.56038,5.60976,5.66,5.71112,5.76314,5.81609,5.87,5.92488,5.98078,6.0377,6.09569,6.15477,6.21499,6.27636,6.33892,6.40271,6.46777,6.53413,6.60184,6.67093,6.74145,6.81345,6.88696,6.96204,7.03875,7.11713,7.19724,7.27914,7.36289,7.44855,7.53619,7.62589,7.7177,7.81172,7.90801,8.00667,8.10779,8.21145,8.31775,8.4268,8.53871,8.65359,8.77157,8.89276,9.0173,9.14534,9.27702,9.4125,9.55195,9.69555,9.84348,9.99595,10.1532,10.3154,10.4828,10.6557,10.8343,11.0189,11.21,11.4077,11.6124,11.8246,12.0446,12.2729,12.5099,12.7562,13.0124,13.279,13.5567,13.8461,14.1482,14.4636,14.7934,15.1384,15.4999,15.879,16.277,16.6954,17.1358,17.6,18.0899,18.6078,19.1561,19.7376,20.3555,21.0131,21.7146,22.4645,23.2678,24.1306,25.0598,26.0632,27.1502,28.3316,29.6205,31.032,32.5847,34.3007,36.2073,38.3382,40.7354,43.4522,46.557,50.1394,54.3187,59.2579,65.1848,72.4286,81.4833,93.1249,108.647,130.378,162.973,217.299,325.952,651.915,-2.28773e+07,-651.878,-325.943,-217.295,-162.974,-130.378,-108.647,-93.1252,-81.4835,-72.4288,-65.1849,-59.258,-54.3188,-50.1395,-46.5571,-43.4523,-40.7355,-38.3383,-36.2074,-34.3007,-32.5847,-31.032,-29.6205,-28.3316,-27.1501,-26.0631,-25.0597,-24.1306,-23.2677,-22.4644,-21.7146,-21.0131,-20.3555,-19.7376,-19.1561,-18.6078,-18.0899,-17.6,-17.1358,-16.6954,-16.277,-15.879,-15.4999,-15.1384,-14.7934,-14.4636,-14.1482,-13.8461,-13.5567,-13.279,-13.0124,-12.7562,-12.5099,-12.2729,-12.0446,-11.8246,-11.6124,-11.4077,-11.21,-11.019,-10.8343,-10.6557,-10.4828,-10.3154,-10.1532,-9.99595,-9.84348,-9.69555,-9.55195,-9.4125,-9.27702,-9.14534,-9.0173,-8.89276,-8.77157,-8.6536,-8.53872,-8.42681,-8.31775,-8.21144,-8.10778,-8.00667,-7.90801,-7.81171,-7.7177,-7.62588,-7.53619,-7.44855,-7.36289,-7.27914,-7.19724,-7.11713,-7.03875,-6.96205,-6.88696,-6.81345,-6.74145,-6.67093,-6.60184,-6.53414,-6.46777,-6.40271,-6.33892,-6.27636,-6.21499,-6.15478,-6.09569,-6.0377,-5.98077,-5.92488,-5.87,-5.81609,-5.76314,-5.71112,-5.66,-5.60976,-5.56038,-5.51183,-5.4641,-5.41716,-5.37099,-5.32558,-5.2809,-5.23695,-5.19369,-5.15112,-5.10921,-5.06796,-5.02734,-4.98734,-4.94796,-4.90916,-4.87094,-4.8333,-4.7962,-4.75965,-4.72363,-4.68812,-4.65313,-4.61863,-4.58461,-4.55107,-4.518,-4.48538,-4.4532,-4.42147,-4.39016,-4.35926,-4.32878,-4.2987,-4.26902,-4.23972,-4.2108,-4.18225,-4.15407,-4.12624,-4.09876,-4.07163,-4.04483,-4.01837,-3.99222,-3.9664,-3.94089,-3.91568,-3.89078,-3.86617,-3.84185,-3.81782,-3.79406,-3.77059,-3.74738,-3.72443,-3.70175,-3.67932,-3.65715,-3.63522,-3.61354,-3.59209,-3.57088,-3.5499,-3.52915,-3.50862,-3.48831,-3.46822,-3.44834,-3.42867,-3.4092,-3.38994,-3.37088,-3.35201,-3.33334,-3.31485,-3.29656,-3.27845,-3.26051,-3.24276,-3.22518,-3.20778,-3.19055,-3.17348,-3.15658,-3.13984,-3.12327,-3.10685,-3.09058,-3.07447,-3.05852,-3.04271,-3.02704,-3.01153,-2.99615,-2.98092,-2.96582,-2.95086,-2.93604,-2.92135,-2.90679,-2.89235,-2.87805,-2.86387,-2.84982,-2.83589,-2.82208,-2.80839,-2.79481,-2.78136,-2.76801,-2.75478,-2.74166,-2.72865,-2.71575,-2.70296,-2.69027,-2.67768,-2.6652,-2.65282,-2.64054,-2.62836,-2.61628,-2.60429,-2.5924,-2.58061,-2.5689,-2.55729,-2.54577,-2.53434,-2.523,-2.51174,-2.50057,-2.48949,-2.47849,-2.46758,-2.45674,-2.44599,-2.43532,-2.42473,-2.41421,-2.40378,-2.39342,-2.38313,-2.37293,-2.36279,-2.35273,-2.34274,-2.33282,-2.32298,-2.3132,-2.30349,-2.29385,-2.28428,-2.27478,-2.26534,-2.25596,-2.24665,-2.23741,-2.22823,-2.21911,-2.21005,-2.20106,-2.19212,-2.18325,-2.17443,-2.16567,-2.15697,-2.14833,-2.13974,-2.13121,-2.12274,-2.11432,-2.10596,-2.09765,-2.08939,-2.08119,-2.07303,-2.06493,-2.05688,-2.04889,-2.04094,-2.03304,-2.02519,-2.01739,-2.00963,-2.00193,-1.99427,-1.98666,-1.97909,-1.97157,-1.9641,-1.95667,-1.94929,-1.94194,-1.93465,-1.92739,-1.92018,-1.91301,-1.90589,-1.8988,-1.89176,-1.88475,-1.87779,-1.87087,-1.86399,-1.85714,-1.85034,-1.84357,-1.83684,-1.83015,-1.8235,-1.81688,-1.8103,-1.80376,-1.79725,-1.79078,-1.78434,-1.77794,-1.77158,-1.76525,-1.75895,-1.75269,-1.74646,-1.74026,-1.7341,-1.72797,-1.72187,-1.7158,-1.70977,-1.70377,-1.6978,-1.69186,-1.68595,-1.68007,-1.67422,-1.6684,-1.66261,-1.65685,-1.65112,-1.64542,-1.63975,-1.6341,-1.62849,-1.6229,-1.61734,-1.6118,-1.6063,-1.60082,-1.59537,-1.58994,-1.58454,-1.57917,-1.57383,-1.56851,-1.56321,-1.55794,-1.5527,-1.54748,-1.54228,-1.53711,-1.53196,-1.52684,-1.52174,-1.51667,-1.51162,-1.50659,-1.50159,-1.49661,-1.49165,-1.48671,-1.4818,-1.47691,-1.47204,-1.46719,-1.46237,-1.45756,-1.45278,-1.44802,-1.44328,-1.43856,-1.43386,-1.42918,-1.42453,-1.41989,-1.41527,-1.41068,-1.4061,-1.40154,-1.39701,-1.39249,-1.38799,-1.38351,-1.37905,-1.37461,-1.37018,-1.36578,-1.36139,-1.35703,-1.35268,-1.34834,-1.34403,-1.33973,-1.33546,-1.33119,-1.32695,-1.32272,-1.31851,-1.31432,-1.31015,-1.30599,-1.30185,-1.29772,-1.29361,-1.28952,-1.28544,-1.28138,-1.27734,-1.27331,-1.26929,-1.2653,-1.26132,-1.25735,-1.2534,-1.24946,-1.24554,-1.24163,-1.23774,-1.23386,-1.23,-1.22616,-1.22232,-1.2185,-1.2147,-1.21091,-1.20713,-1.20337,-1.19962,-1.19589,-1.19217,-1.18846,-1.18476,-1.18108,-1.17742,-1.17376,-1.17012,-1.16649,-1.16288,-1.15928,-1.15569,-1.15211,-1.14855,-1.145,-1.14146,-1.13793,-1.13442,-1.13092,-1.12743,-1.12395,-1.12048,-1.11703,-1.11359,-1.11016,-1.10674,-1.10333,-1.09993,-1.09655,-1.09318,-1.08982,-1.08647,-1.08313,-1.0798,-1.07648,-1.07318,-1.06988,-1.0666,-1.06332,-1.06006,-1.05681,-1.05356,-1.05033,-1.04711,-1.0439,-1.0407,-1.03751,-1.03433,-1.03116,-1.028,-1.02485,-1.02171,-1.01858,-1.01546,-1.01235,-1.00925,-1.00615,-1.00307,-1,-0.996937,-0.993883,-0.990838,-0.987803,-0.984777,-0.98176,-0.978752,-0.975753,-0.972763,-0.969781,-0.966809,-0.963846,-0.960891,-0.957945,-0.955008,-0.952079,-0.949159,-0.946247,-0.943344,-0.940449,-0.937562,-0.934684,-0.931814,-0.928952,-0.926099,-0.923253,-0.920416,-0.917586,-0.914765,-0.911951,-0.909145,-0.906347,-0.903557,-0.900775,-0.898,-0.895233,-0.892473,-0.889721,-0.886976,-0.884239,-0.88151,-0.878787,-0.876072,-0.873365,-0.870664,-0.867971,-0.865285,-0.862606,-0.859934,-0.857269,-0.854611,-0.851961,-0.849317,-0.84668,-0.844049,-0.841426,-0.838809,-0.836199,-0.833596,-0.830999,-0.828409,-0.825826,-0.823249,-0.820679,-0.818115,-0.815557,-0.813006,-0.810461,-0.807923,-0.805391,-0.802865,-0.800345,-0.797832,-0.795324,-0.792823,-0.790328,-0.787839,-0.785356,-0.782879,-0.780407,-0.777943,-0.775483,-0.77303,-0.770582,-0.76814,-0.765704,-0.763273,-0.760848,-0.758429,-0.756016,-0.753608,-0.751205,-0.748808,-0.746417,-0.744031,-0.741651,-0.739276,-0.736906,-0.734542,-0.732183,-0.729829,-0.72748,-0.725137,-0.722799,-0.720466,-0.718139,-0.715816,-0.713499,-0.711186,-0.708879,-0.706577,-0.704279,-0.701987,-0.6997,-0.697417,-0.695139,-0.692867,-0.690599,-0.688335,-0.686077,-0.683823,-0.681574,-0.67933,-0.677091,-0.674856,-0.672625,-0.6704,-0.668178,-0.665962,-0.66375,-0.661542,-0.659339,-0.657141,-0.654946,-0.652757,-0.650572,-0.64839,-0.646214,-0.644041,-0.641873,-0.639709,-0.63755,-0.635394,-0.633243,-0.631096,-0.628953,-0.626814,-0.62468,-0.622549,-0.620423,-0.6183,-0.616182,-0.614068,-0.611957,-0.609851,-0.607748,-0.60565,-0.603555,-0.601464,-0.599377,-0.597294,-0.595214,-0.593139,-0.591067,-0.588999,-0.586935,-0.584874,-0.582817,-0.580764,-0.578715,-0.576669,-0.574626,-0.572588,-0.570553,-0.568521,-0.566493,-0.564468,-0.562447,-0.56043,-0.558416,-0.556405,-0.554398,-0.552394,-0.550394,-0.548397,-0.546403,-0.544413,-0.542426,-0.540442,-0.538462,-0.536485,-0.534511,-0.532541,-0.530573,-0.528609,-0.526648,-0.52469,-0.522735,-0.520784,-0.518835,-0.51689,-0.514948,-0.513008,-0.511072,-0.509139,-0.507209,-0.505282,-0.503358,-0.501437,-0.499518,-0.497603,-0.495691,-0.493781,-0.491875,-0.489971,-0.48807,-0.486172,-0.484277,-0.482385,-0.480495,-0.478608,-0.476724,-0.474843,-0.472965,-0.471089,-0.469216,-0.467346,-0.465478,-0.463613,-0.46175,-0.459891,-0.458034,-0.456179,-0.454327,-0.452478,-0.450631,-0.448787,-0.446945,-0.445106,-0.443269,-0.441435,-0.439604,-0.437774,-0.435948,-0.434123,-0.432302,-0.430482,-0.428665,-0.426851,-0.425038,-0.423228,-0.421421,-0.419616,-0.417813,-0.416012,-0.414214,-0.412418,-0.410624,-0.408832,-0.407043,-0.405256,-0.403471,-0.401689,-0.399908,-0.39813,-0.396354,-0.39458,-0.392808,-0.391039,-0.389271,-0.387506,-0.385743,-0.383981,-0.382222,-0.380465,-0.37871,-0.376957,-0.375206,-0.373457,-0.37171,-0.369965,-0.368222,-0.366481,-0.364742,-0.363005,-0.36127,-0.359537,-0.357806,-0.356076,-0.354349,-0.352623,-0.350899,-0.349177,-0.347457,-0.345739,-0.344022,-0.342308,-0.340595,-0.338884,-0.337175,-0.335467,-0.333762,-0.332058,-0.330355,-0.328655,-0.326956,-0.325259,-0.323564,-0.32187,-0.320178,-0.318487,-0.316799,-0.315111,-0.313426,-0.311742,-0.31006,-0.308379,-0.3067,-0.305023,-0.303347,-0.301672,-0.3,-0.298328,-0.296659,-0.29499,-0.293324,-0.291658,-0.289995,-0.288332,-0.286672,-0.285012,-0.283354,-0.281698,-0.280043,-0.278389,-0.276737,-0.275086,-0.273437,-0.271789,-0.270142,-0.268497,-0.266853,-0.265211,-0.26357,-0.26193,-0.260291,-0.258654,-0.257018,-0.255383,-0.25375,-0.252118,-0.250487,-0.248857,-0.247229,-0.245602,-0.243976,-0.242351,-0.240728,-0.239106,-0.237485,-0.235865,-0.234246,-0.232628,-0.231012,-0.229397,-0.227782,-0.226169,-0.224558,-0.222947,-0.221337,-0.219729,-0.218121,-0.216515,-0.214909,-0.213305,-0.211702,-0.210099,-0.208498,-0.206898,-0.205299,-0.203701,-0.202104,-0.200508,-0.198912,-0.197318,-0.195725,-0.194133,-0.192541,-0.190951,-0.189361,-0.187773,-0.186185,-0.184599,-0.183013,-0.181428,-0.179844,-0.178261,-0.176678,-0.175097,-0.173516,-0.171937,-0.170358,-0.16878,-0.167202,-0.165626,-0.16405,-0.162475,-0.160901,-0.159328,-0.157756,-0.156184,-0.154613,-0.153043,-0.151473,-0.149904,-0.148336,-0.146769,-0.145202,-0.143636,-0.142071,-0.140506,-0.138942,-0.137379,-0.135816,-0.134254,-0.132693,-0.131132,-0.129572,-0.128013,-0.126454,-0.124896,-0.123338,-0.121781,-0.120225,-0.118669,-0.117114,-0.115559,-0.114005,-0.112451,-0.110898,-0.109345,-0.107793,-0.106242,-0.104691,-0.10314,-0.10159,-0.10004,-0.0984914,-0.0969427,-0.0953946,-0.0938468,-0.0922996,-0.0907527,-0.0892063,-0.0876603,-0.0861148,-0.0845696,-0.0830249,-0.0814805,-0.0799365,-0.0783929,-0.0768497,-0.0753068,-0.0737643,-0.0722224,-0.0706806,-0.0691391,-0.0675979,-0.0660571,-0.0645166,-0.0629764,-0.0614364,-0.0598968,-0.0583575,-0.0568184,-0.0552796,-0.053741,-0.0522027,-0.0506647,-0.0491269,-0.0475893,-0.046052,-0.0445148,-0.0429779,-0.0414412,-0.0399047,-0.0383684,-0.0368322,-0.0352962,-0.0337604,-0.0322247,-0.0306892,-0.0291539,-0.0276187,-0.0260836,-0.0245486,-0.0230138,-0.021479,-0.0199444,-0.0184098,-0.0168754,-0.015341,-0.0138067,-0.0122724,-0.0107382,-0.00920408,-0.00766999,-0.00613593,-0.0046019,-0.00306789,-0.0015339};
