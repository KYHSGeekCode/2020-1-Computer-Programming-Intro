/****************************
 ���α׷���: practice01.c
 ����: �������� 01; 1 ���� n ������ ���� ���ϵ� �� ���� �Է� ������ ���� �ʾƾ� �Ѵٴ� ���� �Ͽ� �ִ��� ���ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include<stdio.h>
#include <stdlib.h>

int main() {
	int max; // �Է� ������ ������ �ȵȴ�. 
	int n = 1; // ������ ���ߴ°�? 
	int sum = 0;
	
	printf("Enter a Maximum number.\n");
	scanf_s("%d", &max);
	for (; sum < max-n; n++) { // n�� ���� ����� max�� ���� �ʰ� ���Ѵ�. 
		sum += n;
	}
	printf("The sum from 1 to %d is %d.\n", n-1, sum); // n�� for������ 1 ���������Ƿ� 1 ���� 
	system("pause");
	return 0;
}
