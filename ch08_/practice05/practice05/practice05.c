#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int length);
void swap_array(int *a, int * b, int length);

int main()
{
	int arr1[5], arr2[5];
	printf("Enter the contents of first array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	printf("Enter the contents of second array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr2[i]);
	}

	printf("Before swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);

	swap_array(arr1, arr2, 5);

	printf("\nAfter swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);
	printf("\n");
	system("pause");
}


void print_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *(arr + i));
	}
}

void swap_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		int temp = *(b + i);
		*(b + i) = *(a + i);
		*(a + i) = temp;
	}
}

