/****************************
 ���α׷���: practice02.c
 ����: �������� 02; 1 ���� �Է� ���� n ������ ���� ���ϵ� 5 �� ����� ������ ���� ���ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, sum = 0;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) {
		if (i % 5 == 0) { // 5�� ������ 
			continue; // �ǳʶڴ� 
		}
		sum += i; 
	}
	printf("The sum is %d.\n", sum);
	system("pause");
	return 0;
}
