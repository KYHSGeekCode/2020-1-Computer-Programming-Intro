/****************************
 ���α׷���: practice01.c
 ����: �������� 01; a, b �� ���� *p �� �����ϴ� add() �Լ��� �ۼ��� �Ŀ� main ���� �� �Լ��� ȣ���Ͽ� ����� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.24
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

void add(const int a, const int b, int * p);

int main() {
	int num1, num2;
	int result;
	printf("Enter two integers.\n");
	scanf_s("%d %d", &num1, &num2);
	add(num1, num2, &result); // result�� �ּҸ� �Ѱ��ش�.
	printf("The sum is %d.\n", result);
	system("pause");
	return 0;
}


void add(const int a, const int b, int * p)
{
	*p = a + b; // p�� ����Ű�� int �� �޸𸮿� a+b�� ����
}

