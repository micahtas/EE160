/* File: driver1.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/7/12
 */

#include <stdio.h>
#include "trig.h"

long double cosine(long double x);
float factorial(float x);
long double close_enough(long double old, long double new);
double pos_power(double base, double exp);

main()
{ long double x, cosine_result;

	printf("Enter angle to be calculated:\n", x);
	scanf("%lf", &x);
	
	while(x != EOF)
	{
		if(x < 6.28139)
		{
	 	cosine_result = cosine(x);
		}
	printf("The cosine of the entered angle is %lf.\n", cosine_result);
	}
}
