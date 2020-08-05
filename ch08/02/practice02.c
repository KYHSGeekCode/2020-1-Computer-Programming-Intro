/****************************
 ���α׷���: practice02.c
 ����: �������� 02; �����Ϳ� �迭 ������ �̿��Ͽ� �迭�� ����� ���ϵ��� ����� �� �Լ��� �̿��ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.05.08 
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>
double average_by_array(int p[], int length);
double average_by_pointer(int *p, int length);

int main() {
	int	arr[5] = { 10, 40, 50, 20, 15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
//	system("pause");
	return 0;
}

// �迭 ������ �̿��Ͽ� ����� ���ϴ� �Լ� 
double average_by_array(int p[], int length)
{
	double sum = 0;
	for(int i=0; i< length; i++)
	{
		sum += p[i];  // p[i] == *(p+i) == i[p]
	}
	return sum / length;
}

// ������ ������ �̿��Ͽ� ����� ���ϴ� �Լ� 
double average_by_pointer(int *p, int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += *(p+i); // *(p+i) == p[i] == i[p]
	}
	return sum / length;
}
