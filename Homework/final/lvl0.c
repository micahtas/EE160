#include<stdio.h>
#include "display.h"
#include "functions.h"

main()
{ char ch;
  int level, dir, row, col, wall, winner;
  level = 0;
 int N, E, W, S;

	/* initialize the level */
	dir = row = col = 0;
	init_level(level, dir, row, col);

	/* grab input until q is given */
	while ( ch != 'q' )
	{	ch = getchar();

		/* print an error and grab new input if input is invalid */
		while ( ch != 'q' )
		{	
			if ( ch == 'w' || ch == 'a' || ch == 'd' || ch == 's' )
			{	/* clear error message if there was any */
				write_message("                         ", 9);

				break;
			}

			write_message("Invalid input, try again.", 9);
			ch = getchar();
		}

		/* clear display and quit when q is input */
		if ( ch == 'q' )
		{	clear_screen();
			break;
		}

		/* calculate the mouse direction */
		dir = next_dir(dir, ch);

		/* calculate next row/col if w is input */
		if ( ch == 'w' )
		{	
			/* check if there is a wall ahead */
			lvl0_get_walls( row, col, &N, &E, &W, &S);
			wall = wall_check(dir, N, E, W, S);

			/* if there's a wall ahead, print a crash */
			if ( wall == 1 )
			{	dir = 4;
				write_message("Crash!", 9);
			}

			/* calculate next row/col */
			else
			{	row = next_row(dir, row);
				col = next_col(dir, col);
			}
		}

		/* update the display */
		show_mouse(dir, row, col);
		show_position(row, col);

		/* if the user won or crashed, offer a restart */
		while ( found_center(row, col) == 1 || dir == 4 )
		{	write_message("Restart? (y/n)", 5);

			/* reinitialize if y is input */
			if ( ch == 'y' )
			{       dir = row = col = 0;
				init_level(level, dir, row, col);
				break;
			}

			/* clean display and quit if q or n is input */
			if ( ch == 'n' || ch == 'q' )
			{       ch = 'q';
				clear_screen();
				break;
			}

			else
			{       ch = getchar();
			}
		}
	}
}
