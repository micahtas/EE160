/* File: grader.c
 * By: Micah Tashima
 * Login: micahtas
 * Team: Alpha Sqaud
 * Date: 10/26/12
 */

#include "grader.h"
#define GRADE_A(c)		((c) >= 90 && (c) <= 100)
#define GRADE_B(c)		((c) >= 80 && (c) <= 89)
#define GRADE_C(c)		((c) >= 70 && (c) <= 79)
#define GRADE_D(c)		((c) >= 60 && (c) <= 69)
#define GRADE_F(c)		((c) >= 0 && (c) <= 59)
#define ILLEGAL_SCORE(c)	((c) < 0 || (c) > 100)

char assign_grade(int score)
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
