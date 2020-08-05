/**********************************************************************************************
프로그램명: practice01.c
설명: 연습문제 01; 국어, 영어, 수학의 점수의 합과 평균 구하여 출력하기
작성일시: 2020.03.27
작성자: 양현서
******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int korean = 70;
	int english = 80;
	int math = 90;
	int total = korean + english + math; // 총점
	const int count = 3; // 과목 개수
	float average = (float) total / count; // 평균
	printf("국어:%d, 영어:%d, 수학:%d\n", korean, english, math);
	printf("총점:%d\n", total);	
	printf("평균:%.1f\n", average); // 소수점 첫째자리까지 출력 
	
	system("pause"); // 프로그램의 즉시 종료 방지 
	return 0;
}

