/****************************
 프로그램명: practice05.c
 설명: 연습문제 05; main() 함수에 int 타입의 arr1[5], arr2[5] 라는 배열을 선언하고 사용자가 각 배열에 임의의 값을 입력하도록 하고, 
					▶ print_array() 함수를 작성하여 데이터가 저장된 2 개의 배열을 출력한다. 
					▶이후에 두 배열을 데이터를 교환하여 저장하는 swap_array 함수를 호출하여 값을 서로 바꾸도록 하고
					 변경되었는지 확인할 수 있도록 main() 에서 print_array() 함수를 호출하여 확인하는 프로그램 
 작성일시: 2020.05.08
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int length);
void swap_array(int *a, int * b, int length);

int main()
{
	int arr1[5], arr2[5];
	
	// arr1에 숫자들 입력 
	printf("Enter the contents of first array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	// arr2에 숫자들 입력 
	printf("Enter the contents of second array.\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr2[i]);
	}

	// 바꾸기 전 내용 출력 
	printf("Before swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);

	// 배열 두개를 바꾼다. 
	swap_array(arr1, arr2, 5);

	// 바꾼 후 내용 출력 
	printf("\nAfter swapping,\n");
	printf("first: ");
	print_array(arr1, 5);
	printf("\nsecond: ");
	print_array(arr2, 5);
	printf("\n");
	system("pause");
}

// arr의 내용을 0~length-1까지를 출력한다.  단, 포인터 문법을 사용한다. 
void print_array(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *(arr + i)); // *(arr+i) == arr[i]
	}
}

// a와 b의 배열의 내용을 바꾼다. 단, 포인터 문법을 사용한다. 
void swap_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		int temp = *(b + i); // *(b+i) == b[i]
		*(b + i) = *(a + i); // *(a+i) == a[i]
		*(a + i) = temp; // *(a+i) == a[i]
	}
}

