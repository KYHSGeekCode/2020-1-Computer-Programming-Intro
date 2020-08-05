/****************************
 프로그램명: practice05.c
 설명: 연습문제 05; 홀수 n 을 입력받아서 아래와 같이 출력하는 프로그램
        5를 입력할 시,
		*
		**
		***
		****
		*****
		1
		12
		123
		1234
		12345
		  *
		 ***
		***** 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; // 홀수여야함 
	int initSpaces; // 첫줄의 왼쪽/오른쪽 각 스페이스의 개수 
	printf("Enter the number.\n");
	scanf_s("%d", &n);
	for (int i = 1; i < n+1; i++) { // 별표를 1~n줄 출력 
		for (int j = 0; j < i; j++) { // i개 별표 출력 
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n + 1; i++) { // 1줄부터 n줄까지 
		for (int j = 1; j <= i; j++) { // i개 숫자 출력 
			printf("%d", j);
		}
		printf("\n");
	}
	initSpaces = n / 2; // 첫줄의 왼쪽/오른쪽 각 스페이스의 개수 

	for (int lineNo = 1; lineNo * 2 - 1 <= n; lineNo++) {
		int spaces = initSpaces - lineNo + 1; // 스페이스 수 계산 
		for (int s = 0; s < spaces; s++) { // 적절한 수만큼 공백 출력 
			printf(" ");
		}
		for (int st = 0; st < lineNo * 2 - 1; st++) {
			printf("*"); // 적절한 수만큼 별표 줄력 
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
