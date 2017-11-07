/*    File : temptbl.c        *
 *    By   : Micah Tashima    *
 *    login: micahtas         *
 *    team : Alpha Squad      *
 *    Date : 9/21/12          */

/*  The function prints a table of conversions from degrees Fehrenheit to degre    es Celsius from start to at most stop in five degree F increments, one conv    ersion per line.
*/  
 
#include<stdio.h> 
int temptable(float start, float stop), celcius;
float tocelcius(float fehrenheit), fehrenheit;

main()
{ float start, stop;      
	
	printf("***Input the same value twice to exit.***\n");
		while (start != stop)

	/*  prompt the user to input temperatures and scan for them */
      {	
	printf("Enter an initial and final temperature in degrees Fehrenheit:\n");
	scanf("%f %f", &start, &stop);
	
	/* calls the function temptable*/
	temptable(start, stop);
      }
}

int temptable(float start, float stop)
{
	if (start > stop)
      {	
	printf("Degrees Fehrenheit \t\tDegrees Celcius\n");	

	while (start > stop)
	{	
		fehrenheit = start;
		celcius = tocelcius(fehrenheit);
		printf("%4.2f \t\t\t\t%d\n", start, celcius);
		start = start - 5;
	}

	if (start <= stop)
        {
		fehrenheit = stop;
		celcius = tocelcius(fehrenheit);
		printf("%4.2f \t\t\t\t%d\n", stop, celcius);
        }
	
      }
	else if (start < stop)
      {     
	printf("Degrees Fehrenheit \t\tDegrees Celcius\n");
	while (start < stop)
        {       
		fehrenheit = start;
		celcius = tocelcius(fehrenheit);
                printf("%4.2f \t\t\t\t%d\n", start, celcius);
                start = start + 5;
        }
         if (start >= stop)
        {	fehrenheit = stop;
		celcius = tocelcius(fehrenheit);
		printf("%4.2f \t\t\t\t%d\n", stop, celcius);
        }
      }
	start = stop + 1; //ensures that start =! stop prior to asking for user input again
}

float tocelcius(float fehrenheit)
{
 return ( fehrenheit - 32 ) * 5 / 9;
}
	
