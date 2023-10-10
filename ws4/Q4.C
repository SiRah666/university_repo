#include <stdio.h>
#define MAXROW 15
#define MAXCOL 30

void inputElements(int[][MAXCOL], int, int);
void displayElements(int[][MAXCOL], int, int);

int main()
{
	int row, col;
	int arr[MAXROW][MAXCOL];

	printf("[Create functions to enter and display 2D-Array elements]\n\n");
	while(1)
	{
		printf("Enter number of row: ");
		scanf("%d", &row);

		if(row <= MAXROW)
		{
		   while(1)
			{
				printf("Enter number of column: ");
				scanf("%d", &col);

				if(col <= MAXCOL)
					break;
				printf("Error: maximum allowed column is %d\n", MAXCOL);
			}
			break;
		}
		printf("Error: maximum allowed row is %d\n", MAXROW);
	}

	inputElements(arr, row, col);
	displayElements(arr, row, col);
	return 0;
}

void inputElements(int arr[MAXROW][MAXCOL], int row, int col)
{
	int i, j;

	for(i = 0; i < row; ++i)
		for(j = 0; j < col; ++j)
		{
			printf("Enter element arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
}

void displayElements(int arr[MAXROW][MAXCOL], int row, int col)
{
	int i, j;

	printf("The elements: \n");
	for(i = 0; i < row; ++i)
	{
		printf("[");
		for(j = 0; j < col; ++j)
			printf(" %d ", arr[i][j]);
		printf("]\n");
	}
}
