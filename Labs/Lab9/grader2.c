/* File: grader2.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Sqaud
 * Date: 10/26/12
 */

#include "grader2.h"
#define GRADE_A(c)		((c) >= A && (c) <= 100)
#define GRADE_B(c)		((c) >= B && (c) <= A-1)
#define GRADE_C(c)		((c) >= C && (c) <= B-1)
#define GRADE_D(c)		((c) >= D && (c) <= C-1)
#define GRADE_F(c)		((c) >= 0 && (c) <= D-1)
#define ILLEGAL_SCORE(c)	((c) < 0 || (c) > 100)

char assign_grade(int score, int A, int B, int C, int D)
{
char grade;
	
	if (GRADE_A(score))
	{
	grade = 'A';
	}
	
	else if (GRADE_B(score))
	{
	grade = 'B';
	}
	
	else if (GRADE_C(score))
	{
	grade = 'C';
	}

	else if (GRADE_D(score))
	{
	grade = 'D';
	}

	else if (GRADE_F(score))
	{
	grade = 'F';
	}

	else if (ILLEGAL_SCORE(score))
	{
	grade = '?';
	}

	return grade;		
} 
