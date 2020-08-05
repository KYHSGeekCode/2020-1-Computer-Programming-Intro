#include <stdio.h>
#include <stdlib.h>

void printAsterisk(int number) {
	if (number <= 0)
		return;
	printf("*");
	printAsterisk(number - 1);
}

int main() {
	int number;
	while (1) {
		printf("Enter the number of asterisk.\n");
		scanf_s("%d", &number);
		if (number <= 0) {
			printf("Please enter it again.\n");
			continue;
		}
		printAsterisk(number);
		break;
	}
	printf("\n");
	system("pause");
}