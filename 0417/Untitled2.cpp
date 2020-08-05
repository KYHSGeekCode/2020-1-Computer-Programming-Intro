#include <stdio.h>
#include <stdlib.h>

int main() {
	int score[5];
	int total;
	float avg;
	for(int i=0; i< sizeof(score)/ sizeof(score[0]); i++) {
		printf("%d번째 점수 입력 : ", i+1);
		scanf("%d", &score[i]);
		if(score[i] < 0 || score[i] > 100) {
			printf("다시 입력하세요. \n");
			i=i-1;
			continue;
		}
		total += score[i];
	}
	avg = (float)total / 5;
	printf("total : %d , avg : %.2f\n", total, avg);
	system("pause");
	return 0;
}
