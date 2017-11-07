/* File: driver2.c
 * By: Edler Espiritu
 * Login: edler
 * Team: Alpha Squad
 * Date: 10/12/12
 */
#include<stdio.h>
#include "leap.h"
#include "days.h"

int day, month, year;

main()
{ float flag;

	printf("Enter a month(1~12) and year: \n");
	flag = scanf("%d %d", &month, &year);


	while (flag != EOF)
	{	day = days_in_month(month, year);
		printf("There are %d days in the year %d.\n", day, month);

		printf("Enter a month(1~12) and year: \n");
                flag = scanf("%d %d", &month, &year);
	}
}
