#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	const int threshold = 70;
	bool flag = true;
	int excel, powerpoint, word;
	int passExcel, passPowerpoint, passWord;
	int passCount;
	char yesno;
	printf("=========���� �Ǵ� ���α׷�========\n");
	while (flag) {
		printf("Excel ������ �Է��ϼ���:");
		scanf_s(" %d", &excel);
		printf("Powerpoint ������ �Է��ϼ���:");
		scanf_s(" %d", &powerpoint);
		printf("word ������ �Է��ϼ���:");
		scanf_s(" %d", &word);
		passExcel = excel >= threshold ? 1 : 0;
		passPowerpoint = powerpoint >= threshold ? 1 : 0;
		passWord = word >= threshold ? 1 : 0;
		passCount = passExcel + passPowerpoint + passWord;
		if(passCount >=2) {
			printf("�հ��Դϴ�.\n");
		}
		else {
			printf("���հ��Դϴ�.\n");
		}
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