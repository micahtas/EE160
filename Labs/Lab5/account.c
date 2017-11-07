/*	File : account.c         *
 *	By   : Micah Tashima     *
 *	login: micahtas          *
 *	team : Alpha Squad       *
 *      Date : 9/21/12           */


/*  A program to calculate accumulated value of an initial investment */

#include <stdio.h>

main()
{ float acc_amount,
  annual_interest;
  int years, compounding;
  float calc_acc_amt(float acc_amount, float annual_interest, int years);
	
	printf("***This program will exit if 0 is input for the initial investment.***\n");
	
	while ( acc_amount != 0 )
	{	
	  printf("Enter the initial investment:\n");
	  scanf("%f", &acc_amount);
		if ( acc_amount != 0)
	{	
		printf("Enter the annual interest rate in decimal:\n");
		scanf("%f", &annual_interest);
		printf("Enter the amount of years that this investment will last for:\n");
		scanf("%d", &years);
		printf("Enter 1 for annual, 2 for monthly or 3 for daily compounding\n");
		scanf("%d", &compounding);
		if (compounding	== 1)
		{ 
		acc_amount = calc_acc_amt(acc_amount, annual_interest, years);
		printf("The total value of the investment after %d year(s) is $%8.2f.\n", years, acc_amount);
		}
		if (compounding == 2)
		{
		annual_interest = annual_interest / 12;
                acc_amount = calc_acc_amt(acc_amount, annual_interest, years);
                printf("The total value of the investment after %d year(s) is $%8.2f.\n", years, acc_amount);
                }
		if (compounding == 3)
		{
		annual_interest = annual_interest / 365;
                acc_amount = calc_acc_amt(acc_amount, annual_interest, years);
                printf("The total value of the investment after %d year(s) is $%8.2f.\n", years, acc_amount);
                }
	}

	}
}

float calc_acc_amt(float acc_amount, float annual_interest, int years)

{	
	int a;
	float x, y, z;
        y = 1.0;
        a = 1;
		 while ( a <= years )
                {       
		x = ( 1 + annual_interest);
                y = y * x;
                a = a + 1;
		}

	return z = acc_amount * y;
}

