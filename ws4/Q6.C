#include <stdio.h>
#include <conio.h>
#include <math.h>

void mathFunction(int[], int*, float*, float*);

int main()
{
	int i, sum, arr[5];
	float avg, sdev;

	clrscr();
	printf("[Return sum, average and standard deviation of 5 integers]\n\n");
	for(i = 0; i < 5; ++i)
	{
		printf("Enter integer %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	sum = 0;
	avg = sdev = 0.0;
	mathFunction(arr, &sum, &avg, &sdev);
	printf("The sum: %d\n", sum);
	printf("The average: %.3f\n", avg);
	printf("The standard deviation: %.3f", sdev);
	getch();
	return 0;
}

void mathFunction(int arr[], int *sum, float *avg, float *sdev)
{
	int i;
	float acc;

	*sum = 0;
	for(i = 0; i < 5; ++i)
		*sum += arr[i];
	*avg = *sum / 5.0;

	acc = 0.0;
	for(i = 0; i < 5; ++i)
		acc += pow(arr[i]-*avg, 2);
	*sdev = sqrt(acc/5);
}
