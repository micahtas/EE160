/*	File:	driver2.c
 *	By:	Edler Espiritu
 *	Login:	edler
 *	Date:	11/12/2012
 */
  
#include <stdio.h>
#include "opnd.h"
#include "exponent.h"
#include "display.h"
 
main()
{
/* Declaration */
int x;
char ch;
 
write_message("Operand Test");

while((ch = getchar()) != 'q');
{

/* Calculation */
        x = get_opnd(ch);
 
	write_debug(x);
}
/* Stop Test */
write_char(ch);
}

