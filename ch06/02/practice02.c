/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 10진수를 2진수로 변환하는 프로그램
 작성일시: 2020.04.17
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int decimal;
	unsigned char result[4] = { 0 };
	printf("Enter a decimal number.\n");
	scanf_s("%d", &decimal);
	int i = 0;
	while (decimal>>1) { // 2로 나눈 몪이  0이 아닌가. 
		result[i] = decimal & 0x01; // 2로 나눈 나머지 
		decimal >>= 1; // 2로 나눈다. 
		i++;
	}
	result[i] = decimal & 0x01; //마지막 자리수 
	for(i=3; i>=0; i--)
		printf("%d", result[i]);
	printf("\n");
	system("pause");
	return 0;
}
