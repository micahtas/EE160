/* File: tablecalc.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/30/12
 */

#include <stdio.h>
#include "tablecalc.h"

double tableAverage(double a[], int num)
{ int i;
  double total = 0.0;
          
        for (i = 0; i < num; i++)
        {       
                total = total + a[i];
        }

        return total / num;      /* doesn't really compute the average */
}     

int tableMatchingElements(double a[], int num, double target) 
{ int i, n = 0;
    
        for (i = 0; i < num; i++) 
        {
                if (a[i] == target)
                n++;
        }

        return n;        /* number of values equal to the target */
}

