/* File: leap.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 10/3/12
 */
 
#include "leap.h"

int is_leap(int year)
{
int x = 0;
        if (year % 400 == 0)
        x = 1;
                else if (year % 100 != 0)
                {
                if (year % 4 == 0)
                x = 1;
                }
        return x;
}

