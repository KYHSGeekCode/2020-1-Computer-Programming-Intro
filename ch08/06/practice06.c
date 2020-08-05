/****************************
 ���α׷���: practice06.c
 ����: �������� 06; ������ �Է� �ޱ� ���������� �����͸� �迭�� �����ϰ�
 					�Լ��� ȣ���Ͽ� �Է¹��� ���� �߿��� �ּڰ��� �ִ��� �˾Ƴ��� ����ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.05.08
 �ۼ���: ������
*****************************/

#include <stdlib.h>
#include <stdio.h>

void min_max(int *arr, int *min, int *max, int length);

int main()
{
	int number;
	int min, max;
	printf("Enter a number of integers to input: ");
	scanf_s("%d", &number); // �Է¹��� ������ ������ ���� 
	int *input = (int*)malloc(sizeof(int) * number); // �Է¹��� ������ ������ŭ �޸� �Ҵ�(int) 
	printf("Enter a sequence of positive integers.\n"); 
	// ���� �Է��� �޴� �κ� 
	int i;
	for (i = 0; i < number; i++)
	{
		scanf_s("%d", &input[i]);
		if (input[i] < 0)
			break;
	}
	i--; // for���� ������ i++�� ����ϸ� �Է¹��� ���� �ȴ�. 
	min_max(input, &min, &max, i);
	printf("Minimum is %d, Naximum is %d.\n", min, max);
	free(input); // �޸� ���� 
	system("pause");
	return 0;
}

// arr���� �ִ񰪰� �ּڰ��� ã�� *min�� *max�� ���� 
void min_max(int* arr, int* min, int* max, int length)
{
	*min = *arr;
	*max = *arr;
	for(int i=1; i<length; i++)
	{
		if (*min > arr[i])
			*min = arr[i];
		if (*max < arr[i])
			*max = arr[i];
	}
}
