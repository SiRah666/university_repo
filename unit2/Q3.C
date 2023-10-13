#include <stdio.h>
#include <conio.h>
#define MAX 30

int push(int[], int, int);
int pop(int[], int, int);
void display(int[], int, int);

int main()
{
	int ch, n, rear, front, arr[MAX];

	clrscr();
	rear = front = 0;
	while(1)
	{
		printf(
		"[Queue using Array]\n"
		"1.Insert\n2.Delete\n3.Display\n4.Exit\n=> ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("Enter value to insert: ");
				scanf("%d", &n);
				rear = push(arr, rear, n);
				break;
			case 2:
				front = pop(arr, rear, front);
				break;
			case 3:
				display(arr, rear, front);
				break;
			case 4:
				return 0;
			default:
				printf("Error: Invalid Option!\n");
		}
		printf("\n");
	}
}

int push(int arr[], int rear, int n)
{
	if(rear != MAX)
		arr[rear++] = n;
	else
		printf("Error: Queue Full!\n");
	return rear;
}

int pop(int arr[], int rear, int front)
{
	if(rear == front)
		printf("Error: Queue Empty!\n");
	else
		printf("%d is deleted from the queue\n", arr[front++]);
	return front;
}

void display(int arr[], int rear, int front)
{
	int i;

	printf("The queue: \n");
	for(i = front; i < rear; ++i)
		printf("%d\n", arr[i]);
}
