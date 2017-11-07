/*     file:    round.c
 *      *     by:      Zachary Dorman
 *       *     login:   zdorman                                 
 *        *     date:    10/3/12
 *         *     team:    Alpha Squad
 *          *     members: Edler Espiritu, Micah Tashima */
#include<stdio.h>
int round_to_int( float initial);
main()
{float initial;
 int rounded;
	
	while (initial != 0)
	{
		printf("Enter a number:\n");
		scanf("%f", &initial);
		rounded = round_to_int(initial);
		printf("The number rounded is %d.\n", rounded);
	}
}
int round_to_int(float initial)
{ int x;
	if ( initial > 0 )
	{	x = initial + 0.5;
	}
	if ( initial < 0 )
	{	x = initial - 0.5;
	}
	return x;
}

