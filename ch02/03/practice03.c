/****************************
 ���α׷���: practice03.c
 ����: �������� 03; ���̱ⱸ ž�� ���� ���� ���θ� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.03.27
 �ۼ���: ������
*****************************/

#include <stdio.h> // printf �Լ�
#include <stdlib.h> // system �Լ�

int main(void) {
	int age;
	int height;
	int health;
	int guardian;
	int canRide;

	printf("���� ����:");
	scanf_s("%d", &health);
	printf("����:");
	scanf_s("%d", &age);
	printf("����(cm):");
	scanf_s("%d", &height);
	printf("��ȣ�� ����:");
	scanf_s("%d", &guardian);

	canRide = !health && (height >= 130) && (age >= 6 || guardian);
	printf("ž���� %s�����մϴ�.\n", canRide? "" : "��");
	system("pause"); // ���α׷��� ��� ���� ����
	return 0; // main �Լ��� ����, ���� �ڵ� 0
}