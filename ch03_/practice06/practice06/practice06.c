#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	printf("숫자 두 개를 입력하세요:");
	scanf_s("%d %d", &num1, &num2);
	if (num1 >= num2) {
		if (num1 % 2 == 0) {
			printf("%d이 큰 수이고 짝수입니다.\n", num1);
		}
		else {
			printf("%d이 큰 수이고 홀수입니다.\n", num1);
		}
	}
	else {
		if (num2 % 2 == 0) {
			printf("%d이 큰 수이고 짝수입니다.\n", num2);
		}
		else {
			printf("%d이 큰 수이고 홀수입니다.\n", num2);
		}
	}
	system("pause");
	return 0;
}