#include <stdio.h>
#include <stdlib.h>

int main() {
	int input[10];
	int max, min;
	for(int i=0; i< sizeof(input)/ sizeof(input[0]); i++) {
		printf("%d번째 숫자 입력 : ", i+1);
		scanf("%d", &input[i]);
	}
	max = input[0];
	min = input[0];
	for(int i=0; i< sizeof(input)/ sizeof(input[0]); i++) {
		if(input[i] > max)
			max = input[i];
		if(input[i] < min)
			min = input[i];
	}
	printf("max : %d , min : %d\n", max, min);
	system("pause");
	return 0;
}
