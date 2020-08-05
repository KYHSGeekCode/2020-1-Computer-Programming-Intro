/****************************
 ���α׷���: practice02.c
 ����: �������� 02; a, b, c �� ���� �� ��ȯ ���� (Cyclic Swap)�� a �� b �� , b �� c �� , c �� a �� �ű�� ������ ���Ѵ� . �Ʒ� cyclic_swap �Լ��� ȣ���Ͽ� main() ���� a, b, c ���� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.24
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

void cyclic_swap(int *a, int *b, int *c);

int main() {
	int a, b, c;
	printf("Enter three integers a, b, c.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	cyclic_swap(&a, &b, &c); // a, b, c�� �ּҸ� �Ѱ��ش�.
	printf("After cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	system("pause");
	return 0;
}


void cyclic_swap(int *a, int *b, int *c)
{
	const int old_a = *a; // a�� c�� ����� ���� �����صд�.
	*a = *c; // a�� �ּҿ� c�� �ּҿ� �ִ� ���� ����.
	*c = *b; // c�� �ּҿ� b�� �ּҿ� �ִ� ���� ����.
	*b = old_a; // b�� �ּҿ� ���� a�� ����.
}

