/* File: datediff.c
 * By: Zachary Dorman
 * Login: zdorman
 * Team: Alpha Squaud
 * Date: 10/12/12
 */

#include<stdio.h>
#include "leap.h"
#include "days.h"
#include "julian.h"

int day, month, year, julian, year1, year2;

main()
{ float flag;
	int julian1, julian2, days_year1, days_year2, diff, z;
        z = 0;

	/* read input */
	printf("Enter a starting date (day month year)\n");
	flag = scanf("%d %d %d", &day, &month, &year);

	while ( flag != EOF )
	{	/* save the value for the first year and first julian date */
		julian1 = julian_date(day, month, year);
		year1 = year;

		/* read second line of input and save the same data */
	        printf("Enter an ending date (day month year)\n");
	        scanf("%d %d %d", &day, &month, &year);
		julian2 = julian_date(day, month, year);
		year2 = year;

		/* calculate the difference in dates if the years are the same */
		if ( year2 == year1 )
		{ diff = julian2 - julian1; }

		/* calculate the difference in dates if the years are not the same */
		else if ( year2 > year1)
		{	year2 = year2 - 1;

			/* calculate the total days z between y1 and y2 */
			while ( year2 > year1)
			{ 	if (is_leap(year2) == 1)
				{ days_year2 = 366; }

				else if ( is_leap(year2) != 1) 
				{ days_year2 = 365; }

				year2 = year2 - 1;
				z = days_year2 + z;
			}
			
			/* calculate the amount of days in y1 */
			if (is_leap(year1) == 1)
			{ days_year1 = 366; }

			if (is_leap(year1) != 1)
			{ days_year1 = 365; }

			/* input data to make final calculation */
			diff = days_year1 - julian1 + julian2 + z;
		}
		
		printf("The difference in dates is %d days.\n", diff);

		/* refresh variable and read new input */
		z = 0;
	        printf("Enter a starting date (day month year)\n");
	        flag = scanf("%d %d %d", &day, &month, &year);
	}
}
