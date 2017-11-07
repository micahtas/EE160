/* File: util.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/9/12
 */

#define TRUE 1
#define FALSE 0

float factorial(float x)
{
 int i, product;

	product = 1;
	for(i = 1; i <= x; i = i + 1)
		product = product * i;
	return product;
}

long double close_enough(long double old, long double new)
{
 int enough;

	if(new - old == .00005)
	{
	enough = TRUE;
	}
	
	else if(new - old != .00005) 
	{
	enough = FALSE;
	}

 return enough;
}
