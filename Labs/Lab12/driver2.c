/* File: driver2.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/16/12
 */

#include <stdio.h>
#include "swap3.h"

main()
{ float a, b, c;

	printf("Enter value for a, b and c:\n", a, b, c);
	scanf("%f %f %f", &a, &b, &c);

	recorder(&a, &b, &c);
} 
