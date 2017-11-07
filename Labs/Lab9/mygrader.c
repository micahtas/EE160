/* File: driver.c (mygrader.c)
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 10/26/12
 */

#include <stdio.h>
#include "grader.h"

/*  A program to assign letter grades to scores  */

char assign_grade(int score);

int main()
{
    int score;
    char grade;

       while(scanf("%d", &score) == 1)
       {
       printf("%d: ", score);
       grade = assign_grade(score);
                
		if (grade != '?')
		{
		printf("%c\n", grade);
		}
		
		if (grade == '?')
		{
		printf("illegal score\n");
		}
       }
       
} 
