/*Program to implement stack data structure*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5
int item;
int choice;
int i;
int arr_stack[MAX_SIZE];
int top = 0;
void push();
void pop();
void display();
int main() 
{
	do {
			printf("\nStack Main menu:");
			printf("\n1.push \n2.pop \n3.display \n4.exit program");
			printf("\nEnter your choice:");
			scanf("%d", &choice);
			switch (choice) 
			{
				case 1:
					push();
					break;
				case 2:
					pop();
					break;
				case 3:
					display();
					break;
				case 4:
					printf("exit program");
					exit(1);
				default:
					printf("wrong choice");
			}
	}while(1);
	return 0;
}
void push() /*insertion operation*/
{ 
	if (top == MAX_SIZE) 
	{ 
		printf("\nStack is full");
	} else {
				printf("Enter the value to be pushed:");
				scanf("%d", &item);
				printf("\nPosition :%d,Pushed value:%d",top,item);
				arr_stack[top+1] = item;
			}
}
void pop() /*deletion operation of elements performed*/
{
	if (top == 0) 
	{
		printf("\nStack is empty");
	} else {
				--top;
				printf("/nposition:%d,popped value:%d", top, arr_stack[top]);
			}
}
void display() /*The values in the stack are displayed*/
{
	printf("\nstack size: %d", top);
	for (i = (top - 1); i >= 0; i--) 
	{
		printf("\nposition:%d, value:%d", i, arr_stack[i]);
	}
}

