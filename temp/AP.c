#include "stack.h"
#include <stdio.h>

main()
{
  Stack stack1 ;
  
  int data[STACK_SIZE+1] = {1,2,3,4,5,6,7,8,9,10,11} ;
  int i ;
  int top_data ;

  stack_init(&stack1) ;
  
  for(i=0;i<(STACK_SIZE+1);i++)
			stack_push(&stack1,data[i]);
		
  for(i=0;i<(STACK_SIZE+1);i++)
	{
  		top_data = stack_pop(&stack1) ;  
  		if(top_data != STACK_EMPTY)
  				printf("pop data : %d \n",top_data) ;
	}
}
