#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int hour, minute;
	bool isLate;
	printf("��� �ð��� �ø� �Է�:");
	scanf_s("%d", &hour);
	printf("��� �ð��� ���� �Է�:");
	scanf_s("%d", &minute);
	
	if (hour == 9) {
		if (minute > 30) {
			isLate = true;
		}
		else {
			isLate = false;
		}
	}
	else if (hour < 9) {
		isLate = false;
	}
	else {
		isLate = true;
	}
	if (isLate) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("���� ����Դϴ�.\n");
	}
	system("pause");
	return 0;
}