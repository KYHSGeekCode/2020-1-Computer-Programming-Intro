#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max, sum;

	printf("���� ���� 3�� �Է�:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("���� ������ �Է��ϼ���.\n");
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
		printf("���� ¦��, ���� ū ���� %d\n", max);
	}
	else {
		printf("���� Ȧ��, %d\n", sum);
	}

	system("pause");
	return 0;
}