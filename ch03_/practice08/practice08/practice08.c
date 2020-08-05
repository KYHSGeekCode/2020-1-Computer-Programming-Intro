#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max;

	printf("양의 정수 3개 입력:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("양의 정수를 입력하세요.\n");
		return -1;
	}

	if (num1 >= num2) {
		if (num1 >= num3) {
			max = num1;
		}
		else {
			max = num3;
		}
	}
	else {
		if (num2 >= num3) {
			max = num2;
		}
		else {
			max = num3;
		}
	}
	printf("가장 큰수는 %d 입니다.\n", max);
	system("pause");
	return 0;
}