/* File: driver1.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 10/6/12
*/

#include <stdio.h>
#include "maxmin.h"

float max(float n1, float n2);
float min(float n1, float n2);

main()
{
float x, y, high, low;
int flag;

	printf("Enter numbers to be tested:\n");
	flag = scanf("%f %f", &x, &y);

	while (flag != EOF)
	{
		high = max(x, y);
		low = min(x, y);
	
	printf("The max number is %4.2f\n", max(x, y));
	printf("The min number is %4.2f\n", min(x, y));
	
	printf("Enter numbers to be tested:\n");
	flag = scanf("%f %f", &x, &y);
	}
	
}
