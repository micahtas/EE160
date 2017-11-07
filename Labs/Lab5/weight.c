/*      File : avg.c            *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Sqaud      *
 *      Date : 9/28/12          */

/*  A program to compute the sum of numbers given on the input  */

#include <stdio.h>

main()
{ int x, y, z, a, flag;
  float avg;	

        /*  Initialize the var             */
	a = 0;

        /*  Get the first input            */
	printf("Enter a weight/value pair:\n");
	scanf("%d %d", &x, &z);

        /*  While there is more input      */
	while (flag != EOF)
	{	

                /*  Accumulate the avg     */
		y = x * z;
		a = y + a;

                /*  Get the next input     */
		printf("Enter a weight/value pair:\n");
		flag = scanf("%d %d", &x, &z);
		
	}
	
	/* Calculate the average	   */
	avg = a / 100;

        /*  Print the results              */
	printf("The average of the numbers are: %4.2f\n", avg);
}
