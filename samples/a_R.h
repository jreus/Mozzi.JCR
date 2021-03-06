#ifndef a_R_H_
#define a_R_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define a_R_NUM_CELLS 4806
#define a_R_SAMPLERATE 22500
 
const int8_t __attribute__((section(".progmem.data"))) a_R_DATA [] = {0, 0, 0,
0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
-2, -4, -3, 2, 5, 6, 7, 9, 10, 9, 6, 3, 0, -1, -1, -1, -2, -2, -2, -1, 0, 1, 0,
1, 2, 3, 2, 1, -1, -3, -4, -5, -6, -6, -6, -5, -3, -1, -1, 0, 0, -1, -1, -1, -2,
-3, -3, -2, -1, -2, -2, -2, -1, -2, -2, -1, -1, 0, 0, 1, 2, 1, 1, 0, 0, 0, -1,
-1, 0, 0, 1, 1, 2, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 1,
1, 1, 0, 1, 1, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2,
-2, -3, -3, -3, -3, -3, -3, -3, -3, -3, -4, -4, -3, -3, -3, -3, -3, -3, -3, -2,
-3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, 0, 0, 0, 1, 1, 2, 2, 3, 2, 2, 3, 3,
3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 1, 0, 0, -1,
-2, -3, -5, -7, -9, -11, -12, -15, -18, -20, -24, -32, -39, -40, -32, -22, -14,
-5, 7, 17, 21, 20, 16, 10, 4, 0, -3, -5, -8, -8, -5, -2, 1, 2, 5, 11, 17, 20,
22, 22, 19, 14, 9, 3, -2, -5, -3, 3, 10, 15, 19, 20, 21, 20, 17, 12, 8, 6, 6, 6,
6, 5, 4, 3, 3, 2, 2, 2, 3, 5, 7, 7, 4, -1, -6, -10, -15, -21, -26, -33, -49,
-65, -64, -45, -24, -10, 0, 15, 30, 35, 27, 13, 0, -9, -13, -15, -18, -22, -22,
-15, -7, -4, -3, -1, 7, 18, 25, 27, 23, 18, 11, 3, -7, -16, -21, -18, -9, 3, 10,
15, 20, 23, 23, 19, 13, 8, 5, 6, 6, 5, 1, -3, -4, 0, 2, 2, 4, 8, 14, 18, 19, 17,
13, 10, 7, 2, -6, -11, -11, -7, -2, -1, -2, -4, -7, -12, -23, -42, -59, -60,
-48, -34, -24, -13, 4, 21, 29, 27, 18, 8, 1, -4, -9, -15, -21, -21, -14, -7, -4,
-3, 0, 7, 15, 19, 19, 17, 14, 9, 4, -2, -8, -12, -11, -4, 3, 8, 12, 17, 21, 22,
20, 15, 10, 3, -2, -3, -2, -2, 0, 2, 3, 5, 7, 11, 13, 14, 16, 17, 15, 11, 6, 0,
-5, -10, -12, -13, -12, -10, -9, -10, -16, -34, -52, -59, -51, -39, -28, -18,
-1, 15, 24, 22, 15, 6, 0, -2, -2, -5, -10, -11, -7, -4, -5, -8, -7, 0, 10, 17,
21, 20, 17, 13, 7, 1, -5, -8, -4, 5, 13, 17, 16, 14, 14, 16, 12, 2, -3, 0, 5, 8,
8, 6, 5, 6, 9, 9, 7, 6, 9, 15, 18, 16, 10, 6, 5, 4, -1, -8, -13, -14, -12, -12,
-14, -19, -29, -46, -57, -57, -46, -33, -20, -6, 10, 23, 27, 20, 9, 1, -4, -8,
-12, -17, -19, -17, -12, -7, -5, -3, 3, 13, 22, 25, 24, 21, 15, 8, -2, -10, -13,
-11, -4, 7, 16, 20, 20, 17, 14, 11, 4, 0, 3, 8, 11, 12, 12, 10, 6, 2, -1, -1, 1,
6, 13, 19, 21, 19, 13, 7, 1, -5, -10, -14, -15, -14, -13, -15, -25, -45, -62,
-65, -53, -36, -22, -7, 11, 26, 31, 25, 12, -1, -8, -10, -12, -16, -19, -18,
-12, -8, -8, -8, -2, 10, 23, 32, 34, 30, 23, 13, 0, -13, -22, -23, -15, -1, 14,
25, 31, 32, 30, 22, 10, 1, 0, 2, 6, 11, 13, 11, 7, 3, -2, -5, -3, 3, 11, 19, 24,
24, 20, 13, 5, -3, -10, -16, -18, -17, -17, -20, -31, -50, -67, -68, -56, -39,
-23, -5, 16, 33, 36, 27, 13, 1, -6, -10, -14, -18, -21, -19, -15, -12, -12, -10,
-2, 11, 25, 33, 34, 30, 22, 11, -3, -15, -22, -21, -10, 4, 17, 24, 26, 28, 32,
33, 29, 22, 15, 11, 10, 7, 0, -7, -11, -10, -7, -3, 2, 9, 16, 21, 22, 19, 11, 2,
-5, -11, -16, -21, -24, -31, -48, -68, -75, -63, -43, -25, -8, 13, 33, 44, 40,
26, 7, -7, -15, -20, -24, -29, -28, -21, -12, -9, -9, -6, 5, 20, 33, 39, 38, 32,
22, 8, -8, -23, -30, -26, -13, 4, 18, 29, 35, 35, 27, 19, 18, 18, 17, 17, 19,
17, 10, 2, -6, -12, -15, -11, -4, 5, 13, 19, 22, 20, 14, 6, -2, -9, -17, -23,
-28, -36, -56, -77, -81, -65, -40, -23, -8, 13, 36, 46, 38, 21, 4, -6, -10, -13,
-19, -26, -26, -18, -11, -12, -16, -12, 2, 19, 31, 36, 36, 32, 24, 11, -7, -24,
-32, -27, -13, 2, 14, 22, 31, 40, 41, 34, 25, 20, 19, 19, 17, 14, 10, 6, 2, -3,
-8, -10, -9, -4, 1, 5, 7, 7, 5, 4, 1, -7, -17, -30, -50, -76, -92, -85, -63,
-39, -16, 10, 36, 51, 50, 38, 20, 2, -10, -16, -21, -25, -25, -20, -15, -14,
-14, -12, -3, 12, 25, 34, 38, 36, 29, 17, 2, -13, -23, -23, -13, 1, 13, 18, 21,
25, 27, 25, 20, 16, 17, 22, 27, 26, 19, 14, 12, 10, 5, 1, -3, -5, -5, -2, -3,
-8, -12, -10, -6, -8, -17, -38, -66, -85, -82, -63, -44, -30, -7, 24, 47, 50,
37, 21, 8, -3, -11, -19, -26, -29, -22, -11, -4, -5, -5, 1, 13, 22, 25, 24, 20,
16, 10, 1, -8, -13, -11, -3, 8, 15, 20, 26, 31, 31, 25, 17, 12, 9, 8, 9, 11, 12,
13, 15, 16, 16, 15, 15, 12, 8, 0, -8, -16, -21, -24, -23, -25, -41, -71, -91,
-85, -63, -40, -20, 4, 31, 49, 51, 37, 16, -3, -13, -18, -24, -30, -29, -20, -7,
0, 0, 0, 6, 17, 29, 34, 32, 26, 20, 11, -3, -18, -27, -23, -8, 8, 21, 30, 35,
36, 35, 29, 19, 11, 7, 7, 9, 10, 9, 9, 12, 13, 14, 15, 15, 13, 10, 6, -2, -13,
-22, -26, -25, -29, -51, -83, -99, -88, -61, -37, -16, 12, 44, 64, 62, 42, 17,
-3, -15, -22, -31, -39, -37, -24, -8, -2, -2, -1, 8, 22, 32, 35, 31, 25, 18, 9,
-4, -20, -29, -21, -1, 16, 27, 34, 40, 43, 39, 26, 9, -1, -1, 3, 4, 6, 7, 11,
17, 19, 19, 19, 19, 18, 13, 3, -11, -24, -30, -30, -34, -53, -84, -101, -91,
-65, -45, -28, 0, 34, 58, 61, 47, 25, 6, -4, -12, -24, -38, -44, -36, -21, -12,
-8, -3, 10, 26, 39, 42, 35, 24, 12, -1, -16, -29, -31, -22, -1, 22, 39, 45, 44,
41, 35, 24, 9, -1, -2, 2, 6, 6, 4, 5, 8, 10, 14, 18, 21, 23, 22, 15, 1, -17,
-29, -30, -39, -70, -105, -114, -94, -66, -47, -27, 5, 39, 62, 66, 52, 30, 12,
4, -6, -26, -45, -49, -38, -25, -16, -9, 2, 19, 37, 50, 51, 42, 29, 16, 3, -15,
-32, -35, -19, 3, 20, 33, 41, 44, 43, 38, 31, 19, 9, 6, 5, 0, -6, -6, 0, 8, 15,
20, 23, 22, 18, 12, 2, -15, -28, -30, -36, -61, -92, -98, -80, -58, -41, -22, 4,
28, 42, 45, 36, 19, 4, -3, -7, -19, -34, -38, -29, -17, -8, 0, 12, 27, 40, 47,
44, 32, 15, -1, -11, -16, -19, -15, -1, 17, 32, 43, 47, 44, 39, 35, 28, 18, 9,
6, 3, -3, -11, -15, -12, -4, 5, 13, 23, 29, 29, 22, 9, -10, -27, -42, -66, -100,
-119, -104, -70, -41, -20, 7, 34, 50, 49, 38, 22, 5, -5, -10, -18, -33, -47,
-49, -42, -31, -18, -1, 22, 47, 66, 71, 60, 40, 16, -9, -26, -33, -35, -26, -4,
17, 30, 37, 42, 44, 47, 52, 53, 44, 30, 19, 8, -7, -21, -29, -25, -15, -5, 5,
13, 16, 13, 8, -2, -13, -26, -49, -82, -107, -106, -84, -59, -38, -11, 20, 41,
47, 41, 31, 21, 11, 2, -10, -27, -43, -49, -46, -39, -29, -14, 8, 33, 52, 61,
56, 43, 27, 10, -4, -15, -19, -14, -5, 5, 14, 21, 26, 29, 37, 47, 52, 47, 37,
26, 17, 7, -3, -9, -9, -4, 2, 5, 4, 0, -6, -8, -10, -12, -28, -64, -100, -110,
-93, -71, -54, -31, 4, 37, 55, 53, 36, 17, 4, -1, -7, -21, -36, -41, -35, -26,
-21, -17, -6, 15, 39, 56, 60, 50, 35, 21, 10, -1, -14, -25, -18, 1, 15, 19, 15,
16, 32, 50, 58, 52, 40, 31, 25, 15, -1, -15, -19, -11, -2, 3, 2, -2, -4, -2, -3,
-7, -19, -48, -83, -100, -90, -72, -60, -47, -22, 10, 33, 41, 36, 27, 21, 18,
10, -8, -32, -50, -55, -52, -48, -38, -19, 8, 39, 63, 73, 66, 50, 32, 18, 5,
-10, -21, -17, -4, 6, 12, 16, 17, 25, 42, 56, 58, 50, 40, 30, 17, 3, -10, -16,
-14, -7, 0, 1, -2, -4, -4, -5, -6, -14, -43, -82, -100, -89, -72, -63, -50, -22,
11, 34, 46, 47, 39, 33, 31, 23, -1, -31, -53, -61, -59, -54, -46, -30, -6, 23,
48, 57, 54, 50, 46, 40, 30, 16, 3, -5, -8, -7, -6, -4, -1, 14, 38, 58, 64, 60,
52, 41, 30, 17, 1, -12, -18, -16, -12, -12, -15, -16, -12, -7, -2, -14, -48,
-84, -92, -76, -61, -54, -44, -22, 3, 23, 33, 34, 30, 32, 36, 30, 6, -23, -44,
-52, -53, -51, -44, -28, -6, 20, 40, 48, 45, 40, 38, 39, 32, 18, 3, -5, -4, -2,
-3, -6, -4, 12, 36, 54, 57, 51, 46, 43, 37, 25, 7, -11, -22, -25, -25, -28, -30,
-23, -10, 3, 2, -23, -65, -89, -81, -58, -47, -46, -34, -12, 9, 18, 17, 13, 16,
30, 41, 32, 3, -26, -40, -43, -46, -48, -42, -23, 3, 26, 38, 37, 30, 28, 36, 42,
37, 23, 11, 12, 17, 12, 0, -10, -9, 8, 28, 37, 36, 37, 44, 50, 48, 36, 17, 0,
-10, -17, -26, -38, -45, -39, -26, -14, -17, -44, -78, -83, -57, -30, -22, -21,
-10, 5, 12, 10, 4, 3, 12, 28, 38, 24, -8, -35, -43, -41, -39, -37, -27, -7, 16,
33, 38, 32, 25, 27, 35, 38, 27, 13, 9, 13, 14, 10, 5, 0, 4, 20, 38, 40, 34, 33,
40, 45, 41, 29, 14, 0, -9, -17, -26, -37, -41, -37, -28, -24, -35, -66, -95,
-90, -58, -31, -23, -14, 3, 16, 17, 13, 9, 10, 20, 35, 35, 11, -20, -40, -44,
-44, -45, -41, -29, -10, 10, 26, 33, 35, 37, 47, 56, 50, 29, 12, 7, 7, 4, -3,
-6, -4, 4, 17, 30, 37, 40, 46, 51, 50, 42, 31, 20, 9, -2, -15, -29, -44, -51,
-50, -44, -37, -44, -68, -86, -74, -44, -26, -25, -22, -8, 4, 9, 9, 12, 17, 27,
36, 30, 7, -20, -31, -29, -27, -30, -33, -28, -17, -5, 4, 13, 22, 32, 46, 56,
54, 41, 28, 23, 22, 19, 8, -2, -6, -2, 9, 26, 37, 41, 45, 48, 45, 37, 30, 25,
19, 12, 1, -15, -37, -51, -57, -54, -47, -52, -75, -93, -78, -46, -26, -23, -19,
-10, 0, 8, 14, 17, 21, 33, 41, 32, 4, -20, -27, -25, -24, -28, -32, -31, -23,
-12, -3, 5, 16, 30, 41, 46, 47, 45, 38, 34, 30, 25, 18, 8, -5, -11, -8, 5, 22,
38, 50, 56, 57, 51, 42, 31, 21, 9, -1, -13, -25, -37, -44, -48, -47, -42, -48,
-76, -98, -83, -48, -28, -26, -21, -11, -4, -1, 5, 11, 19, 31, 37, 26, 2, -17,
-21, -17, -15, -16, -22, -26, -25, -20, -13, -5, 7, 21, 32, 39, 42, 39, 34, 35,
36, 33, 25, 14, 1, -4, 1, 15, 27, 31, 36, 42, 44, 42, 41, 36, 27, 14, 3, -10,
-23, -34, -40, -43, -41, -39, -55, -87, -104, -85, -50, -29, -30, -31, -23, -11,
-3, 5, 16, 30, 41, 40, 27, 5, -11, -15, -9, -5, -10, -23, -32, -33, -27, -22,
-13, 2, 20, 34, 39, 41, 44, 49, 53, 53, 43, 25, 7, -4, -6, -2, 5, 16, 30, 39,
41, 39, 37, 37, 38, 33, 19, 4, -6, -15, -26, -35, -38, -37, -35, -47, -74, -95,
-85, -58, -44, -45, -47, -38, -27, -17, -8, 7, 25, 40, 44, 36, 20, 3, -3, -1, 0,
-7, -18, -29, -37, -36, -29, -21, -12, 1, 17, 28, 35, 41, 48, 56, 60, 54, 39,
24, 15, 12, 11, 13, 16, 19, 21, 22, 21, 22, 24, 28, 28, 21, 10, 1, -3, -6, -9,
-12, -17, -27, -32, -41, -65, -90, -85, -63, -50, -55, -57, -49, -40, -27, -12,
4, 19, 36, 46, 41, 27, 17, 15, 16, 10, -5, -23, -32, -31, -24, -18, -13, -9, -2,
4, 12, 18, 25, 32, 41, 48, 46, 38, 33, 37, 40, 38, 32, 26, 25, 27, 26, 20, 14,
12, 11, 10, 6, 1, -2, 0, 1, -1, -5, -9, -12, -12, -12, -27, -59, -88, -84, -63,
-55, -64, -69, -60, -48, -36, -22, -4, 14, 30, 38, 34, 25, 22, 30, 36, 28, 9,
-11, -22, -26, -24, -17, -7, 1, 1, 1, 3, 9, 12, 15, 20, 28, 33, 31, 31, 41, 54,
57, 48, 34, 28, 31, 30, 20, 9, 6, 7, 4, 0, -4, -3, -2, 2, 2, 0, -7, -11, -11,
-9, -11, -30, -62, -87, -77, -61, -57, -71, -75, -64, -49, -38, -29, -13, 3, 20,
28, 26, 22, 26, 36, 41, 33, 17, 2, -4, -4, -2, -1, 0, -2, -7, -13, -14, -8, 0,
6, 11, 17, 23, 29, 34, 40, 47, 51, 45, 36, 31, 32, 31, 26, 18, 10, 2, -2, -2, 3,
9, 11, 7, 1, -5, -7, -7, -9, -14, -19, -20, -28, -52, -77, -73, -53, -46, -62,
-78, -77, -65, -50, -37, -21, -5, 9, 17, 21, 26, 35, 46, 54, 50, 34, 20, 13, 11,
7, 0, -6, -11, -15, -17, -18, -13, -5, 3, 9, 11, 9, 12, 22, 29, 32, 36, 42, 41,
36, 29, 28, 31, 34, 30, 23, 16, 10, 6, 3, 0, -5, -8, -8, -5, -3, -2, -2, -3, -9,
-18, -26, -40, -66, -85, -74, -53, -53, -72, -80, -67, -47, -31, -20, -11, 0,
12, 21, 25, 27, 33, 41, 45, 38, 27, 20, 23, 26, 22, 12, 1, -6, -8, -10, -14,
-17, -18, -16, -9, -1, 4, 10, 18, 24, 25, 26, 32, 41, 42, 37, 31, 30, 27, 23,
19, 15, 16, 20, 23, 18, 16, 16, 15, 6, -2, -9, -15, -21, -27, -30, -32, -32,
-39, -56, -75, -69, -42, -27, -40, -57, -55, -41, -30, -25, -19, -9, 6, 18, 20,
18, 24, 38, 47, 42, 28, 18, 16, 18, 16, 6, -4, -10, -10, -8, -8, -8, -6, -5, -6,
-2, 7, 12, 10, 7, 5, 4, 6, 13, 19, 23, 26, 33, 41, 44, 41, 39, 37, 35, 31, 25,
16, 10, 7, 1, -10, -17, -16, -12, -14, -19, -19, -18, -23, -27, -31, -45, -60,
-56, -32, -18, -28, -46, -51, -45, -32, -22, -18, -18, -13, -5, -3, -4, 0, 10,
16, 17, 11, 9, 12, 24, 31, 30, 23, 18, 15, 13, 8, -1, -8, -14, -19, -23, -22,
-17, -8, -4, -5, -6, 1, 10, 18, 26, 33, 36, 38, 41, 45, 45, 44, 44, 43, 37, 25,
14, 8, 3, -6, -14, -17, -13, -9, -9, -9, -8, -8, -9, -11, -11, -17, -32, -50,
-49, -36, -38, -56, -70, -68, -59, -49, -42, -38, -36, -28, -14, -1, 5, 12, 22,
28, 28, 26, 27, 33, 38, 39, 31, 19, 9, 6, 5, 0, -3, -6, -9, -14, -18, -17, -14,
-11, -10, -7, -1, 10, 23, 37, 42, 37, 30, 29, 35, 37, 34, 30, 29, 29, 28, 25,
24, 24, 23, 21, 17, 13, 10, 10, 11, 6, -4, -11, -15, -17, -20, -26, -31, -38,
-53, -64, -57, -43, -45, -65, -79, -74, -59, -44, -36, -34, -34, -25, -12, -3,
2, 9, 21, 29, 29, 26, 27, 34, 41, 38, 27, 17, 14, 18, 22, 20, 11, 4, 1, -1, -3,
-5, -7, -9, -10, -11, -10, -3, 5, 9, 11, 13, 17, 20, 26, 32, 35, 34, 37, 41, 41,
39, 36, 33, 28, 25, 25, 23, 17, 8, 0, -5, -8, -8, -10, -13, -17, -19, -22, -25,
-26, -36, -52, -65, -53, -40, -48, -71, -82, -72, -62, -58, -58, -52, -44, -29,
-16, -8, -1, 13, 31, 42, 43, 43, 47, 54, 57, 52, 42, 35, 34, 34, 28, 15, 5, -2,
-8, -15, -20, -20, -18, -18, -21, -24, -25, -19, -11, -4, 0, 1, 7, 15, 21, 24,
26, 30, 37, 45, 48, 46, 45, 45, 44, 39, 35, 34, 33, 29, 19, 11, 6, 3, -2, -10,
-19, -26, -27, -28, -32, -42, -47, -51, -61, -74, -69, -52, -49, -66, -78, -71,
-56, -43, -35, -27, -23, -18, -10, 0, 8, 17, 28, 38, 39, 37, 40, 48, 53, 51, 43,
35, 30, 26, 21, 10, -4, -16, -22, -24, -24, -25, -27, -28, -29, -30, -30, -26,
-17, -7, 3, 8, 12, 18, 31, 42, 43, 38, 37, 41, 47, 49, 47, 43, 41, 39, 38, 37,
33, 28, 23, 20, 14, 5, -3, -6, -8, -12, -18, -23, -26, -28, -30, -33, -37, -39,
-40, -48, -60, -59, -45, -40, -51, -63, -60, -49, -43, -42, -41, -37, -29, -16,
-3, 5, 10, 18, 26, 30, 29, 29, 34, 41, 43, 37, 29, 24, 24, 23, 18, 10, 2, -3,
-6, -8, -12, -19, -25, -26, -25, -23, -19, -13, -5, 1, 9, 17, 25, 30, 33, 36,
39, 42, 42, 43, 43, 41, 39, 37, 34, 30, 27, 24, 21, 17, 16, 16, 14, 10, 1, -7,
-11, -12, -13, -16, -20, -24, -27, -30, -31, -32, -33, -33, -41, -54, -58, -48,
-40, -48, -62, -65, -53, -42, -38, -37, -32, -24, -12, -2, 4, 8, 15, 24, 28, 25,
23, 28, 35, 36, 31, 23, 19, 20, 24, 22, 12, 0, -5, -4, -2, -2, -4, -6, -8, -8,
-5, -1, 0, -1, -1, 0, -1, 2, 6, 9, 11, 14, 16, 16, 19, 23, 28, 31, 32, 30, 28,
28, 28, 28, 24, 20, 16, 16, 16, 13, 7, 2, -1, 1, 1, 1, -1, -4, -5, -8, -10, -13,
-14, -19, -24, -35, -49, -58, -52, -41, -45, -62, -71, -63, -51, -43, -40, -36,
-32, -24, -12, -1, 4, 9, 16, 22, 21, 19, 22, 30, 34, 29, 21, 17, 19, 21, 21, 16,
9, 2, 0, 2, 4, 1, -4, -8, -9, -10, -9, -9, -8, -8, -8, -9, -10, -8, -2, 3, 6, 8,
9, 14, 22, 28, 31, 35, 38, 41, 41, 41, 41, 39, 37, 34, 30, 25, 22, 18, 15, 13,
13, 13, 11, 8, 3, 0, -5, -11, -17, -19, -21, -26, -32, -37, -41, -47, -56, -57,
-50, -46, -55, -67, -67, -55, -45, -42, -42, -39, -32, -20, -7, 0, 2, 4, 11, 16,
16, 15, 18, 23, 25, 24, 20, 16, 16, 21, 22, 17, 11, 9, 11, 12, 10, 4, -2, -7,
-8, -7, -7, -11, -13, -10, -5, 0, 5, 9, 11, 13, 15, 20, 22, 24, 26, 29, 31, 30,
31, 32, 34, 35, 34, 30, 25, 22, 22, 20, 16, 9, 5, 3, 3, 2, 1, -2, -4, -6, -5,
-6, -6, -5, -4, -8, -13, -18, -23, -29, -39, -50, -55, -48, -45, -52, -64, -62,
-54, -48, -45, -43, -40, -38, -29, -20, -15, -14, -9, 1, 10, 14, 17, 23, 29, 32,
31, 28, 25, 26, 29, 29, 24, 20, 20, 21, 21, 20, 15, 9, 4, 2, 0, -4, -7, -10,
-11, -10, -8, -8, -8, -6, -5, -4, -3, -2, 2, 8, 13, 18, 20, 21, 23, 29, 34, 37,
37, 37, 37, 38, 39, 38, 36, 32, 29, 27, 22, 16, 12, 9, 7, 3, -1, -6, -10, -15,
-20, -28, -37, -46, -52, -57, -68, -75, -71, -58, -56, -64, -67, -56, -41, -32,
-27, -25, -23, -19, -11, -4, -3, -3, 3, 12, 16, 14, 15, 21, 26, 27, 25, 22, 21,
22, 26, 26, 20, 14, 11, 12, 11, 5, -3, -8, -11, -12, -13, -14, -17, -19, -17,
-13, -10, -7, -2, 6, 10, 14, 17, 24, 29, 31, 33, 37, 39, 32, 27, 28, 31, 31, 30,
28, 24, 24, 28, 31, 30, 26, 23, 21, 20, 14, 6, 0, -3, -7, -11, -14, -15, -17,
-21, -25, -30, -34, -36, -38, -44, -51, -55, -47, -41, -42, -50, -49, -41, -37,
-37, -40, -38, -38, -32, -27, -25, -25, -18, -6, 4, 7, 11, 18, 26, 32, 35, 35,
34, 32, 33, 33, 27, 19, 13, 10, 7, 4, 1, -2, -5, -7, -8, -7, -7, -7, -7, -5, -5,
-5, -4, -1, 5, 12, 14, 14, 17, 20, 25, 28, 30, 28, 27, 29, 32, 33, 32, 32, 34,
37, 37, 36, 35, 33, 28, 22, 13, 4, -3, -6, -10, -16, -22, -26, -27, -26, -26,
-27, -31, -33, -33, -32, -33, -42, -50, -52, -45, -45, -51, -57, -52, -44, -37,
-32, -31, -30, -27, -17, -8, -5, -6, -2, 6, 12, 14, 14, 17, 21, 25, 28, 25, 21,
19, 21, 22, 18, 13, 10, 8, 7, 5, 4, 3, 2, 3, 4, 4, 1, -2, -1, 1, 1, -2, -3, 1,
4, 7, 9, 12, 16, 20, 24, 26, 27, 29, 31, 32, 29, 24, 20, 19, 20, 21, 19, 16, 16,
17, 18, 15, 11, 5, 1, -1, -3, -4, -7, -11, -12, -11, -10, -11, -11, -13, -16,
-21, -26, -28, -31, -37, -42, -41, -39, -42, -46, -47, -41, -36, -32, -31, -30,
-29, -25, -19, -16, -13, -10, -4, 0, 4, 7, 9, 13, 17, 20, 21, 22, 22, 21, 20,
19, 17, 14, 11, 10, 10, 9, 7, 5, 3, 4, 5, 5, 2, -2, -4, -4, -1, -3, -4, -3, 1,
5, 9, 11, 13, 16, 19, 23, 23, 24, 27, 32, 34, 32, 28, 26, 26, 27, 27, 24, 19,
17, 17, 16, 12, 6, 3, 2, 1, -2, -9, -14, -17, -17, -17, -20, -24, -28, -29, -29,
-30, -35, -39, -44, -45, -44, -39, -40, -42, -41, -37, -32, -28, -24, -23, -19,
-17, -13, -9, -6, -5, -3, 1, 3, 3, 2, 4, 6, 8, 9, 8, 9, 11, 14, 15, 16, 15, 13,
12, 12, 12, 8, 3, 0, 0, 1, 2, 2, 2, 4, 7, 11, 13, 14, 13, 15, 17, 19, 20, 21,
21, 21, 20, 17, 15, 15, 18, 20, 20, 17, 16, 18, 21, 24, 24, 21, 18, 16, 18, 19,
17, 11, 6, 4, 3, 1, -4, -9, -15, -17, -20, -22, -26, -28, -29, -29, -30, -31,
-31, -29, -26, -27, -31, -35, -34, -32, -31, -34, -37, -37, -35, -29, -23, -21,
-21, -18, -13, -7, -2, 1, 4, 7, 9, 11, 11, 10, 9, 8, 8, 6, 4, 3, 6, 9, 9, 6, 4,
5, 6, 7, 6, 4, 3, 5, 7, 9, 10, 9, 10, 11, 13, 14, 14, 15, 16, 17, 18, 20, 22,
24, 28, 31, 32, 31, 31, 33, 34, 32, 28, 23, 19, 16, 13, 10, 5, 0, -3, -3, -3,
-4, -5, -6, -7, -6, -6, -8, -11, -12, -13, -15, -17, -20, -21, -21, -21, -21,
-22, -23, -23, -22, -22, -24, -25, -27, -28, -27, -27, -28, -29, -29, -27, -26,
-25, -26, -25, -23, -21, -19, -20, -19, -16, -12, -9, -6, -4, -3, 0, 5, 7, 7, 8,
10, 12, 12, 11, 10, 10, 9, 7, 6, 7, 8, 10, 13, 15, 17, 19, 22, 23, 23, 22, 22,
21, 21, 22, 23, 23, 23, 23, 23, 23, 22, 23, 23, 23, 22, 21, 21, 21, 21, 20, 19,
16, 14, 13, 11, 8, 5, 2, -1, -4, -6, -8, -11, -14, -15, -15, -17, -19, -22, -23,
-24, -24, -23, -23, -23, -24, -27, -29, -30, -29, -31, -34, -36, -36, -34, -34,
-32, -31, -29, -28, -26, -26, -27, -26, -21, -18, -18, -19, -17, -11, -6, -1, 1,
2, 4, 8, 13, 16, 17, 18, 19, 21, 24, 25, 26, 25, 25, 24, 23, 22, 21, 20, 19, 19,
19, 19, 18, 18, 19, 20, 20, 19, 20, 21, 22, 23, 23, 22, 22, 22, 21, 19, 17, 16,
16, 16, 16, 15, 12, 11, 11, 10, 8, 5, 2, -1, -5, -8, -9, -9, -10, -11, -14, -16,
-17, -16, -16, -17, -19, -21, -22, -22, -23, -24, -25, -26, -26, -26, -26, -25,
-26, -26, -27, -26, -24, -22, -20, -19, -18, -19, -17, -16, -14, -14, -14, -15,
-16, -13, -11, -8, -8, -8, -8, -8, -6, -3, -1, 1, 2, 3, 4, 6, 9, 12, 14, 14, 14,
14, 14, 16, 17, 17, 14, 13, 14, 15, 15, 15, 16, 17, 18, 19, 20, 21, 22, 23, 22,
22, 22, 21, 21, 20, 19, 17, 16, 15, 14, 14, 13, 10, 7, 5, 5, 5, 4, 0, -2, -4,
-4, -5, -6, -8, -10, -11, -10, -10, -10, -12, -13, -13, -14, -14, -13, -13, -13,
-14, -15, -15, -14, -13, -12, -12, -13, -15, -16, -16, -15, -15, -17, -19, -20,
-21, -20, -18, -17, -16, -15, -13, -10, -7, -6, -5, -5, -5, -5, -5, -6, -6, -4,
-2, -2, -3, -2, 0, 3, 3, 4, 4, 3, 3, 4, 5, 6, 5, 5, 6, 7, 8, 8, 9, 9, 10, 12,
12, 13, 14, 15, 17, 17, 16, 16, 17, 18, 19, 19, 18, 17, 16, 15, 14, 11, 9, 6, 4,
3, 2, 1, 1, 0, 0, 0, -1, -1, -1, 0, 0, -1, -2, -3, -2, -2, -3, -4, -5, -5, -4,
-4, -5, -5, -6, -6, -7, -7, -9, -9, -9, -10, -9, -9, -10, -11, -12, -11, -11,
-11, -11, -11, -9, -9, -9, -9, -8, -7, -7, -6, -7, -6, -6, -6, -5, -6, -7, -6,
-5, -5, -6, -6, -7, -6, -5, -5, -5, -5, -4, -2, 0, 2, 3, 3, 5, 6, 6, 6, 6, 5, 6,
6, 5, 5, 6, 7, 7, 8, 9, 9, 9, 9, 10, 10, 9, 9, 8, 8, 8, 8, 8, 8, 7, 6, 5, 5, 4,
4, 3, 2, 2, 2, 2, 2, 1, 2, 2, 1, 2, 2, 3, 3, 4, 4, 4, 3, 3, 2, 1, -1, -3, -4,
-5, -6, -8, -9, -9, -8, -7, -8, -9, -10, -10, -10, -10, -10, -10, -10, -10, -10,
-9, -8, -7, -6, -6, -6, -7, -6, -5, -5, -6, -7, -7, -7, -5, -4, -2, -2, -2, -1,
0, 1, 3, 5, 5, 5, 3, 3, 3, 3, 4, 3, 2, 0, -1, -1, 1, 2, 2, 1, 0, 0, 1, 2, 4, 4,
4, 4, 5, 7, 9, 10, 10, 9, 8, 7, 6, 5, 5, 4, 3, 2, 2, 2, 2, 2, 1, 0, -1, -2, -2,
-3, -3, -3, -4, -4, -5, -5, -4, -3, -3, -3, -2, -2, -1, 0, 0, 0, 0, -2, -3, -2,
-2, -2, -3, -2, -3, -4, -4, -4, -5, -5, -5, -5, -4, -5, -4, -4, -2, -2, -3, -3,
-2, -3, -2, -2, -2, -2, -3, -4, -5, -4, -3, -3, -4, -3, -3, -2, -1, 0, 0, 0, 0,
0, 1, 1, 2, 2, 2, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1,
1, 1, 0, -1, -2, -3, -2, -2, -3, -3, -3, -2, 0, 2, 2, 1, 1, 2, 2, 2, 2, 3, 3, 3,
2, 2, 3, 4, 4, 3, 2, 1, 1, 0, -1, -2, -2, -2, -2, -3, -4, -4, -3, -3, -3, -4,
-6, -7, -6, -5, -5, -5, -6, -5, -5, -3, -3, -2, -1, 0, 1, 1, 1, 2, 3, 3, 3, 2,
0, -1, 0, 1, 0, -1, -2, -3, -2, -1, -1, -1, -1, -1, -1, -1, 0, 1, 3, 3, 3, 3, 2,
3, 4, 4, 2, 1, 0, -1, -2, -2, -3, -4, -5, -4, };

#endif /* a_R_H_ */
