/****************************
 ���α׷���: practice05.c
 ����: �������� 05; main() �Լ��� int Ÿ���� arr1[5], arr2[5] ��� �迭�� �����ϰ� ����ڰ� �� �迭�� ������ ���� �Է��ϵ��� �ϰ�, 
					�� print_array() �Լ��� �ۼ��Ͽ� �����Ͱ� ����� 2 ���� �迭�� ����Ѵ�. 
					�����Ŀ� �� �迭�� �����͸� ��ȯ�Ͽ� �����ϴ� swap_array �Լ��� ȣ���Ͽ� ���� ���� �ٲٵ��� �ϰ�
					 ����Ǿ����� Ȯ���� �� �ֵ��� main() ���� print_array() �Լ��� ȣ���Ͽ� Ȯ���ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.05.08
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int length);
void swap_array(int *a, int * b, int length);

int main()
{
	int arr1[5], arr2[5];
	
	// arr1�� ���ڵ� �Է� 
	printf("Enter the contents of first array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	// arr2�� ���ڵ� �Է� 
	printf("Enter the contents of second array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr2[i]);
	}

	// �ٲٱ� �� ���� ��� 
	printf("Before swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);

	// �迭 �ΰ��� �ٲ۴�. 
	swap_array(arr1, arr2, 5);

	// �ٲ� �� ���� ��� 
	printf("\nAfter swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);
	printf("\n");
	system("pause");
}

// arr�� ������ 0~length-1������ ����Ѵ�.  ��, ������ ������ ����Ѵ�. 
void print_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *(arr + i)); // *(arr+i) == arr[i]
	}
}

// a�� b�� �迭�� ������ �ٲ۴�. ��, ������ ������ ����Ѵ�. 
void swap_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		int temp = *(b + i); // *(b+i) == b[i]
		*(b + i) = *(a + i); // *(a+i) == a[i]
		*(a + i) = temp; // *(a+i) == a[i]
	}
}

