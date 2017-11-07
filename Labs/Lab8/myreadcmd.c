/* File: readcmd.c        
 * By: Micah Tashima                  
 * Login: micahtas                  
 * Team : Alpha Sqaud                  
 * Date : 10/20/12                 
 */

/* Read a command, skipping over leading blanks and any trailing
 * characters.
 */

#include <stdio.h>
#define LOWER(c)	((c) >= 'a' && (c) <= 'z')
#define UPPER(c)	((c) >= 'A' && (c) <= 'Z')
#define SPACE(c)	((c) == '\n' || (c) == ';')

int skipBlanks(void);
int skipOverRestOfCommand(void);

int main()
{
  int cmd;

        cmd = skipBlanks();
        while (cmd != EOF)
        {
		if (UPPER(cmd) || LOWER(cmd))
        	{	
		printf("The command is: %c\n", cmd);
        	skipOverRestOfCommand();
		}
		
		if (SPACE(cmd))
		{
		printf("Error: missing command.\n");
		}
		
		else if (LOWER(cmd) == 0 && UPPER(cmd) == 0)
		{
		printf("Error: %c is not a letter.\n", cmd);
		skipOverRestOfCommand();
		}
        
	cmd = skipBlanks();		
	}
}

int skipBlanks(void)
{
  int c;

        c = getchar();
        while (c == ' ' || c == '\t')
		c = getchar();
        return c;
}

int skipOverRestOfCommand(void)
{
  int c;
  
        c = getchar();
        while (c != '\n')
        {       
	c = getchar();
		if (c == ';')
		{
		break;
		}
	}
        return c;
}

