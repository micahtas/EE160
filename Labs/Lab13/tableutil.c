/* File: tableutil.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/30/12
 */

#include <stdio.h>
#include "tableutil.h"

int tableFill(double a[], int max)
{   
  double next;              /* next input value */
  int r;                    /* return from trying to read values */
  int cnt = 0;              /* count of values read */

        while ((r = scanf("%lf", &next)) != EOF)
        {
                if (r != 1)              /* bad return from scanf */
                {
                        printf("Error in the input after reading %d values.\n",
                                cnt);
                        break;
                }
                if (cnt == max)          /* no room to store this value */
                {
                        printf("Array full after reading %d values.\n", cnt);
                        break;
                }
                a[cnt++] = next;        /* save element in array */
        }
        return cnt;
}

int largercounter(double a[], int num, double target)
{ int i, n = 0;

        for(i = 0; i < num; i++)
        {
                if (a[i] > target)
                n++;
        }
        printf("There are %d values greater than the average:\n", n);
}

int smallercounter(double a[], int num, double target)
{ int i, n = 0;

        for(i = 0; i < num; i++)
        {
                if (a[i] < target)
                n++;
        }
        printf("There are %d values less than the average:\n", n);
}

void tablePrintIfLarger(double a[], int num, double target)
{ int i;

        for (i = 0; i < num; i++)
        {
                if (a[i] > target)
                {
                printf("%f\n", a[i]);
                }
        }
}

void tablePrintIfSmaller(double a[], int num, double target)
{ int i;

        for (i = 0; i < num; i++)
        {
                if (a[i] < target)
                {
                printf("%f\n", a[i]);
                }
        }
}

