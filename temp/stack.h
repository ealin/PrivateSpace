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

/*���|��Ƶ��c*/ 
struct Stack_s
{ 
	int Data[STACK_SIZE];		//�}�C�Ŷ� 
	int Top;								//���|����index
													// Top����U�@�ӥi�H���ƪ���m�C
}; 

typedef struct Stack_s Stack ;


/*******************************************
	Method Declaration
*******************************************/
void stack_init(Stack * stack) ;

/*�ˬd���|�O�_����*/ 
int stack_empty(Stack *Stack1) ;

void stack_push(Stack *Stack1,int x) ;

// return STACK_EMPTY if stack empty
int stack_pop(Stack *Stack1) ;

//*******************************************
// method need to implement:
//*******************************************

// 1. check FULL


// 2. get top element (���X�̳��ݤ������ȡA������pop���ʧ@)


// 3. get element number (�ثestack�̦��h�֭Ӥ���)


// 4. pop all  (�ǤJ�}�Cdata[]�A data[0]��top������, �̦�����)

// 5. print all



#endif
