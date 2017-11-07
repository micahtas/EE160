#include <stdio.h>
#include "exponent.h"
#include "opnd.h"
#include "presults.h"
#include "ops.h"
#include "compute.h"

main()
{ char ch, c;
  int i1, i2, o, p;

	while((c = getchar()) != 'q')
	{
	 i1 = get_opnd(ch);
	 o = get_opnd(ch);
	}
	
	while(get_opnd(ch) != '=')
	{
	i2 = get_opnd(ch);
	p = compute_result(i1, o, i2);
	put_result(p);
	get_opnd(ch);
	}

	write_debug(p);
	
	if(getchar() == '\n')
	{
	get_opnd(ch);
	}
	
}
