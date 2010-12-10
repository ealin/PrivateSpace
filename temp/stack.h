// comment:
//

#ifndef STACK_HHHH
#define STACK_HHHH

/*******************************************
	Configuration & Limitation
*******************************************/
#define STACK_SIZE 10

#define STACK_EMPTY 0xFFFF


/*******************************************
	Data Structure
*******************************************/

/*堆疊資料結構*/ 
struct Stack_s
{ 
	int Data[STACK_SIZE];		//陣列空間 
	int Top;								//堆疊頂端index
													// Top指到下一個可以放資料的位置。
}; 

typedef struct Stack_s Stack ;


/*******************************************
	Method Declaration
*******************************************/
void stack_init(Stack * stack) ;

/*檢查堆疊是否為空*/ 
int stack_empty(Stack *Stack1) ;

void stack_push(Stack *Stack1,int x) ;

// return STACK_EMPTY if stack empty
int stack_pop(Stack *Stack1) ;

//*******************************************
// method need to implement:
//*******************************************

// 1. check FULL


// 2. get top element (取出最頂端元素的值，但不做pop的動作)


// 3. get element number (目前stack裡有多少個元素)


// 4. pop all  (傳入陣列data[]， data[0]放top的元素, 依此類推)

// 5. print all



#endif
