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
int a, b;
char ch;
 
write_message("Operand Test");

while((get_opnd(ch)) != 'q');
{

/* Calculation */
        a = get_opnd(ch);
	write_debug(a);
}
/* Stop Test */
write_char(ch);
}

