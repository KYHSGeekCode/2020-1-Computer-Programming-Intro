/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 1 부터 입력 정수 n 까지의 합을 구하되 5 의 배수는 제외한 합을 구하는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, sum = 0;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) {
		if (i % 5 == 0) { // 5의 배수라면 
			continue; // 건너뛴다 
		}
		sum += i; 
	}
	printf("The sum is %d.\n", sum);
	system("pause");
	return 0;
}
