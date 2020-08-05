/****************************
 프로그램명: practice03.c
 설명: 연습문제 03;  8명의 후보(1 ~ 8번)가 출마했을 때 10명의 투표 결과를 입력 받아서 당선된 후보의 번호나 당선인의 유무를 출력하는 프로그램
 작성일시: 2020.04.17
 작성자: 양현서
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
		printf("%02d. 투표하세요 :", i + 1);
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