/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 놀이기구 탑승 조건 만족 여부를 출력하는 프로그램
 작성일시: 2020.03.27
 작성자: 양현서
*****************************/

#include <stdio.h> // printf 함수
#include <stdlib.h> // system 함수

int main(void) {
	int age;
	int height;
	int health;
	int guardian;
	int canRide;

	printf("심장 문제:");
	scanf_s("%d", &health);
	printf("나이:");
	scanf_s("%d", &age);
	printf("신장(cm):");
	scanf_s("%d", &height);
	printf("보호자 동반:");
	scanf_s("%d", &guardian);

	canRide = !health && (height >= 130) && (age >= 6 || guardian);
	printf("탑승이 %s가능합니다.\n", canRide? "" : "불");
	system("pause"); // 프로그램의 즉시 종료 방지
	return 0; // main 함수의 종료, 종료 코드 0
}