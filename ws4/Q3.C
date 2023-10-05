#include <stdio.h>
#include <conio.h>
#define MAXSIZE 30

void inputElements(int[], int);
void displayElements(int[], int);

int main()
{
	int len;
	int arr[MAXSIZE];

	clrscr();
	printf("[Create functions to enter and display array elements]\n\n");
	while(1)
	{
		printf("Enter number of elements: ");
		scanf("%d", &len);
		if(len > MAXSIZE)
			printf("Erorr:maximum elements allowed is %d", MAXSIZE);
		else
			break;
	}
	inputElements(arr, len);
	displayElements(arr, len);
	getch();
	return 0;
}

void inputElements(int arr[], int len)
{
	int i;

	for(i = 0; i < len; ++i)
	{
		printf("Enter element arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
}

void displayElements(int arr[], int len)
{
	int i;

	printf("The elements: [");
	for(i = 0; i < len; ++i)
		printf(" %d ", arr[i]);
	printf("]");
}