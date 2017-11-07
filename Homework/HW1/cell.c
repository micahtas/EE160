/* File: cell.c
 * By: Micah Tashima
 * Login: micahtas
 * Date: 9/29/12
 * Team: Alpha Squad
 * Members: Edler Espiritu, Zachary Dorman
*/

/* This program compares two cell phone services' monthly billing */  

#include <stdio.h>

main()
{
int rounded(float rounded_minutes);
int flag, minutes, seconds, rounded_minutes, x;
float jog, hearizon;

	/* Get excess minutes */
	printf("Enter excess minutes and seconds:\n");
	scanf("%d %d", &minutes, &seconds);

	/* Job bill */
	while (flag != EOF)
        {
		/* Calculate Job bill */
		jog = (.05) * rounded(rounded_minutes);

		/* Update sum */
		x = 0;
		x = minutes + x;			
 	
		/*  Get the next input     */
        	printf("Enter excess minutes and seconds:\n");
        	flag = scanf("%d %d", &minutes, &seconds);
	}

	/* Hearizon bill */
	while (flag != EOF)
	{
		/* Calculate Hearizon bill */	
		hearizon = (.07) * rounded(rounded_minutes);

		/* Update sum */
		x = 0;
		x = minutes + x;

		/* Get the next input */
		printf("Enter excess minutes and seconds:\n");
		flag = scanf("%d %d", &minutes, &seconds);
	}

	/* Print results */
	printf("The bill for Jog would be %4.2f\n", jog);
	printf("The bill for Hearizon would be %4.2f\n", hearizon);

}

int rounded(float rounded_minutes)
{
float initial;
int rounded;
int round_to_int(float initial);	

        while (initial != 0)
        {
                scanf("%f", &initial);
                rounded = round_to_int(initial);
        }
}
int round_to_int(float initial)
{ int x;
        if ( initial > 0 )
        {       x = initial + 0.5;
        }
        if ( initial < 0 )
        {       x = initial - 0.5;
        }
        return x;
}


