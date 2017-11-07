/*     file:   plot.c
 *      *     by:     Zachary Dorman
 *       *     login:  zdorman
 *        *     date:   10/3/12
 *         *     team:   Alpha Squad
 *          *     members: Micah Tashima, Edler Espiritu */
#include<stdio.h>
main()
{	float x, y, x_tot, y_tot, xy_tot, x2_tot, flag, m, b, x_final, x_initial;
	int n;
	/* initialize */
	x_tot = 0;
	y_tot = 0;
	xy_tot = 0;
	x2_tot = 0;
	scanf("%f %f", &x, &y);
	
	/* save 1st x value for results */
	x_initial = x;
	/* start printing the first line */
	printf("p = [ %4.2f", y);
	/* loop until there is no more data to read */
	while (flag != EOF)
	{	/* update sums and counter */
		x_tot = x_tot + x;
		y_tot = y_tot + y;
		xy_tot = xy_tot + x * y;
		x2_tot = x2_tot + x * x;
		n = n + 1;
	
		/* read more data */
                flag = scanf("%f %f", &x, &y);
		/* add data to the first line */
		printf(",  %4.2f", y);
	}
	/* compute m and b */
	m = ( x_tot * y_tot - n * xy_tot ) / ( x_tot * x_tot - n * x2_tot );
	b = ( x_tot * xy_tot - x2_tot * y_tot ) / ( x_tot * x_tot - n * x2_tot );
	/* save last x value for results */
	x_final = x;
	
	/* print results */
	printf(" ];\n");
	printf("x = linspace( %4.2f, %4.2f, %d);\n", x_initial, x_final, n);
	printf("y = %4.2f * x + %4.2f;\n", m, b);
	printf("plot(x, y, x, p, 'go')\n");
	printf("text(0.5,100,'y = %f * x + %f');\n", m, b);
}

