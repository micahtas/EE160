/* File: temperature.c *
 * By: Micah Tashima   *
 * Login: micahtas     *
 * Team: Alpha Squad   *
 * Date: 9/12/12       */

/* This program reads a temperature in Fehrenheit and converts it to Celsius.
*/

#include <stdio.h>

main()
{ float Fehrenheit, Celsius;

	/* Get degrees in Fehrenheit */
	printf("Enter temperature in Fehrenheit:\n");
	scanf("%f", &Fehrenheit);

	/* Convert Fehrenheit to Celsius */
	Celsius = (Fehrenheit-32) * (5/9);

	/* Print Result */
	printf("Fehrenheit converted to Celsius is %4.2f degrees\n");
}
	
