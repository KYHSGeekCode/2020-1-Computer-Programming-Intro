/****************************
 프로그램명: practice07.c
 설명: 연습문제 07; 행과 열의 개수를 입력 받아서 동적으로 배열을 생성한 후에 
 		배열 데이터를 입력 받고 , 해당 데이터를 제곱한 값을 출력하는 프로그램 
 작성일시: 2020.05.08
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row, column;
	printf("Enter row and column.\n");
	scanf_s("%d %d", &row, &column);
	printf("Enter the value of array elements.\n");
	
	// arr에 각 행에 대한 포인터를 담을 공간을 할당한다. 
	int ** arr = malloc(sizeof(int) * row);
	for(int i=0 ;i<row;i++)
	{
		// 각 행마다 행의 내용들을 담을 공간을 할당하여 아까 할당한 포인터들에 저장한다. 
		arr[i] = malloc(sizeof(int) * column);
		for(int j=0;j<column;j++)
		{
			// 사용자 입력을 받는다. 
			scanf_s("%d", &arr[i][j]);
			// 제곱한다. 
			arr[i][j] *= arr[i][j];
		}
	}
	
	printf("The result is,\n");
	// 화면에 내용을 출력한다. 
	for(int i=0; i<row; i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	// 할당 순서와 반대로 차근차근 메모리를 해제한다. 
	for(int i=0;i<row;i++)
	{
		free(arr[i]);
	}
	free(arr);
	system("pause");
}
