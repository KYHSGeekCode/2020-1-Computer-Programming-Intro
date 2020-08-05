/****************************
 프로그램명: practice04.c
 설명: 연습문제 04; 자연수 a, b 에 대해 a 의 b 제곱을 돌려주는 for 문 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int base, power, result = 1; // 위의 주석에서 base는 a power는 b 
	printf("Enter base and power.\n");
	scanf_s(" %d %d", &base, &power);
	for (int i = 0; i < power; i++) { // base를 power회 곱한다. 
		result *= base;
	}
	printf("%d to the power of %d is %d\n", base, power, result);
	system("pause");
	return 0;
}
