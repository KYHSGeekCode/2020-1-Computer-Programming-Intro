#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int initSpaces;
	printf("Enter the number.\n");
	scanf_s("%d", &n);
	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
	initSpaces = n / 2;

	for (int lineNo = 1; lineNo * 2 - 1 <= n; lineNo++) {
		int spaces = initSpaces - lineNo + 1;
		for (int s = 0; s < spaces; s++) {
			printf(" ");
		}
		for (int st = 0; st < lineNo * 2 - 1; st++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}