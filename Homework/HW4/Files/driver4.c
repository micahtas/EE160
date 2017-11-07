#include <stdio.h>
#include "presults.h"
#include "display.h"
#include "chrutil.h"
   
main()
{
/* Declaration*/

int a;
int x;
     
/* Get integer */
 
  printf("Enter integers(EOF to quit): ");
  while(scanf("%d", &a) != EOF)
{
        put_result(a);
  
        printf("\n");
  
	printf("The number is:");
 
}
}

