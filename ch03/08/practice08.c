/****************************
 프로그램명: practice08.c
 설명: 연습문제 08; 세 개의 양의 정수를 입력 받아 , 가장 큰 수만 출력하는 프로그램
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max;

	printf("양의 정수 3개 입력:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("양의 정수를 입력하세요.\n");
		return -1; // 프로그램을 종료해 버린다. 
	}
	
    // 가장 큰 수 찾기 
	if (num1 >= num2) { // 크기 비교 
		if (num1 >= num3) {
			max = num1;
		}
		else {
			max = num3;
		}
	}
	else {
		if (num2 >= num3) {
			max = num2;
		}
		else {
			max = num3;
		}
	}
	printf("가장 큰수는 %d 입니다.\n", max);
	system("pause");
	return 0;
}
