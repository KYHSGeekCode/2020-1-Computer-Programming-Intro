/****************************
 ���α׷���: practice03.c
 ����: �������� 03; ���� ���Կ��� ���, ����, ��, ���� �Ǹ��ϰ�, ���� 3�� �̻� ������ �� �������� ��, �����ݾ��� ������ִ� ���α׷� 
 �ۼ��Ͻ�: 2020.04.03
 �ۼ���: ������
*****************************/

//scanf�� �� �����̽��� �־����� ������ ���ۿ� ������ �����־� ��Ȥ ��ŵ�ϴ� ��찡 �ִ�. 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	const int applePrice = 1000, grapePrice = 3000, pearPrice = 2000, tangerinePrice = 500; // ���� 
	const int grapeThreshold = 3; // ��������Ǵ� �������� �ּҰ� 
	const double discount = 0.9; // ���������Ҷ� ���ϴ� �� 
	bool flag = true; // ��� ������� 
	int apple, grape, pear, tangerine; // ������ ���� 
	char yesno; // ����� y/n �Է� 
	printf("=========���� �� ��� ���α׷�========\n");
	while (flag) {
		//do { // ������ ������� ȯ�ҷ� ����
		printf("��� ������ �Է��ϼ���:");
		scanf_s(" %d", &apple);
		//} while (apple < 0);
		printf("���� ������ �Է��ϼ���:");
		scanf_s(" %d", &grape);
		printf("�� ������ �Է��ϼ���:");
		scanf_s(" %d", &pear);
		printf("�� ������ �Է��ϼ���:");
		scanf_s(" %d", &tangerine);
		printf("\n=============Ȯ��==============\n");
		printf("���: %d��, ����: %d��, ��: %d��, ��: %d��\n", apple, grape, pear, tangerine);
		printf("�½��ϱ�? Ʋ���� n�� �Է��ϼ���. ������ �ٸ� ���� �Է��ϼ���.\n");
		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N') {
			printf("================����=============\n �ٽ� �Է��Ͻʽÿ�.\n");
			continue; // �ٽ� �Է��ϰ� �Ѵ�. 
		}
		int total = apple * applePrice + grape * grapePrice + pear * pearPrice + tangerine * tangerinePrice;
		printf("���� �� �ݾ�: %d��\n", total);
		if (grape >= 3) {
			printf("������: %.1f%%\n", discount * 100); // �Ҽ��� ù°�ڸ����� ��� 
			total *= discount;
		}
		printf("���� �ݾ�: %d��\n", total);
		printf("��� ����Ͻðڽ��ϱ�? (y/n) ");

		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N') // ������� �ʴ´�. 
			break;
		else if (yesno == 'y' || yesno == 'Y') // y�ų� Y�ų� �ƴϰų� ��·�� n�̳� N�� �ƴϹǷ� while���� �����Ѵ�. �� ���ǹ��� ��ǻ� dummy�̴�. 
			continue;

	}
	printf("���α׷��� �����մϴ�. \n");
	system("pause");
	return 0;
}
