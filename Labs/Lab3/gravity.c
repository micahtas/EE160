 
/*     File : gravity.c     *
 *     By   : Micah Tashima *
 *     login: micahtas      *
 *     team : Alpha Squad   *
 *     Date : 9/14/12        *
 *   This program computes the velocity and height of a falling
 *   object given the time.
 */

#include <stdio.h> 
 
main()
{	/* declarations */ 
	float velocity;
  	float distance; 
	float time;
 
        /*  get the time  */
        printf("Enter time in seconds:\n");
	scanf("%f", &time);
 
        /*  compute the velocity */
        velocity = 32.0 * time;
 
        /* compute the distance  */
        distance = 32.0 * (time * time / 2.0);
 
        /*  print the result  */
        printf("An object falling %4.2f feet at a speed of %4.2f", distance, velocity);
}
 


