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
	printf("=========진급 판단 프로그램========\n");
	while (flag) {
		printf("Excel 점수를 입력하세요:");
		scanf_s(" %d", &excel);
		printf("Powerpoint 점수를 입력하세요:");
		scanf_s(" %d", &powerpoint);
		printf("word 점수를 입력하세요:");
		scanf_s(" %d", &word);
		passExcel = excel >= threshold ? 1 : 0;
		passPowerpoint = powerpoint >= threshold ? 1 : 0;
		passWord = word >= threshold ? 1 : 0;
		passCount = passExcel + passPowerpoint + passWord;
		if(passCount >=2) {
			printf("합격입니다.\n");
		}
		else {
			printf("불합격입니다.\n");
		}
		printf("계속 계산하시겠습니까? (y/n) ");

		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N')
			break;
		else if (yesno == 'y' || yesno == 'Y')
			continue;

	}
	printf("프로그램을 종료합니다. \n");
	system("pause");
	return 0;
}