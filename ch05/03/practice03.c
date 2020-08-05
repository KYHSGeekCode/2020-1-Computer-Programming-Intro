/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 음수 n 을 입력 받은 후 재귀 호출에 의해 n 부터 1 까지의 합을 출력하는 프로그램
 작성일시: 2020.04.10
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int sumToMinusOne(int n) {
	if (n == -1) {
		return -1;
	}
	return n + sumToMinusOne(n + 1);
}

int main() {
	int n;
	while (1) {
		printf("Enter n.\n");
		scanf_s("%d", &n);
		if (n >= 0) {
			printf("Please enter it again.\n");
			continue;
		}
		printf("The sum is %d.\n", sumToMinusOne(n));
		break;
	}
	system("pause");
	return 0;
}
