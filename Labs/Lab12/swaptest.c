/* File : swaptest.c       
 * By   : Micah Tashima                 
 * login: micahtas                 
 * team : Alpha Squad                 
 * Date : 11/14/12                 
 */

/*
 * A test driver for testing the swap() function
 */

#include <stdio.h>
#include "swap.h"

#define DEBUG


int main()
{
   float a = 2.5;
   float b = 5.9;
   float c = 12.3;

	#ifdef DEBUG
	printf("Initial values:\t a = %f, b = %f, c = %f\n",a, b, c);
	#endif

	swap(&a, &b);

	#ifdef DEBUG
	printf("First swap:\t a = %f, b = %f, c = %f\n",a, b, c);
	#endif

	swap(&b, &c);

	#ifdef DEBUG
	printf("Second swap:\t a = %f, b = %f, c = %f\n",a, b, c);
	#endif

	swap(&a, &b);

	#ifdef DEBUG
	printf("Third swap:\t a = %f, b = %f, c = %f\n",a, b, c);
	#endif

}

