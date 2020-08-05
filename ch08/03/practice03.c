/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 음의 정수(음수)가 입력될 때까지 입력받은 양의 정수(양수)를 순서대로 a 배열에 저장하고
  					reverse_array를 호출하여 입력받은 순서와 반대로 b 배열에 저장하고,
  					저장된 b 배열의 요소를 main() 에서 순서대로 출력하는 프로그램 
 작성일시: 2020.05.08
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>
void reverse_array(int *a, int *b, int length);

int main()
{
	printf("Enter a sequence of positive integers.\n");
	int input[10] = { 0, };	// 사용자의 입력을 받을 때 사용할 배열 
	int reversed[10] = { 0, }; // 거꾸로 뒤집은 결과 배열 
	int i = 0; // 반복문용 변수 , 카운터 
	int length; // 입력한 숫자들의 개수 
	while (1)
	{
		int num; // 입력값을 담을 변수 
		scanf_s("%d", &num);
		if (num <= 0) // 음수를 입력받으면 그만 입력 받는다 
			break;
		input[i++] = num;
	}
	// 이 시점에서 i가 length이다. 
	length = i;
	reverse_array(input, reversed, i);
	for (i = 0; i < length; i++)
	{
		printf("%d ", reversed[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

// 배열 a를 b에 거꾸로 저장하는 함수 
void reverse_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		b[i] = a[length - i - 1];
	}
}
