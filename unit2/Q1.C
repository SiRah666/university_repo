#include <stdio.h>
#include <conio.h>
#define MAX 30

int push(int[], int, int);
int pop(int[], int);
void display(int[], int);

int main()
{
	int ch, n, top, arr[MAX];

	clrscr();
	top = -1;
	while(1)
	{
		printf("[Stack using Array]\n"
		"1.Push\n2.Pop\n3.Display\n4.Exit\n=> ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("Enter value to insert: ");
				scanf("%d", &n);
				top = push(arr, top, n);
				break;
			case 2:
				top = pop(arr, top);
				break;
			case 3:
				display(arr, top);
				break;
			case 4:
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

int push(int arr[], int top, int n)
{
	if(top == MAX)
		printf("Error: Stack Overflow!\n");
	else
		arr[++top] = n;
	return top;
}

int pop(int arr[], int top)
{
	int res;

	if(top == -1)
		printf("Error: Stack Underflow!\n");
	else
		printf("%d is popped off the stack\n", arr[top--]);
	return top;
}

void display(int arr[], int top)
{
	int n;

	n = top;
	printf("The Stack: \n");
	for(n=top; n >= 0; --n)
		printf("%d\n", arr[n]);
}