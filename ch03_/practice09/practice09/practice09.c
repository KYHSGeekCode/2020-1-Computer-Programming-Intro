#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max, sum;

	printf("양의 정수 3개 입력:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("양의 정수를 입력하세요.\n");
		return -1;
	}

	sum = num1 + num2 + num3;

	if (sum % 2 == 0) {
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
		printf("합은 짝수, 가장 큰 수는 %d\n", max);
	}
	else {
		printf("합은 홀수, %d\n", sum);
	}

	system("pause");
	return 0;
}