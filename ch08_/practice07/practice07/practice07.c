#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, column;
	printf("Enter row and column.\n");
	scanf_s("%d %d", &row, &column);
	printf("Enter the value of array elements.\n");
	int ** arr = malloc(sizeof(int) * row);
	for(int i=0 ;i<row;i++)
	{
		arr[i] = malloc(sizeof(int) * column);
		for(int j=0;j<column;j++)
		{
			scanf_s("%d", &arr[i][j]);
			arr[i][j] *= arr[i][j];
		}
	}
	printf("The result is,\n");
	for(int i=0; i<row; i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
	system("pause");
}
