/****************************
 프로그램명: practice07.c
 설명: 연습문제 07; 회사 출근시각이 9시 30분을 지났는지 체크하여 지각 여부를 알려주는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int hour, minute;
	bool isLate; // 지각인지 판단 
	printf("출근 시간의 시를 입력:");
	scanf_s("%d", &hour);
	printf("출근 시간의 분을 입력:");
	scanf_s("%d", &minute);
	
	if (hour == 9) { // 9시라면, 30분 기준으로도 따져본다 
		if (minute > 30) {
			isLate = true;
		}
		else {
			isLate = false;
		}
	}
	else if (hour < 9) { // 9시 이전 
		isLate = false;
	}
	else { // 이경우는 무조건 9시 이후이다. 
		isLate = true;
	}
	if (isLate) {
		printf("지각입니다.\n");
	}
	else {
		printf("정시 출근입니다.\n");
	}
	system("pause");
	return 0;
}
