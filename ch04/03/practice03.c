/****************************
 ���α׷���: practice03.c
 ����: �������� 03; �Է��� �ڿ����� ��� (factors) �� ��� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) { // �����ϰ� ó������ ������ ���� ��ĵ�Ѵ�. sqrt(number)���� ��ĵ�ϰ� �ڱ� �ڽ��� ����ص� �� �� ����. 
		if (number %i == 0) { // number�� i�� ������, �� i�� number�� ������ 
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
