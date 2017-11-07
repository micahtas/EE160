/* File: driver1.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 10/3/12
 */

#include <stdio.h>
#include "leap.h"

int is_leap(int year);

main() 
{
int year, leap_year;

        printf("Enter year to be tested\n");
        scanf("%d", &year);

        while (year != 0)
        {
        leap_year = is_leap(year);

                if (leap_year == 1)
                printf("%d is a leap year.\n", year);

                else
                printf("%d is not a leap year.\n", year);


        printf("Enter year to be tested\n");
        scanf("%d", &year);
        }
}

