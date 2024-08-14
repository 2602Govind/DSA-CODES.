#include<stdio.h>
struct stack
{
	int size;
	int top;
	int*arr;
	
};

int isEmpty(struct stack*ptr)
{
	if(ptr-> top==-1)
	{
	return 1;
	}
	else {
		return 0;
		
	}
	
}

int isFull(struct stack*ptr)
{
	if (ptr->top==ptr->size-1)
	{
	return 1;
	}
	else {
		return 0;
		
	}
}
 
 void push(struct stack*ptr,int val)
 {
 	if(isFull(ptr))
 	{
 		printf("stack over flow ,cannot push %d to the stack",val);
	 }
	 else
	 {
	 	ptr->top++;
	 	ptr->arr[ptr->top]=val;
	 	
	 }
 }
 
  void pop(struct stack*ptr)
 {
 	if(isEmpty(ptr))
 	{
 		printf("stack under flow ,cannot pop from stack \n ");
	 }
	 else
	 {
	 	int val=ptr->arr[ptr->top];
	 	ptr->top--;
	 	;
	 	
	 }
 }
 
 int main()
 
 {

 	
 	struct stack *sp =(struct stack*) malloc(sizeof (struct stack));
	 
	 sp->size=10;
	 sp->top=-1;
	 sp->arr=(int*) malloc(sp->size*sizeof (int));
	 
	 return 0;
 }
  
