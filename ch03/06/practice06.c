/****************************
 프로그램명: practice06.c
 설명: 연습문제 06; 두 개의 양의 정수를 입력 받아 , 어떤 것이 큰 수인지 판별하고 , 그 큰 수가 짝수인지도 판별하는 프로그램
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/


#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	printf("양의 정수 두 개를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);
	if (num1 >= num2) { // 큰 수 결정 
		if (num1 % 2 == 0) { // 짝수 여부 판정 
			printf("%d이 큰 수이고 짝수입니다.\n", num1);
		}
		else {
			printf("%d이 큰 수이고 홀수입니다.\n", num1);
		}
	}
	else {
		if (num2 % 2 == 0) { // 짝수 여부 판정 
			printf("%d이 큰 수이고 짝수입니다.\n", num2);
		}
		else {
			printf("%d이 큰 수이고 홀수입니다.\n", num2);
		}
	}
	system("pause");
	return 0;
}
