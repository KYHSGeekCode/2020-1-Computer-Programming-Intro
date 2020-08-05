/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 사용자에게 세 개의 정수를 입력 받은 후 함수 min_max를 호출하여 최댓값과 최솟값을 출력하는 프로그램
 작성일시: 2020.04.10
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int min, max;
void min_max(int a, int b, int c);

int main() {
	int a, b, c; // 정수 3개
	printf("Enter three integers.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	min_max(a, b, c);
	printf("min is %d, max is %d.\n", min, max);
	system("pause");
	return 0;
}

void min_max(int a, int b, int c) {
	if (a > b) {
		if (b > c) {
			max = a;
			min = c;
		}
		else {
			if (a > c) {
				max = a;
				min = b;
			}
			else {
				max = c;
				min = b;
			}
		}
	}
	else { // a < b
		if (b < c) {
			max = c;
			min = a;
		}
		else {
			if (a > c) {
				max = b;
				min = c;
			}
			else {
				max = b;
				min = a;
			}
		}
	}
}
