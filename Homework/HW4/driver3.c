#include <stdio.h>
#include "compute.h"
#include "ops.h"

main()
{
/* Declaration */

	int opnd1;
	int opnd2;
	int x;
	char op;

/* Ask User Input */
	
	printf("Enter first operand (EOF to QUIT):");
	while((scanf("%d",&opnd1)) !=EOF)
{
	printf("Enter an operator:");
	op = get_op();
	
	printf("Enter second operand:");
	scanf("%d",&opnd2);
	x = compute_result(opnd1, op, opnd2);

	printf("The answer is %d\n",x);
	
	printf("Enter first operand (EOF to quit):");

}
printf("\n");
}
