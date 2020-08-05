/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 키보드로 입력 받은 데이터를 아스키 코드 값으로 변환하여 출력하는 프로그램
 작성일시: 2020.03.27
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char inputChar; // 입력받은 문자를 저장하는 변수
	printf("문자 입력:");
	scanf_s("%c", &inputChar); // 문자를 입력받는다.
	printf("%c문자의 아스키 코드 값은 %d입니다.\n", inputChar, inputChar); // 첫 번째는 문자형으로, 두 번째는 숫자로 출력한다.
	system("pause"); // 프로그램의 즉시 종료 방지
	return 0; // main 함수의 종료, 종료 코드 0
}

