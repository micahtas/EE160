/* File: gas.c       *
 * By: Micah Tashima *
 * Login: micahtas   *
 * Team: Alpha Squad *
 * Date: 9/12/12     */

/* This program reads the number of gallons used and the number of miles since
 * the last fill up.
 */

#include <stdio.h>

main()
{ float gallons, miles_since_last_fill_up, cost_per_gallon, cost_of_fill_up, cost_per_mile, miles_per_gallon;

	/* Get Initial Values */
	printf("Enter gallons used and miles since last fill up:\n");
	scanf("%f %f", &gallons, &miles_since_last_fill_up);

	/* Calculate Cost Per Gallon */
	cost_per_gallon = 3.12;

	/* Calculate Cost of Fill-Up */
	cost_of_fill_up = 3.12 * gallons;

	/* Calculate Cost Per Mile */
	cost_per_mile = 3.12 * (gallons / miles_since_last_fill_up);

	/* Calculate Miles Per Gallon for Fill-Up */
	miles_per_gallon = miles_since_last_fill_up / gallons;

	/* Print Results */
	printf("Number of Gallons is %4.2f\n", gallons);
	printf("Cost per Gallon is $%4.2f\n", cost_per_gallon);
	printf("Cost of Fill-Up is $%4.2f\n", cost_of_fill_up);
	printf("Cost per Mile is $%4.2f\n", cost_per_mile);
	printf("Miles per Gallon is %4.2f\n", miles_per_gallon);
} 
