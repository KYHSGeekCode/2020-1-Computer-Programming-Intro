/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 학사 정보 출력하기
 작성일시: 2020.03.20
 작성자: 양현서
*****************************/

#include <stdio.h> // printf 함수
#include <stdlib.h> // system 함수

int main(void) { // main 함수의 시작, return type int, parameter type void
	printf("학과 : 바이오시스템소재학부\n\n"); // 학과와 개행 2번 출력
	printf("학번 : 201913674\n\n"); // 학번과 개행 2번 출력
	printf("성명 : 양현서\n\n"); // 성명과 개행 2번 출력
	system("pause"); // 프로그램이 바로 종료되는 것 방지
	return 0; // main 함수의 종료, 종료 코드 0
} // main 함수의 끝
