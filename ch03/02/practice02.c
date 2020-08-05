/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 사사용자가 한 개의 정수를 입력하면 그 수를 제곱한 값을 출력하는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h> // scanf, printf
#include <stdlib.h> // system
#include <stdbool.h> // bool, true, false

int main() {
	int input; // 사용자 입력 변수
	bool flag = true; // 계속 물어볼 것인지를 판단하는 변수
	while (flag) // flag가 false가 되기 전까지 반복
	{
		printf("양수 입력:");
		scanf_s("%d", &input);
		if (input < 0) {
			printf("양수를 입력하세요.\n");
			continue;
		}
		if (input == 0) {
			flag = false;
		}
		else {
			printf("%d\n", input*input);
		}
	}
	printf("프로그램 종료...\n");
	system("pause");
	return 0;
}
