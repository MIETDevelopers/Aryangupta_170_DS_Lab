#include <stdio.h>
#include <stdlib.h>
int *ptr, top=-1, n;
void push();
void pop();
void view();
int main()
{
	int choice;
	printf("Enter the size of the stack\n");
	scanf("%d", &n);

	ptr=(int*) malloc(n* sizeof(int));
do{
	printf("Press 1 to push\n");
	printf("Press 2 to pop\n");
	printf("Press 3 to view\n");
	printf("Press 4 to exit\n");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			push();
			break;

		case 2:
			pop();
			break;	

		case 3:
			view();
			break;

		case 4:
			printf("Thanks visit again\n");
			break;

		default:
			printf("Invalid input\n");

	}
  }while(choice!=4);
}

void push()
{
	int x;
	printf("Enter the number to be pushed\n");
	scanf("%d", &x);

	if (top==n-1)
	{
		printf("stack overflow\n");
	}
	else
	{
		top++;
		ptr[top]=x;
	}
}

void view()
{
	if (top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("Elelments in the stack are:\n");
		for (int i = top; i >=0; i--)
		{
			printf("%d\n",ptr[i]);
		}
	}
}

void pop()
{
	if (top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("%d is popped\n",ptr[top] );
		top--;
	}
}