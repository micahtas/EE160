/*	File:	ops.c
 *	By:	Edler Espiritu
 *	Login:	edler
 *	Team:	Alpha Squad
 *	Date:	11/12/2012
 */

#include <stdio.h>
#include "ops.h"
#include "tfdef.h"
#include "chrutil.h"
#include "display.h"
  
char get_op(void)

{
/* Declaration */

char c;
 c = getchar();
 
while(IS_WHITE_SPACE(c))

c = getchar();

switch(c)
{
     case '+': return '+';
     case '-': return '-';
     case 'x': return 'x';
     case '/': return '/';
     case '=': return '=';
     default:  printf("Error: invalid operator + assumed\n");
     return '+';

}
}

