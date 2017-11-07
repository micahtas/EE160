/* File: meter.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/30/12
 */

#include <stdio.h>
#include "water.h"
#include "meter.h"

float compute_usage(int num, int *vals, int use[], int *hi_idx)
{ int i, hinum;
  double total;

	total = hinum = 0;
	for (i = 1; i < num; i++)
	{
		use[i-1] = vals[i] - vals[i-1];
		total = total + use[i-1];

		if (use[i-1] > hinum)
		{
			hinum = use[i-1];
			*hi_idx = i - 1;
		}
	}

	return total / 24;
}
