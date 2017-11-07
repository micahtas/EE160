#include "functions.h"

void init_level(int level, int dir, int row, int col)
{       /* initialize the level */
        clear_screen();
        init_display(level);
        show_mouse(dir, row, col);
        show_position(row, col);
}


int next_dir(int dir, char ch)
{	/* find the direction with respect to the current direction */

	if (dir == 0)
	{	switch(ch)
		{case 'a': dir = 2; break;
		 case 'd': dir = 1; break;
		 case 's': dir = 3; break;
		 default: break;
		}
	}

	else if (dir == 1)
	{	switch(ch)
		{case 'a': dir = 0; break;
		 case 'd': dir = 3; break;
		 case 's': dir = 2; break;
		 default: break;
		}
	}

	else if (dir == 2)
	{	switch(ch)
		{case 'a': dir = 3; break;
		 case 'd': dir = 0; break;
		 case 's': dir = 1; break;
		 default: break;
		}
	}

	else if (dir == 3)
	{	switch(ch)
		{case 'a': dir = 1; break;
		 case 'd': dir = 2; break;
		 case 's': dir = 0; break;
		 default: break;
		}
	}

	return dir;
}

int next_row(int dir, int row)
{	/* update the row when facing north or south */
	
	if (dir == 0)
	{	row = row + 1;
	}

	if (dir == 3)
	{	row = row - 1;
	}
	
	return row;
}

int next_col(int dir, int col)
{	/* update the col when facing east or west */

	if (dir == 1)
	{	col = col + 1;
	}

	if (dir == 2)
	{	col = col - 1;
	}

	return col;
}

int wall_check(int dir, int N, int E, int W, int S)
{ int x = 0;
	
	/* if there is a wall in the direction 
 	   about to be traveled, return true */

	if ( dir == 0 && N == 1 ) x = 1;

	if ( dir == 1 && E == 1 ) x = 1;

	if ( dir == 2 && W == 1 ) x = 1;

	if ( dir == 3 && S == 1 ) x = 1;

	return x;
}


int found_center(int row, int col)
{ int x = 0;

	/* write a message and return true if the user 
   	   is in the center square */
	if (row == 7 || row == 8)
	{	if (col == 7 || col == 8 )
		{	write_message("***Winner***", 7);
			write_message("***Winner***", 8);
			write_message("***Winner***", 9);
			x = 1;
		}
	}
	
	return x;
}
