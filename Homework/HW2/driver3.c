/* File: driver3.c
 * By: Zachary Dorman
 * Login: zdorman
 * Team: Alpha Squad
 * Date: 10/12/12
 */

#include<stdio.h>
#include "leap.h"
#include "days.h"
#include "julian.h"

int day, month, year, julian;

main()
{float flag;
	
	printf("Enter a day, month (1~12), and year.\n");
	flag = scanf("%d %d %d", &day, &month, &year);

	while (flag != EOF)
	{	julian = julian_date(day, month, year);
		printf("The julian date is %d.\n", julian);

		printf("Enter a day, month (1~12), and year.\n");
		flag = scanf("%d %d %d", &day, &month, &year);
	}
}

