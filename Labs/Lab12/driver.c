/* File: driver.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/16/12
 */

#include <stdio.h>
#include "swap2.h"

main() 
{ float a, b;       

	printf("Enter values for a and b:\n", a, b);
	scanf("%f %f", &a, &b);

	swap_big(&a, &b);
}
