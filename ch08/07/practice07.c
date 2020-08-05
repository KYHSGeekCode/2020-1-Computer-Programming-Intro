/****************************
 ���α׷���: practice07.c
 ����: �������� 07; ��� ���� ������ �Է� �޾Ƽ� �������� �迭�� ������ �Ŀ� 
 		�迭 �����͸� �Է� �ް� , �ش� �����͸� ������ ���� ����ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.05.08
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, column;
	printf("Enter row and column.\n");
	scanf_s("%d %d", &row, &column);
	printf("Enter the value of array elements.\n");
	
	// arr�� �� �࿡ ���� �����͸� ���� ������ �Ҵ��Ѵ�. 
	int ** arr = malloc(sizeof(int) * row);
	for(int i=0 ;i<row;i++)
	{
		// �� �ึ�� ���� ������� ���� ������ �Ҵ��Ͽ� �Ʊ� �Ҵ��� �����͵鿡 �����Ѵ�. 
		arr[i] = malloc(sizeof(int) * column);
		for(int j=0;j<column;j++)
		{
			// ����� �Է��� �޴´�. 
			scanf_s("%d", &arr[i][j]);
			// �����Ѵ�. 
			arr[i][j] *= arr[i][j];
		}
	}
	
	printf("The result is,\n");
	// ȭ�鿡 ������ ����Ѵ�. 
	for(int i=0; i<row; i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	// �Ҵ� ������ �ݴ�� �������� �޸𸮸� �����Ѵ�. 
	for(int i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
	system("pause");
}
