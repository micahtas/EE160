/*      File : countdown.c      *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Squad      *
 *      Date : 9/15/12          */

/*  A program to count from 10 down to 1, one per line and print "blastoff"
 */

#include <stdio.h>

main()
{ int count;

        count = 10;
	while( count > 0)
 
        {
                printf("%d\n", count);
		count = count - 1;
        }

        printf("BLASTOFF!\n");

}


