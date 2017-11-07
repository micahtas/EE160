/*      File : countup.c        *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Squad      *
 *      Date : 9/15/12          */

/*  A program to count from 1 to 20, one per line  */

#include <stdio.h>

int main()
{
  int count;

	count = 1;
	while (count <= 20)
	{
		printf("%d\n", count);
		count = count + 1;
	}
}

