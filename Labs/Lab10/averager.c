/* File : averager.c       
 * By   : Micah Tashima                 
 * login: micahtas                 
 * team : Alpha Sqaud                 
 * Date : 11/2/12                  
 */

/*
 * Read in a number of values to read and then print the average
 * of those values.
 */

#include <stdio.h>

int main()
{
  int expected;
  int count;
  double sum;
  int value;
  int avg; 

        while ((avg = scanf("%d", &expected)) && avg == 1)
        {
                sum = 0;
                for (count = 0; count < expected && avg == 1; count++)
                {
                        avg = scanf("%d", &value);
			sum += value;
                }

		if (sum != 1)
		{
			sum -= value;
		}

                if (avg != 1)
                {
                	printf("Error! Can't read of expected value #%d.\n", 
			count);
			count = count - 1;
                }

                printf("Average of %d values is %.2f\n",
                       count, count != 0 ? sum / count : 0.0);
	}
}

