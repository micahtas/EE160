#include <stdio.h>

float max(float n1, float n2);
float min(float n1, float n2);

main()
{
float x, y, high, low;
int flag;

        printf("Enter numbers to be tested:\n");
        flag = scanf("%f %f", &x, &y);

        while (flag != EOF)
        {
                high = max(x, y);
                low = min(x, y);
	if (x == 1)
        printf("The max number is %4.2f\n", high);
	
        printf("The min number is %4.2f\n", low);

        printf("Enter numbers to be tested:\n");
        flag = scanf("%f %f", &x, &y);
        }

}

float max(float n1, float n2)
{
float x, y;
x = 0.0;
        if (x > y)
	x = x + 1.0;
        return x;

                else
                return y;
}

float min(float n1, float n2)
{
float x, y;

        if (x < y)
        return x;

                else
                return y;
}


