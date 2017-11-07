/*	File: driver1.c
 *	By: Edler Espiritu	
 *	Login: edler
 *	Team : Alpha Sqaud
 *	Date: 10-26-2012
 */	

#include "chrutil.h"
#include "letters.h"

main()
{ 
/* Declaration*/

  int x;
	
/*Ask user Input*/
  	x = getchar();

/*While statement*/
	while(x != EOF)

	{
/* If statement is true letter is valid*/

	 if(is_vowel(x) == 1 || is_h_consonant(x) == 1)
	{

	printf("valid Letter\n");
	
	 }
	 
/* Else Statement- If statement is false it is invalid*/
	 else

	 {
		printf("invalid Letter\n");
	 }

/*Ask user for the next input*/

	  x = getchar();
	  FLUSH;
	}

}
