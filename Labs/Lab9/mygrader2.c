/* File: driver1.c (mygrader2.c)
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Squad
 * Date: 10/26/12
 */

#include <stdio.h>
#include "grader2.h"
/*  A program to assign letter grades to scores  */


int main()
{
    int score, A, B, C, D, passing_score = 0, failing_score = 0, illegal_score = 0;
    char grade;

	printf("Enter minimums for grades A, B, C and D:\n");
	scanf("%d %d %d %d", &A, &B, &C, &D);
		if (A > 100 || D < 0 || A < B || B < C || C < D)
		{
		printf("invalid grading scale\n");
		printf("Enter minimums for grades A, B, C and D:\n");
		scanf("%d %d %d %d", &A, &B, &C, &D);
		}

       while(scanf("%d", &score) == 1)
       {
       printf("%d: ", score);
       grade = assign_grade(score, A, B, C, D);
                
		if (grade != '?')
		{
		printf("%c\n", grade);
			if (grade == 'A' || grade == 'B' || grade == 'C')
			{
			passing_score = passing_score + 1;
			}
			else if (grade == 'D' || grade == 'F')
			{
			failing_score = failing_score + 1;
			}
		}
		
		if (grade == '?')
		{
		printf("illegal score\n");
		illegal_score = illegal_score + 1;
		}
       }

	printf("Passing scores: %d\n", passing_score);
	printf("Failing scores: %d\n", failing_score);
	printf("Illegal scores: %d\n", illegal_score);
       
} 
