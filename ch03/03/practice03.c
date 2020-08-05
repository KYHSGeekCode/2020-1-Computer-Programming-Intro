/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 과일 가게에서 사과, 포도, 배, 귤을 판매하고, 포도 3개 이상 구매할 때 할인해줄 때, 결제금액을 계산해주는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/

//scanf할 때 스페이스를 넣어주지 않으면 버퍼에 개행이 남아있어 간혹 스킵하는 경우가 있다. 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	const int applePrice = 1000, grapePrice = 3000, pearPrice = 2000, tangerinePrice = 500; // 가격 
	const int grapeThreshold = 3; // 할인적용되는 포도개수 최소값 
	const double discount = 0.9; // 할인적용할때 곱하는 값 
	bool flag = true; // 계속 계산할지 
	int apple, grape, pear, tangerine; // 과일의 개수 
	char yesno; // 사용자 y/n 입력 
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
			continue; // 다시 입력하게 한다. 
		}
		int total = apple * applePrice + grape * grapePrice + pear * pearPrice + tangerine * tangerinePrice;
		printf("할인 전 금액: %d원\n", total);
		if (grape >= 3) {
			printf("할인율: %.1f%%\n", discount * 100); // 소수점 첫째자리까지 출력 
			total *= discount;
		}
		printf("최종 금액: %d원\n", total);
		printf("계속 계산하시겠습니까? (y/n) ");

		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N') // 계속하지 않는다. 
			break;
		else if (yesno == 'y' || yesno == 'Y') // y거나 Y거나 아니거나 어쨌든 n이나 N은 아니므로 while문을 지속한다. 이 조건문은 사실상 dummy이다. 
			continue;

	}
	printf("프로그램을 종료합니다. \n");
	system("pause");
	return 0;
}
