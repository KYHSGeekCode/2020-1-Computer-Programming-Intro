/****************************
 프로그램명: practice04.c
 설명: 연습문제 04; 회사에서 excel, powerpoint , word 점수가 두개 이상 70점 이상일 때 진급할 수 있다고 할때, 그것을 판단하여  알려주는 프로그램 
 작성일시: 2020.04.03
 작성자: 양현서
*****************************/


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	const int threshold = 70; // 통과 기준 점수 
	bool flag = true; // 계속 입력을 받을것인가. 
	int excel, powerpoint, word; // 엑셀, 파워포인트, 워드 점수 
	int passExcel, passPowerpoint, passWord; // 각각의 과목 통과 여부 
	int passCount; // 통과한 과목의 수 
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
			printf("진급 합격입니다.\n");
		}
		else {
			printf("진급 불합격입니다.\n");
		}
		printf("계속 계산하시겠습니까? (y/n) ");

		scanf_s(" %c", &yesno);
		if (yesno == 'n' || yesno == 'N')
			break;
		else if (yesno == 'y' || yesno == 'Y') // 여기서도 사실상 이 조건문은 dummy이다. y나 Y나 n|N이 아닌 다른 것을 입력하면 계속 반복한다. 
			continue;

	}
	printf("프로그램을 종료합니다. \n");
	system("pause");
	return 0;
}
