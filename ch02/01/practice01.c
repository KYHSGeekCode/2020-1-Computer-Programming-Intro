/**********************************************************************************************
���α׷���: practice01.c
����: �������� 01; ����, ����, ������ ������ �հ� ��� ���Ͽ� ����ϱ�
�ۼ��Ͻ�: 2020.03.27
�ۼ���: ������
******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int korean = 70;
	int english = 80;
	int math = 90;
	int total = korean + english + math; // ����
	const int count = 3; // ���� ����
	float average = (float) total / count; // ���
	printf("����:%d, ����:%d, ����:%d\n", korean, english, math);
	printf("����:%d\n", total);	
	printf("���:%.1f\n", average); // �Ҽ��� ù°�ڸ����� ��� 
	
	system("pause"); // ���α׷��� ��� ���� ���� 
	return 0;
}

