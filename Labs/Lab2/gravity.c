 
/*     File : gravity.c     *
 *     By   : Micah Tashima *
 *     login: micahtas      *
 *     Date : 9/7/12        *
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */

#include <stdio.h> 
 
main()
{	/* declarations */ 
	float velocity;
  	float distance; 
	float time;
 
        /*  set the time  */
        time = 10;
 
        /*  compute the velocity */
        velocity = 32.0 * time;
 
        /* compute the distance  */
        distance = 32.0 * time * time / 2.0;
 
        /*  print the result  */
        printf("An object falling %4.2f feet in %4.2f seconds ", distance, time);
        printf("is traveling %4.2f ft/sec\n", velocity);
}
 
 

