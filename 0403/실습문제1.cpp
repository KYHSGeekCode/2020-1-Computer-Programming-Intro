#include <stdio.h>
#include <stdlib.h>

int main() {
	int score;
	printf("점수를 입력하시오 : ");
	scanf("%d", &score);
	if(score >= 80) {
		printf("축하합니다. 합격입니다.\n");
	}
	system("pause");
	return 0; 
}
