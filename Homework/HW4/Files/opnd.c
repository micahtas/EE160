/*	File:	opnd.c
 *	By:	Edler Espiritu
 *	Login:	edler
 *	Team:	Alpha Sqaud
 *	Date:	11/12/2012 
 */
   
#include <stdio.h>
#include "tfdef.h"
#include "chrutil.h"
#include "display.h"
#include "exponent.h"
#include "opnd.h"
 
int get_opnd(char ch)
{
/* Declaration */
 int x;
 int y; 
 x = 0;
 y = 0;
 
	if(IS_DIGIT(ch))
{
 	x = ch - '0';
}
 
/* While statement: Get more Characters*/
 	while((ch = getchar()) != ' ')
{
 	if(is_exp(ch))
{
 	x = exp_value(ch) - '0';
	write_exp(exp_value(ch));

	while(is_exp((ch = getchar()) || ch == '\n')
{
	if(ch == '\n')
{                         
  	y = y / 10;       
  	write_char(ch);   
}                         
  	if(is_exp(ch))            
{                         
  	y = exp_value(ch) - '0' + (y * 10);
  	write_exp(exp_value(ch));       
}                         
}                                 
  	if(ch == ' ')                     
{                                 
  	write_char(' ');          
 	x = pos_power(x,y);       
	return x;                 
}                                 
  if(ch != ' ')                     
{                                 
  write_error("Illegal operand, 0 assumed");
	return 0;                 
}                                 
}                                                 
                                                            
  if(IS_DIGIT(ch))                                  
{                                                 
  x = ch - '0' + (x * 10);                  
  write_char(ch);                           
}                                                 
  if(!IS_DIGIT(ch) && !is_exp(ch) && ch != '\b')
  write_error("Not a valid input");         
}                                                 
	if(ch == ' ')                                     
	write_char(ch);                                   
	return x;                                         
}                                                         
         
