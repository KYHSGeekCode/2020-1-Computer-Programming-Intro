/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; n factorial을 계산하는 재귀 함수를 이용한 프로그램
 작성일시: 2020.04.24
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

void factorial(int n, int * p);

int main() {
	int n, result = 1; // 입력값과 결과를 저장할 변수
	printf("Enter a natural number.\n"); 
	scanf_s("%d", &n);
	factorial(n, &result); // 함수를 호출한다.
	printf("%d factorial is %d.\n", n, result);
	system("pause");
	return 0;
}


void factorial(int n, int* p) // 팩토리얼을 계산하는 함수
{
	if(n <=1) // 1!=1, 0!=1을 적용한다.
	{
		*p = 1;
		return;
	}
	factorial(n-1, p); // *p = (n-1)!
	*p = n * *p; // p가 가리키는 값에 n을 곱하여, n*(n-1)!의 효과를 낸다.
}
