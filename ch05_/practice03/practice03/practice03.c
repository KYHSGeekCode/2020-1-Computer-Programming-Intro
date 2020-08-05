#include <stdio.h>
#include <stdlib.h>
int sumToMinusOne(int n) {
	if (n == -1) {
		return -1;
	}
	return n + sumToMinusOne(n + 1);
}

int main() {
	int n;
	while (1) {
		printf("Enter n.\n");
		scanf_s("%d", &n);
		if (n >= 0) {
			printf("Please enter it again.\n");
			continue;
		}
		printf("The sum is %d.\n", sumToMinusOne(n));
		break;
	}
	system("pause");
	return 0;
}