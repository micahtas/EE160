/* File: averages.c
 * By: Micah Tashima
 * Login: micahtas
 * Date: 11/27/12
 * Team: Alpha Squad
 */

/*
 * A program to read values, compute their averages, and to print
 * the values greater than or less than the average.
 */

#include <stdio.h>
#include "tablecalc.h"
#include "tableutil.h"
#define MAXVALS 100       /* max number of values we can process */


int main()
{

  double table[MAXVALS];     /* array to hold input values */
  int n;                     /* number of values in "table" */
  double average;            /* average input value */
  int equal;                 /* number of values the same as average */

	n = tableFill(table, MAXVALS);
	average = tableAverage(table, n);
	printf("Average of the %d values read is: %lf\n", n, average);
	equal = tableMatchingElements(table, n, average);
	printf("There are %d values equal to the average.\n", equal);
	largercounter(table, n, average);
	tablePrintIfLarger(table, n, average);
	smallercounter(table, n, average);
	tablePrintIfSmaller(table, n, average);
}

 
