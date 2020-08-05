/****************************
 프로그램명: practice09.c
 설명: 연습문제 09; 세 개의 양의 정수를 입력 받아 그 합이 짝수이면 가장 큰 수를 출력하고 , 홀수이면 그냥 그 합을 출력하는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max, sum; // max는 최대값, sum은 합 

	printf("양의 정수 3개 입력:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("양의 정수를 입력하세요.\n");
		return -1; // 종료해버린다. 
	}

	sum = num1 + num2 + num3; // 합 구하기 

	// 합의 짝수여부 판단 
	if (sum % 2 == 0) {
		//그다음 max를 구한다 
		if (num1 >= num2) { 
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
		printf("합은 짝수, 가장 큰 수는 %d\n", max);
	}
	else {
		printf("합은 홀수, %d\n", sum);
	}

	system("pause");
	return 0;
}
