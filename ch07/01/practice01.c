/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; a, b 를 더해 *p 에 저장하는 add() 함수를 작성한 후에 main 에서 이 함수를 호출하여 결과를 출력하는 프로그램
 작성일시: 2020.04.24
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

void add(const int a, const int b, int * p);

int main() {
	int num1, num2;
	int result;
	printf("Enter two integers.\n");
	scanf_s("%d %d", &num1, &num2);
	add(num1, num2, &result); // result의 주소를 넘겨준다.
	printf("The sum is %d.\n", result);
	system("pause");
	return 0;
}


void add(const int a, const int b, int * p)
{
	*p = a + b; // p가 가리키는 int 형 메모리에 a+b를 저장
}

