

/*	File:  romanutil.h
	by:    Tep Dobry
	date:  16 Jun 93
	Mod :  27 Sep 94
*/

/*  This file contains the  prototypes for utilities used in
	 converting roman numerals.
*/


int is_roman(char c);
/*  tests if c is a valid roman numeral, returns true or false  */

int convert_roman(char c);
/*  converts roman numeral c to its value, NULL if invalid  */

char to_upper(char);
/*  converts a character to upper case  */
