/* File: numbers.c
 * By: Micah Tashima
 * Login: micahtas
 * Date: 10/3/12
 * Team: Alpha Squad
 */

#include <stdio.h>

main()
{
 int x, even = 0, odd = 0, pos = 0, neg = 0, pos_even = 0, neg_odd = 0, total = 0, count = 0;

	/* Get first input */
	printf("Enter first input:\n");
	scanf("%d", &x);

	while (x != 0)
	{
	count = count + x;
	total = total + 1;

		/* Test if input */
		if (x > 0)
		{
		pos = pos + 1;
			if (x % 2 == 0)
			even = even + 1;
			pos_even = pos_even + x;
			odd = odd + 1;
		}		
		else
		{	
		if (x % 2 != 0)
			{
			odd = odd + 1;
			if (x < 0)
			neg = neg + 1;
			neg_odd = neg_odd + x;
			}	
		}
	scanf("%d", &x);
	}

	printf("Number of positive entries: %d\nSum of positive entries: %d\n",pos, pos_even);
	printf("Number of odd entries: %d\nSum of odd entries: %d\n", odd, neg_odd);
}
			
			 
