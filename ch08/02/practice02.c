/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; 포인터와 배열 문법을 이용하여 배열의 평균을 구하도록 선언된 두 함수를 이용하는 프로그램
 작성일시: 2020.05.08 
 작성자: 양현서
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

// 배열 문법을 이용하여 평균을 구하는 함수 
double average_by_array(int p[], int length)
{
	double sum = 0;
	for(int i=0; i< length; i++)
	{
		sum += p[i];  // p[i] == *(p+i) == i[p]
	}
	return sum / length;
}

// 포인터 문법을 이용하여 평균을 구하는 함수 
double average_by_pointer(int *p, int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += *(p+i); // *(p+i) == p[i] == i[p]
	}
	return sum / length;
}
