#include <stdio.h>
#include <stdlib.h>

int main() {
	int input[5];
	int max, min;
	printf("Enter five integers separated by blanks\n");
	for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++) {
		printf("%d¹øÂ° ¼ö :", i + 1);
		scanf_s("%d", &input[i]);
		if (i == 0) {
			max = input[0];
			min = input[0];
		}
		if (input[i] > max)
			max = input[i];
		if (input[i] < min)
			min = input[i];
	}
	printf("min is %d. max is %d\n", min, max);
	system("pause");
	return 0;
}