/* File : counters2.c       
 * By   : Micah Tashima                 
 * login: micahtas                 
 * team : Alpha Squad                  
 * Date : 10/31/12                 
 */

/*
 * A set of counting functions written using while loops.
 */

#include <stdio.h>

void count_up(int n);
void count_down(int n);
void count_some(int start, int finish, int incr);

int main()
{
        count_up(10);            /* count up from 1 to 10  */
        count_down(10);          /* count down from 10 to 1 */
        count_some(5, 15, 3);    /* count from 5 to 15 by 3 */
        count_some(15, 5, -3);   /* count from 15 to 5 by -3 */

}

void count_up(int n)
{
  int i;

        i = 1;
        for (;i <= n;)
        { 
                printf("%d\n", i);
                i++;
        }
}

void count_down(int n)
{
  int i;

        i = n;
        for (;i >= 1;)
        { 
                printf("%d\n", i);
                i--;
        }
}

void count_some(int start, int finish, int incr)
{
        if (incr == 0)
                return;           /* do nothing if no increment */

        if (incr > 0)       /* count up */
                for (;start <= finish;)
                { 
                        printf("%d\n", start);
                        start += incr;
                }
        else                /* count down */
                for (;start >= finish;)
                { 
                        printf("%d\n", start);
                        start += incr;
                }
}

 
