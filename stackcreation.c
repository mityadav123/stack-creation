#include<stdio.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int pop();
void peek();
int isfull();
int isempty();   
void traverse();
void main()
{
	int ch,item;
	while(1)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.traerse\n");
		printf("5.quit\n");
		printf(" enter no.:\n");
		scanf("%d", &ch);
		
	
	
	switch(ch)
	{
		case 1: printf("emter element to be pushed:");   
		        scanf("%d",&item);
		
		       push(item);
		       break;
		case 2: item=pop();
		       if(item==0)
		       {
		       	printf("stack is underflow");
			   }
			   else
			   {
			   	printf("thepopped item is: %d",item);
			   }
			   break;
		case 3:peek();
		        break;
		case 4:traverse();
		break;
		case 5: exit(0);
		default :printf("wrong input\n");
	}
}
	
}
void push(int ele)
{
	if(isfull())
	{
	printf("stack isfull");	
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%d element pushed",ele);
	}
	
}
int isfull()
{
	if(top==CAPACITY-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop()
{
	if(isempty())
	{
	return 0;	
	}
	else
	return stack[top--];
	
}
isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	return 0;
}
void peek()
{
	if(isempty())
	{
		printf("stack is underflow\n");
	}
	else
	{
		printf("%d",stack[top]);
	}
}
void traverse()
{
	int i;
		if(isempty())
	{
		printf("stack is underflow\n");
	}
	else
	{
		for(i=0;i<=top;i++)
		printf("%d\n",stack[i]);
	}
	
}
