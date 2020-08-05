/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 음수를 입력하기 전까지 0 이나 양수를 입력받고 입력을 받을 때 마다 현재 입력한 상황에서 최솟값을 출력하는 프로그램
 작성일시: 2020.04.10
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int current_min(int n) {
	static int min = 100;
	if (n < min) {
		min = n;
	}
	return min;
}

int main() {
	int number;
	int min;
	while (1) {
		printf("Enter a number.\n");
		scanf_s("%d", &number);
		if (number < 0)
			break;
		min = current_min(number);
		printf("Current min is %d\n", min);
	}
	system("pause");
	return 0;
}
