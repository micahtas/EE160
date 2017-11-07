/* File : swap_big.c
 * By : Micah Tashima 
 * login: micahtas
 * team : Alpha Squad 
 * Date : 11/14/12
 */ 

/* A function to swap floarting point values using pointers. */ 

#include <stdio.h> 
#include "swap.h" 
#define DEBUG 

void swap( float *x, float *y) 

/* Given: pointers to two floating point variables Returns: nothing directly, swaps values at the two adresses given */ 

{ float temp; 

#ifdef DEBUG 
printf("\tEntering sawp() with\n"); 
printf("\t\tx is address = %x, contents %f\n", x, *x); 
printf("\t\ty is address = %x, contents %f\n", y, *y); 
#endif 

/* save first value */ 
temp = *x; 

/* move second value to first */ 
*x = *y; 

/* restore first value to second */ 
*y = temp; 

#ifdef DEBUG 
printf("\tExiting sawp() with\n"); 
printf("\t\tx is address = %x, contents %f\n", x, *x); 
printf("\t\ty is address = %x, contents %f\n", y, *y); 
#endif 
}

void recorder(float *a, float *b, float *c)
{ float temp; 


#ifdef DEBUG
printf("\tEntering recorder() with\n");
printf("\t\ta is address = %x, contents %f\n", a, *a);
printf("\t\tb is address = %x, contents %f\n", b, *b);
printf("\t\tc is address = %x, contents %f\n", c, *c);
#endif

	if(*a >= *b)
	{
	temp = *a;
	*a = *b;
	*b = temp;
	}
	
	if(*a >= *c)
	{
	temp = *a;
	*a = *c;
	*c = temp;
	}
	
	if(*b >= *c)
	{
	temp = *b;
	*b = *c;
	*c = temp;
	}

#ifdef DEBUG
printf("\tExiting swap_big() with\n");
printf("\t\ta is address = %x, contents %f\n", a, *a);
printf("\t\tb is address = %x, contents %f\n", b, *b);
printf("\t\tc is address = %x, contents %f\n", c, *c);
#endif

}

	




