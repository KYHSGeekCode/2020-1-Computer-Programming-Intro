/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 1 부터 n 까지의 합을 구하되 그 합이 입력 정수를 넘지 않아야 한다는 조건 하에 최댓값을 구하는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

#include<stdio.h>
#include <stdlib.h>

int main() {
	int max; // 입력 정수를 넘으면 안된다. 
	int n = 1; // 어디까지 합했는가? 
	int sum = 0;
	
	printf("Enter a Maximum number.\n");
	scanf_s("%d", &max);
	for (; sum < max-n; n++) { // n을 더한 결과가 max를 넘지 않게 더한다. 
		sum += n;
	}
	printf("The sum from 1 to %d is %d.\n", n-1, sum); // n이 for문에서 1 더해졌으므로 1 뺀다 
	system("pause");
	return 0;
}
