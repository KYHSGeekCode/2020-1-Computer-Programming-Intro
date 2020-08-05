#include <stdio.h>
#include <stdlib.h>

int current_min(int n) {
	static int min = 100;
	if (n < min) {
		min = n;
	}
	return min;
}

int main() {
	int number;
	int min;
	while (1) {
		printf("Enter a number.\n");
		scanf_s("%d", &number);
		if (number < 0)
			break;
		min = current_min(number);
		printf("Current min is %d\n", min);
	}
	system("pause");
	return 0;
}
