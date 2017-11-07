/*	File:spchk.c
 *      By: Edler Espiritu
 *	Login: edler
 *	Team: Alpha Sqaud
 *	Group: 
 *	Date: 10-25-2012	
*/ 

#include <stdio.h>
#include "letters.h"
#include "chrutil.h"

/*#define DEBUG*/


main()
{   
 /* Declaration*/
 char x;
 char y; 
 int a; 		
 int b; 	
 int c; 
  
     a = TRUE;
     b = FALSE;
     c = TRUE;
     
 
/* While statement */

	while ((x = getchar()) != EOF)    

	{ 
/* starting chracter */

          if(!b && !delimitp(x))     
	  {    
            a = TRUE;   		   
            b = TRUE;                  
          }

/*Last Character */
          else if (b && delimitp(x)) 
	 
	{   
        b = FALSE;                
        if(c)
	{
    	c = end_word(y);
	}

/*check if word is in hawaiian */
    		
	if(c)

	{
    	printf("\tValid Hawaiian Word");
	}
   	if(!c)
    	printf("\tInvalid Hawaiian Word");
    	c = TRUE;
    	putchar('\n');    
	}

/*Check Char*/

        if(!delimitp(x))
	{  
 
    	if (b)    
	{

/*Check Letters in hawaiian */
      	if(a) 
	{
       	if(!is_vowel(x) && !is_h_consonant(x))
       	c = FALSE;
	}

/*Check spelling */

       	else if(!spelling(x,y))
       	c = FALSE;
       	a = FALSE;
       	y = x;

/* debug statement */

         #ifdef DEBUG
         printf("check is %d\n",c);
    	 # endif

/*  Print character  */

	  putchar(x); 
	}  
                      
   }
	}
} 
