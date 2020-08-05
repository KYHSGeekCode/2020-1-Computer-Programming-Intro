/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 정수 5개를 입력 받아 배열에 저장한 후 그 중에 가장 큰 수와 작은 수를 출력하는 프로그램
 작성일시: 2020.04.17
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int input[5];
	int max, min;
	printf("Enter five integers separated by blanks\n");
	for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++) {
		printf("%d번째 수 :", i + 1);
		scanf_s("%d", &input[i]);
		if (i == 0) {
			max = input[0];
			min = input[0];
		}
		if (input[i] > max)
			max = input[i];
		if (input[i] < min)
			min = input[i];
	}
	printf("min is %d. max is %d\n", min, max);
	system("pause");
	return 0;
}
