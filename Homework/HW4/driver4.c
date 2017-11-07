/* File: driver4.c
 * By: Micah Tashima
 * Login: micahtas
 * Date: 11/22/12
 * Team: Alpha Squad
 */

#include <stdio.h>
#include "presults.h"
   
main()
{ int result;

	printf("Enter integers (EOF to quit): \n");
	
	while((scanf("%d", &result)) != EOF)
	{
	printf("The number is:");
	put_result(result);
	putchar("\n");
	}
}
