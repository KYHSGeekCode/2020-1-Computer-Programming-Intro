/****************************
 프로그램명: practice06.c
 설명: 연습문제 06; 음수를 입력 받기 이전까지의 데이터를 배열에 저장하고
 					함수를 호출하여 입력받은 정수 중에서 최솟값과 최댓값을 알아내고 출력하는 프로그램 
 작성일시: 2020.05.08
 작성자: 양현서
*****************************/

#include <stdlib.h>
#include <stdio.h>

void min_max(int *arr, int *min, int *max, int length);

int main()
{
	int number;
	int min, max;
	printf("Enter a number of integers to input: ");
	scanf_s("%d", &number); // 입력받을 숫자의 개수를 저장 
	int *input = (int*)malloc(sizeof(int) * number); // 입력받을 숫자의 개수만큼 메모리 할당(int) 
	printf("Enter a sequence of positive integers.\n"); 
	// 실제 입력을 받는 부분 
	int i;
	for (i = 0; i < number; i++)
	{
		scanf_s("%d", &input[i]);
		if (input[i] < 0)
			break;
	}
	i--; // for문의 마지막 i++을 상쇄하면 입력받은 수가 된다. 
	min_max(input, &min, &max, i);
	printf("Minimum is %d, Naximum is %d.\n", min, max);
	free(input); // 메모리 해제 
	system("pause");
	return 0;
}

// arr에서 최댓값과 최솟값을 찾아 *min과 *max에 저장 
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
