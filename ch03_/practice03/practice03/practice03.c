#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	const int applePrice = 1000, grapePrice = 3000, pearPrice = 2000, tangerinePrice = 500;
	const int grapeThreshold = 3;
	const double discount = 0.9;
	bool flag = true;
	int apple, grape, pear, tangerine;
	char yesno;
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
			continue;
		}
		int total = apple * applePrice + grape * grapePrice + pear * pearPrice + tangerine * tangerinePrice;
		printf("���� �� �ݾ�: %d��\n", total);
		if (grape >= 3) {
			printf("������: %.1f%%\n", discount * 100);
			total *= discount;
		}
		printf("���� �ݾ�: %d��\n", total);
		printf("��� ����Ͻðڽ��ϱ�? (y/n) ");

		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N')
			break;
		else if (yesno == 'y' || yesno == 'Y')
			continue;

	}
	printf("���α׷��� �����մϴ�. \n");
	system("pause");
	return 0;
}