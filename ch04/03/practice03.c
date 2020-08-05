/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 입력한 자연수의 약수 (factors) 를 모두 출력하는 프로그램
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) { // 간단하게 처음부터 끝까지 전부 스캔한다. sqrt(number)까지 스캔하고 자기 자신을 출력해도 될 것 같다. 
		if (number %i == 0) { // number가 i의 배수라면, 즉 i가 number의 약수라면 
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
