#include <stdio.h>

int is_leap(int year);

main()
{
int year, leap_year;

	printf("Enter year to be tested\n");
	scanf("%d", &year);	

	while (year != 0)
	{	
	leap_year = is_leap(year);	
		
		if (leap_year == 1)
		printf("%d is a leap year.\n", year);
		
		else 
		printf("%d is not a leap year.\n", year);
		

	printf("Enter year to be tested\n");	
	scanf("%d", &year);
	}
}

int is_leap(int year)
{
int x = 0;
	if (year % 400 == 0)
	x = 1;
		else if (year % 100 != 0)
		{
		if (year % 4 == 0)
		x = 1;
		}
	return x;
}
	


