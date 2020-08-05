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
	printf("=========과일 값 계산 프로그램========\n");
	while (flag) {
		//do { // 개수가 음수라면 환불로 가정
		printf("사과 개수를 입력하세요:");
		scanf_s(" %d", &apple);
		//} while (apple < 0);
		printf("포도 개수를 입력하세요:");
		scanf_s(" %d", &grape);
		printf("배 개수를 입력하세요:");
		scanf_s(" %d", &pear);
		printf("귤 개수를 입력하세요:");
		scanf_s(" %d", &tangerine);
		printf("\n=============확인==============\n");
		printf("사과: %d개, 포도: %d개, 배: %d개, 귤: %d개\n", apple, grape, pear, tangerine);
		printf("맞습니까? 틀리면 n을 입력하세요. 맞으면 다른 것을 입력하세요.\n");
		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N') {
			printf("================정정=============\n 다시 입력하십시오.\n");
			continue;
		}
		int total = apple * applePrice + grape * grapePrice + pear * pearPrice + tangerine * tangerinePrice;
		printf("할인 전 금액: %d원\n", total);
		if (grape >= 3) {
			printf("할인율: %.1f%%\n", discount * 100);
			total *= discount;
		}
		printf("최종 금액: %d원\n", total);
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