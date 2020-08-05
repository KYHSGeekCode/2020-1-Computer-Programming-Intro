#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) {
		if (number %i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}