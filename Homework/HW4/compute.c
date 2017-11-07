/*	File:	compute.c
 *	By:	Edler Espiritu
 *	Login:	edler
 *	Team:	Alpha Squad
 *	Date:	11/12/2012
 */

#include "compute.h"

int compute_result(int opnd1, char op, int opnd2)
{
/* Declaration */

int number1;
int number2;
number1 = opnd1;
number2 = opnd2;

/* Operations */
 
switch(op)
{
  case '+': return (number1 + number2);
  case '-': return (number1 - number2);
  case 'x': return (number1 * number2);
  case '/': return (number1 / number2);
}
}
