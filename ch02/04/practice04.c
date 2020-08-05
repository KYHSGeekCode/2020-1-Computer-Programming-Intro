/****************************
 프로그램명: practice04.c
 설명: 연습문제 04; 연도를 입력받아 윤년인지 아닌지를 판단하여 출력하는 프로그램
 작성일시: 2020.03.27
 작성자: 양현서
*****************************/

#include <stdio.h> // printf 함수
#include <stdlib.h> // system 함수

int main(void) {
	int year; // 년도
	int isLeapYear; // 윤년인지
	printf("연도를 입력하시오.\n");
	scanf_s("%d", &year); // year에 입력한 정수 저장 
	isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0); // (4로 나누어 떨어지고 100으로 나누어떨어지지 않)거나 400으로 나누어떨어지면 윤년 
	printf("윤년%s니다.\n", isLeapYear ? "입" : "이 아닙"); // 윤년이면 윤년입니다. 윤년이 아니면 윤년이 아닙니다가 출력됨 
	system("pause"); // 프로그램의 즉시 종료 방지
	return 0; // main 함수의 종료, 종료 코드 0
}
