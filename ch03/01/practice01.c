/****************************
 ���α׷���: practice01.c
 ����: �������� 01; ����ڿ��� �� ���� ������ �Է� �ް� �� ���� ���� ������ �޽����� ����ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include <stdio.h> // printf
#include <stdbool.h> // bool�� true, false �̿� �뵵 
#include <stdlib.h> // system

int main() {
	bool flag = true; // ����⸦ �� �ݺ����� �Ǵ�
	int input; // ����� �Է� ����
	while (flag) { // flag�� false�� �Ǳ� ������ �ݺ�
		printf("������ �Է�:");
		scanf_s("%d", &input); // �Է� �ޱ�
		if (input < 0) {
			printf("�Է��� ���� 0���� �۽��ϴ�.\n");
		}
		else if (input == 0) {
			flag = false; // �ݺ��� ������ ���� ���̴�.
		}
		else if (input < 10) {
			printf("�Է��� ���� 0�̻� 10�̸��Դϴ�.\n");
		}
		else if (input < 20) {
			printf("�Է��� ���� 10�̻� 20�̸��Դϴ�.\n");
		}
		else if (input < 30) {
			printf("�Է��� ���� 20�̻� 30�̸��Դϴ�.\n");
		}
		else {
			printf("�Է��� ���� 30�̻��Դϴ�.\n");
		}
	}
	printf("���α׷� ����...\n");
	system("pause"); // ��� ���� ����
	return 0; // ����
}
