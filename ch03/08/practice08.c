/****************************
 ���α׷���: practice08.c
 ����: �������� 08; �� ���� ���� ������ �Է� �޾� , ���� ū ���� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, max;

	printf("���� ���� 3�� �Է�:");
	scanf_s(" %d %d %d", &num1, &num2, &num3);
	if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
		printf("���� ������ �Է��ϼ���.\n");
		return -1; // ���α׷��� ������ ������. 
	}
	
    // ���� ū �� ã�� 
	if (num1 >= num2) { // ũ�� �� 
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
	printf("���� ū���� %d �Դϴ�.\n", max);
	system("pause");
	return 0;
}
