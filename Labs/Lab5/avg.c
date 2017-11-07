/*      File : avg.c            *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Sqaud      *
 *      Date : 9/28/12          */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

main()
{ int x, y, a, flag;
  float avg;	

        /*  Initialize the var             */
	y = 0;
	a = 0;

        /*  Get the first input            */
	printf("Enter an integer:\n");
	scanf("%d", &x);

        /*  While there is more input      */
	while (flag != EOF)
	{	

                /*  Accumulate the avg     */
		y = x + y;
		a = a + 1;

                /*  Get the next input     */
		printf("Enter an integer:\n");
		flag = scanf("%d", &x);
		
	}
	
	/* Calculate the average	   */
	avg = y / a;

        /*  Print the results              */
	printf("The average of the numbers are: %8.2f\n", avg);
}
