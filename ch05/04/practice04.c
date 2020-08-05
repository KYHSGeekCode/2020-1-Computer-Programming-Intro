/****************************
 프로그램명: practice04.c
 설명: 연습문제 04; 양수를 입력 받은 후 재귀 호출에 의하여 화면에 입력받은 숫자만큼 asterisk(*) 를 출력하는 프로그램
 작성일시: 2020.04.10
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

void printAsterisk(int number) {
	if (number <= 0)
		return;
	printf("*");
	printAsterisk(number - 1);
}

int main() {
	int number;
	while (1) {
		printf("Enter the number of asterisk.\n");
		scanf_s("%d", &number);
		if (number <= 0) {
			printf("Please enter it again.\n");
			continue;
		}
		printAsterisk(number);
		break;
	}
	printf("\n");
	system("pause");
}
