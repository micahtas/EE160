/*      File : sum.c            *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Sqaud      *
 *      Date : 9/28/12          */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

main()
{ int x, y, flag;	

        /*  Initialize the sum             */
	y = 0;

        /*  Get the first input            */
	printf("Enter a number to sum:\n");
	scanf("%d", &x);

        /*  While there is more input      */
	while (flag != EOF)
	{	

                /*  Accumulate the sum     */
		y = x + y;

                /*  Get the next input     */
		printf("Enter another number to sum:\n");
		flag = scanf("%d", &x);

	}

        /*  Print the results              */
	printf("The sum of the numbers are: %d\n", y);
}
