/****************************
 ���α׷���: practice07.c
 ����: �������� 07; ȸ�� ��ٽð��� 9�� 30���� �������� üũ�Ͽ� ���� ���θ� �˷��ִ� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int hour, minute;
	bool isLate; // �������� �Ǵ� 
	printf("��� �ð��� �ø� �Է�:");
	scanf_s("%d", &hour);
	printf("��� �ð��� ���� �Է�:");
	scanf_s("%d", &minute);
	
	if (hour == 9) { // 9�ö��, 30�� �������ε� �������� 
		if (minute > 30) {
			isLate = true;
		}
		else {
			isLate = false;
		}
	}
	else if (hour < 9) { // 9�� ���� 
		isLate = false;
	}
	else { // �̰��� ������ 9�� �����̴�. 
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
