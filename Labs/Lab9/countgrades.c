/* File : countgrades.c    
 * By   : Micah Tashima          
 * login: micahtas                 
 * team : Alpha Sqaud                 
 * Date : 10/29/12                 
 */

/*  A program to count the number of grades occuring in the input */

#include <stdio.h>

int main()
{
  char c;
  int A;
  int B;
  int C;
  int D;
  int F;
  int others;

       A = B = C = D = F = 0;
       others = 0;
       while ((c = getchar()) != EOF)
       {
              switch(c)
              {
                 case 'a': A++; 
		 break;
		 case 'A': A++;
		 break;
                 case 'b': B++;
		 break;
		 case 'B': B++;
		 break;
                 case 'c': C++;
		 break;
		 case 'C': C++;
		 break;
                 case 'd': D++;
		 break;
		 case 'D': D++;
		 break;
                 case 'f': F++;
		 break;
		 case 'F': F++;
		 break;
		 case '\n': break;
                 default: others++;
		 break;
              }
       }
       printf("Grade counts:\n");

       printf("  A's: %d\n", A);
       printf("  B's: %d\n", B);
       printf("  C's: %d\n", C);
       printf("  D's: %d\n", D);
       printf("  F's: %d\n", F);
       printf("  Other grades: %d\n", others);

}


