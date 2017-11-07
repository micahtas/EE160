/* File: exponent.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 11/9/12
 */

#include <stdio.h>
#include "exponent.h"

double pos_power(double base, double exp)
{ int count, total;

for(count = total = 1; count <= exp; total = total * base)
{
 count = count + 1;
}

 return total;

}
 
