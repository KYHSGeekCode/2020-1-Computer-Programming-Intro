#include <stdlib.h>
#include <stdio.h>

void min_max(int *arr, int *min, int *max, int length);

int main()
{
	int number;
	int min, max;
	printf("Enter a number of integers to input: ");
	scanf_s("%d", &number);
	int *input = (int*)malloc(sizeof(int) * number);

	int i;
	for (i = 0; i < number; i++)
	{
		scanf_s("%d", &input[i]);
		if (input[i] < 0)
			break;
	}
	i--;
	min_max(input, &min, &max, i);
	printf("Minimum is %d, Naximum is %d\n", min, max);
	free(input);
	system("pause");
	return 0;
}

void min_max(int* arr, int* min, int* max, int length)
{
	*min = *arr;
	*max = *arr;
	for(int i=1; i<length; i++)
	{
		if (*min > arr[i])
			*min = arr[i];
		if (*max < arr[i])
			*max = arr[i];
	}
}
