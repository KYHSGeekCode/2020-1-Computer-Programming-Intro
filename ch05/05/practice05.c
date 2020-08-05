/****************************
 프로그램명: practice05.c
 설명: 연습문제 05; 양의 정수 a, b 를 입력 받아 a 의 b 제곱을 출력하는 프로그램. 재귀 함수로 구현 
 작성일시: 2020.04.10
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main() {
	int base, multiplier, result;
	printf("Enter base and multiplier\n");
	scanf_s("%d %d", &base, &multiplier);
	result = power(base, multiplier);
	printf("%d to the power of %d is %d\n", base, multiplier, result);
	system("pause");
}

int power(int a, int b) {
	if (b == 1) {
		return a;
	}
	if (b == 0) {
		return 0;
	}
	return a * power(a, b - 1);
}
