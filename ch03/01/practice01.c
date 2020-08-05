/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 사용자에게 한 개의 정수를 입력 받고 그 값에 따라 적절한 메시지를 출력하는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h> // printf
#include <stdbool.h> // bool과 true, false 이용 용도 
#include <stdlib.h> // system

int main() {
	bool flag = true; // 물어보기를 또 반복할지 판단
	int input; // 사용자 입력 변수
	while (flag) { // flag가 false가 되기 전까지 반복
		printf("정수를 입력:");
		scanf_s("%d", &input); // 입력 받기
		if (input < 0) {
			printf("입력한 값은 0보다 작습니다.\n");
		}
		else if (input == 0) {
			flag = false; // 반복을 끝내기 위한 것이다.
		}
		else if (input < 10) {
			printf("입력한 값은 0이상 10미만입니다.\n");
		}
		else if (input < 20) {
			printf("입력한 값은 10이상 20미만입니다.\n");
		}
		else if (input < 30) {
			printf("입력한 값은 20이상 30미만입니다.\n");
		}
		else {
			printf("입력한 값은 30이상입니다.\n");
		}
	}
	printf("프로그램 종료...\n");
	system("pause"); // 즉시 종료 방지
	return 0; // 종료
}
