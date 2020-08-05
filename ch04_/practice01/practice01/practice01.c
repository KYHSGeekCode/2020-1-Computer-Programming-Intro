#include<stdio.h>
#include <stdlib.h>

int main() {
	int max;
	int n;
	int sum = 0;
	int i = 1;
	printf("Enter a Maximum number.\n");
	scanf_s("%d", &max);
	for (; sum < max-i; i++) {
		sum += i;
	}
	printf("The sum from 1 to %d is %d.\n", i-1, sum);
	system("pause");
	return 0;
}