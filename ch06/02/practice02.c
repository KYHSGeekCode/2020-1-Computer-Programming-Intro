/****************************
 ���α׷���: practice02.c
 ����: �������� 02; 10������ 2������ ��ȯ�ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.17
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int decimal;
	unsigned char result[4] = { 0 };
	printf("Enter a decimal number.\n");
	scanf_s("%d", &decimal);
	int i = 0;
	while (decimal>>1) { // 2�� ���� ����  0�� �ƴѰ�. 
		result[i] = decimal & 0x01; // 2�� ���� ������ 
		decimal >>= 1; // 2�� ������. 
		i++;
	}
	result[i] = decimal & 0x01; //������ �ڸ��� 
	for(i=3; i>=0; i--)
		printf("%d", result[i]);
	printf("\n");
	system("pause");
	return 0;
}
