#include<stdio.h>

int stack[17];
int top = 0;

int push (int item) {
 stack[top] = item;
 top = top + 1;
 printf("%d item pushed \n",item );
}
                             
int pop (){
	top = top - 1;
	 printf("%d item poped \n", stack[top]);
	stack[top] = 0;

}

void main()
{
	
	push(10);
	push(15);
	push(21);
	push(134);
	pop();
	pop();
	for (int i = 0; i < sizeof(stack)/sizeof(int); ++i)
	{
		printf("%d\n", stack[i]);
	}
	
}
