/****************************
 ���α׷���: practice04.c
 ����: �������� 04; �ڿ��� a, b �� ���� a �� b ������ �����ִ� for �� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int base, power, result = 1; // ���� �ּ����� base�� a power�� b 
	printf("Enter base and power.\n");
	scanf_s(" %d %d", &base, &power);
	for (int i = 0; i < power; i++) { // base�� powerȸ ���Ѵ�. 
		result *= base;
	}
	printf("%d to the power of %d is %d\n", base, power, result);
	system("pause");
	return 0;
}
