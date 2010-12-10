// comment: ....
// comment form MAC

#include "stack.h"
#include <stdio.h>

/*******************************************
	Method :stack_init
*******************************************/
void stack_init(Stack * stack)
{
 int i ;

 stack->Top = 0 ;

 for(i=0;i<STACK_SIZE;i++)
	stack->Data[i] = 0 ;
}


/*******************************************
	Method :stack_empty
	檢查堆疊是否為空
*******************************************/

int stack_empty(Stack *Stack1) 
{ 
	if(Stack1->Top == 0) 
	{ 
		return 1; 
	} 
	else 
	{ 
		return 0; 
	} 
}


/*******************************************
	Method :stack_push
	推入資料
*******************************************/

void stack_push(Stack *Stack1,int x)
{
 if(Stack1->Top >= STACK_SIZE)
 {
 		printf("overflow\n");	
 		return ;
 }
	
 Stack1->(Data[(Stack1->Top)])=x;              
 (Stack1->Top)++ ;
}


/*******************************************
	Method : 彈出資料
		- return STACK_EMPTY if stack empty
*******************************************/
int stack_pop(Stack *Stack1)
{
	printf("top = %d     ",Stack1->Top) ;
	
  if(stack_empty(Stack1))
  {
    printf("underflow\n");
    return STACK_EMPTY ;
  }
  else
  {
    (Stack1->Top)-- ;
    return Stack1->Data[Stack1->Top];    
  }
         
}
