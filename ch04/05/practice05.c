/****************************
 ���α׷���: practice05.c
 ����: �������� 05; Ȧ�� n �� �Է¹޾Ƽ� �Ʒ��� ���� ����ϴ� ���α׷�
        5�� �Է��� ��,
		*
		**
		***
		****
		*****
		1
		12
		123
		1234
		12345
		  *
		 ***
		***** 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; // Ȧ�������� 
	int initSpaces; // ù���� ����/������ �� �����̽��� ���� 
	printf("Enter the number.\n");
	scanf_s("%d", &n);
	for (int i = 1; i < n+1; i++) { // ��ǥ�� 1~n�� ��� 
		for (int j = 0; j < i; j++) { // i�� ��ǥ ��� 
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n + 1; i++) { // 1�ٺ��� n�ٱ��� 
		for (int j = 1; j <= i; j++) { // i�� ���� ��� 
			printf("%d", j);
		}
		printf("\n");
	}
	initSpaces = n / 2; // ù���� ����/������ �� �����̽��� ���� 

	for (int lineNo = 1; lineNo * 2 - 1 <= n; lineNo++) {
		int spaces = initSpaces - lineNo + 1; // �����̽� �� ��� 
		for (int s = 0; s < spaces; s++) { // ������ ����ŭ ���� ��� 
			printf(" ");
		}
		for (int st = 0; st < lineNo * 2 - 1; st++) {
			printf("*"); // ������ ����ŭ ��ǥ �ٷ� 
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
