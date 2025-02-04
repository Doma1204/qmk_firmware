#pragma once

#include "quantum.h"

// readability
#define XXX KC_NO

/* Custom layout by a Taobao manufacturer
 * ,-----------------------------------------------------------.
 * | 00| 01| 02| 03| 04| 05| 06| 07| 08| 09| 0a| 0b| 0c|    0e |
 * |-----------------------------------------------------------|
 * | 10  | 12| 13| 14| 15| 16| 17| 18| 19| 1a| 1b| 1c| 1d|  1e |
 * |-----------------------------------------------------------|
 * | 20   | 22| 23| 24| 25| 26| 27| 28| 29| 2a| 2b| 2c|     2d |
 * |-----------------------------------------------------------|
 * | 31     | 32| 33| 34| 35| 36| 37| 38| 39| 3a| 3b|       3d |
 * |-----------------------------------------------------------|
 * | 40 | 41 | 43 |           46           | 4a | 4b | 4d | 4e |
 * `-----------------------------------------------------------'
 */
#define LAYOUT_60_custom( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0e, \
	k10, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, \
	k20, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2d, \
	k31,      k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d, \
	k40, k41, k43,                k46,                k4a, k4b, k4d, k4e  \
) \
{ \
	{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, XXX, k0e}, \
	{k10, XXX, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e}, \
	{k20, XXX, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, XXX}, \
	{XXX, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, XXX, k3d, XXX}, \
	{k40, k41, XXX, k43, XXX, XXX, k46, XXX, XXX, XXX, k4a, k4b, XXX, k4d, k4e}  \
}
