#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2;
	printf("���� �� ���� �Է��ϼ���:");
	scanf_s("%d %d", &num1, &num2);
	if (num1 >= num2) {
		if (num1 % 2 == 0) {
			printf("%d�� ū ���̰� ¦���Դϴ�.\n", num1);
		}
		else {
			printf("%d�� ū ���̰� Ȧ���Դϴ�.\n", num1);
		}
	}
	else {
		if (num2 % 2 == 0) {
			printf("%d�� ū ���̰� ¦���Դϴ�.\n", num2);
		}
		else {
			printf("%d�� ū ���̰� Ȧ���Դϴ�.\n", num2);
		}
	}
	system("pause");
	return 0;
}