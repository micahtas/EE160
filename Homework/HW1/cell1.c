/* File: cell.c
 *  * By: Micah Tashima
 *   * Login: micahtas
 *    * Date: 9/29/12
 *     * Team: Alpha Squad
 *      * Members: Edler Espiritu, Zachary Dorman
 *      */
/* This program compares two cell phone services' monthly billing */  
#include <stdio.h>
float minutes;
int round_to_int(float minutes);
main()
{	float jog_call_cost, jog_bill, hearizon_minutes, hearizon_bill;
	int jog_minutes;
	
	jog_bill = 0;
	hearizon_minutes = 0;
	
	/* Initial input */
        printf("Enter the amount of minutes of the first call:\n");
        scanf("%f", &minutes);	
        while (minutes != 0)
        {
		/* Jog: calculate cost of the call and update the cost of the
 * bill */
		jog_minutes = round_to_int(minutes);
		jog_call_cost = 0.05 * jog_minutes;
		jog_bill = jog_bill + jog_call_cost;
		/* Hearizon: update the total minutes */
		hearizon_minutes = minutes + hearizon_minutes;		
		/* Get the next input */
		printf("Enter the amount of minutes of the next call:\n");
		scanf("%f", &minutes);
        }
	
	/* calculate cost Hearizon bill */
	minutes = hearizon_minutes;
	hearizon_bill = 0.07 * round_to_int(minutes);
        /* Print results */
        printf("The bill for Jog would be $%4.2f\n", jog_bill);
	printf("The bill for Hearizon would be $%4.2f\n", hearizon_bill);
}
int round_to_int(float minutes)
{ int x;
        if ( minutes > 0 )
        {       x = minutes + 0.5;
        }
        if ( minutes < 0 )
        {       x = minutes - 0.5;
        }
        return x;
}

