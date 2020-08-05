/****************************
 ���α׷���: practice03.c
 ����: �������� 03; ���� ����(����)�� �Էµ� ������ �Է¹��� ���� ����(���)�� ������� a �迭�� �����ϰ�
  					reverse_array�� ȣ���Ͽ� �Է¹��� ������ �ݴ�� b �迭�� �����ϰ�,
  					����� b �迭�� ��Ҹ� main() ���� ������� ����ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.05.08
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>
void reverse_array(int *a, int *b, int length);

int main()
{
	printf("Enter a sequence of positive integers.\n");
	int input[10] = { 0, };	// ������� �Է��� ���� �� ����� �迭 
	int reversed[10] = { 0, }; // �Ųٷ� ������ ��� �迭 
	int i = 0; // �ݺ����� ���� , ī���� 
	int length; // �Է��� ���ڵ��� ���� 
	while (1)
	{
		int num; // �Է°��� ���� ���� 
		scanf_s("%d", &num);
		if (num <= 0) // ������ �Է¹����� �׸� �Է� �޴´� 
			break;
		input[i++] = num;
	}
	// �� �������� i�� length�̴�. 
	length = i;
	reverse_array(input, reversed, i);
	for (i = 0; i < length; i++)
	{
		printf("%d ", reversed[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

// �迭 a�� b�� �Ųٷ� �����ϴ� �Լ� 
void reverse_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		b[i] = a[length - i - 1];
	}
}
