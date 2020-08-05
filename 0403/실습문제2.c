#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int number;
	bool flag = true;
	printf("양수를 입력하시오 : ");
	scanf("%d", &number);
	while(flag) {
		if(number % 3 == 0) {
			printf("3의 배수입니다.\n");
		} else {
			printf("3의 배수가 아닙니다.\n"); 
		}		
	}
	system("pause");
	return 0;
}

