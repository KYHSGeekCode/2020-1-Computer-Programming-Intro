/****************************
 ���α׷���: practice03.c
 ����: �������� 03;  8���� �ĺ�(1 ~ 8��)�� �⸶���� �� 10���� ��ǥ ����� �Է� �޾Ƽ� �缱�� �ĺ��� ��ȣ�� �缱���� ������ ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.04.17
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int vote[10]; // = { 0 };
	int count[8] = { 0 };
	int max, maxindex;
	max = 0; maxindex = 0;
	printf("Enter the result of voting.\n");
	const int numberOfVotes = sizeof(vote) / sizeof(vote[0]);
	for (int i = 0; i < numberOfVotes; i++) {
		printf("%02d. ��ǥ�ϼ��� :", i + 1);
		scanf_s("%d", &vote[i]);
		int voted = vote[i] - 1;
		count[voted]++;
		if (count[voted] > max) {
			max = count[voted];
			maxindex = voted;
		}
	}
	if (max <= numberOfVotes/2) {
		printf("No winner.\n");
	}
	else {
		printf("Number %d is the winner\n", maxindex + 1);
	}
	system("pause");
	return 0;
}