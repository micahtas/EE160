/* File: temperature.c *
 * By: Micah Tashima   *
 * Login: micahtas     *
 * Team: Alpha Squad   *
 * Date: 9/12/12       */

/* This program reads a temperature in Fehrenheit and converts it to Celsius.
*/

#include <stdio.h>

main()
{  float Fehrenheit, Celsius;
   float tocelsius(float Fehrenheit);	

	printf("***Enter temperature lower than absolute zero to terminate.***\n");
	while (Fehrenheit > -500)
     {	
	/* Get degrees in Fehrenheit */
	printf("Enter temperature in Fehrenheit:\n");
        scanf("%f", &Fehrenheit);

	/* Convert Fehrenheit to Celsius */
	Celsius = tocelsius(Fehrenheit);
       
	/* Print Result */
	printf("%4.2f degrees Fehrenheit is %4.2f degrees Celsius.\n", Fehrenheit, Celsius);
     }

}
         
	float tocelsius(float Fehrenheit)
     {
	 return 5 / 9 * ( Fehrenheit - 32 );

     }
	
