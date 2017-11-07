/* File: julian.c
 * By: Zachary Dorman
 * Login: zdorman
 * Team: Alpha Squad
 * Date: 10/12/12
 */

int julian_date(int day, int month, int year)
{	int jul = 0;

	/* compute the amount of days in each month of the given year */
	while (month > 1)
	{	month = month - 1;
		jul = jul + days_in_month(month, year);
	}

	/* add the total days with the given day */
	jul = jul + day;
	return jul;
}
