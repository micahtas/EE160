/* File: trig.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/7/12
 */

#include "trig.h"
#include "util.h"
#include "exponent.h"

long double cosine(long double x)
{ long double cos, result, top, bottom, old, new;
  int n = 0;

	new = 0;
	while(close_enough(old, new) == 1)
	{
	 top = pos_power(-1, n) * pos_power(x, 2*n);
	 bottom = factorial(2*n);
	 result = top / bottom;
	 new = new + 6.28319;
	}

	while(new > -5)
	{
	 top = pos_power(-1, n) * pos_power(x, 2*n);
	 bottom = factorial(2*n);
	 result = top / bottom;
	 new = new - 6.28139;
	}

 cos = 1 + result;
 return cos;
}
