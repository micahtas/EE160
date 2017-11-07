/* File: days.c
 * By: Edler Espiritu
 * Login: edler
 * Team: Alpha Squad
 * Date: 10/12/12
 */

int days_in_month(int month, int year)
{int days;

	/* set days equal to the amount of days in a given month */

	if (month == 1 || month == 3 || month == 5 || month == 7 ||
	month == 8 || month == 10 || month == 12 )
	{ days = 31; }

	if (month == 4 || month == 6 || month == 9 || month == 11)
	{ days = 30; }

	if ( is_leap(year) == 1 && month == 2)
	{ days = 29; }

	else if (is_leap(year) != 1 && month ==2)
	{ days = 28; }


	return days;
}
