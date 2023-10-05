#include <stdio.h>
#include <conio.h>

void mathFunction(int[], int*, float*, float*);

int main()
{
	int i, sum, arr[5];
	float average, stddev;

	for(i = 0; i < 5; ++i)
	{
		printf("Enter integer %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	sum = 0;
	average = stdddev = 0;
	mathFunction(arr, &sum, &average, &stddev);
	return 0;
}

void mathFunction(int arr[], int *sum, float *average, float *stddev)
{
	int i;

	sum = 0;
	for(i = 0; i < 5; ++i)
		sum += arr[i];
	average = sum/5;

}