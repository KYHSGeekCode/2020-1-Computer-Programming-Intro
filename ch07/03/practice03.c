/****************************
 ���α׷���: practice03.c
 ����: �������� 03; n factorial�� ����ϴ� ��� �Լ��� �̿��� ���α׷�
 �ۼ��Ͻ�: 2020.04.24
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

void factorial(int n, int * p);

int main() {
	int n, result = 1; // �Է°��� ����� ������ ����
	printf("Enter a natural number.\n"); 
	scanf_s("%d", &n);
	factorial(n, &result); // �Լ��� ȣ���Ѵ�.
	printf("%d factorial is %d.\n", n, result);
	system("pause");
	return 0;
}


void factorial(int n, int* p) // ���丮���� ����ϴ� �Լ�
{
	if(n <=1) // 1!=1, 0!=1�� �����Ѵ�.
	{
		*p = 1;
		return;
	}
	factorial(n-1, p); // *p = (n-1)!
	*p = n * *p; // p�� ����Ű�� ���� n�� ���Ͽ�, n*(n-1)!�� ȿ���� ����.
}
