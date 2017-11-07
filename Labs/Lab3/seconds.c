/*      File : seconds.c        *
 *      By   : Micah Tashima    *
 *      login: micahtas         *
 *      team : Alpha Sqaud      *
 *      Date : 9/8/12           */

/*
 *     This program reads a number of seconds and computes how many
 *     hours, minutes and seconds that corresponds to.
*/

#include <stdio.h>

main()
{  int seconds, t;
   int hours, minutes;

        /*  get the number of seconds  */
        printf("Enter the number of seconds:\n");
        scanf("%d", &seconds);

        /*  compute the number of hours  */
        hours = seconds / 3600;
	t = seconds % 3600;

        /*  compute the number of minutes  */
        minutes = t / 60;

        /*  compute the number of seconds remaining  */
        seconds = t % 60;

        /*  print the result  */
        printf("there are %d hours in %d minutes in %d seconds\n",
                hours, minutes, seconds);
}
