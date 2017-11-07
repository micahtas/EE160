/*	File:	exponent.c
 *	By:	Edler Espiritu
 *	Login:	edler
 *	Team:	Alpha Squad
 *	Date:	11/12/2012
 */

#include "exponent.h"
#include "tfdef.h"
   
float pos_power(float base, int exponent)

{

/* Initilized Variable */

	float x = 1;
	float pos_power;
   
while(exponent != 0)

{
	x = x * base;
	exponent = exponent - 1;
 
	#ifdef DEBUG
	printf("deebug: Enter pos_power: base = %f exponent = %d\n",base, exponent);
	#endif
}
 
	#ifdef DEBUG
	printf("debug:Exit pos_power: result = %f\n",x);
	#endif
  
return x;
}

int is_exp(char ch)
  {
    switch(ch)
{
    case '!':
    case '@':
    case '#':
    case '$':
    case '%':
    case '^':
    case '&':                                             
    case '*':                                             
    case '(':                                             
    case ')': return TRUE;                                
    default: return FALSE;                                
}                                                       
}                                                         
                                                            
char exp_value(char ch)                                   
{                                                         
 	switch(ch)                                              
{                                                       
     case '!': return '1';                                 
     case '@': return '2';                                 
     case '#': return '3';                                 
     case '$': return '4';                                 
     case '%': return '5';                                 
     case '^': return '6';                                 
     case '&': return '7';                                 
     case '*': return '8';                                 
     case '(': return '9';                                 
     case ')': return '0';                                 
}                                                       
}                                                         
       
