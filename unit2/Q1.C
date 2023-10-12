#include <stdio.h>
#include <conio.h>
#define MAX 30

void push(int[], int*, int);
int pop(int[], int*);
void display(int[], int*);

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
				push(arr, &top, n);
				break;
			case 2:
				n = pop(arr, &top);
				if(n != -1)
					printf("%d is popped from stack\n", n);
				break;
			case 3:
				display(arr, &top);
				break;
			case 4:
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

void push(int arr[], int *top, int n)
{
	if(*top == MAX)
		printf("Error: Stack Overflow!\n");
	else
		arr[++*top] = n;
}

int pop(int arr[], int *top)
{
	int res;

	if(*top == -1)
	{
		printf("Error: Stack Underflow!\n");
		return *top;
	}
	res = arr[*top];
	--*top;
	return res;
}

void display(int arr[], int *top)
{
	int n;

	n = *top;
	printf("The Stack: \n");
	while(n >= 0)
		printf("%d\n", arr[n--]);
}