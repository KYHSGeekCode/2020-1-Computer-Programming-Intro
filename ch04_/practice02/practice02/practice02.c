#include <stdio.h>
#include <stdlib.h>

int main() {
	int number, sum = 0;
	printf("Enter a natural number.\n");
	scanf_s("%d", &number);
	for (int i = 1; i <= number; i++) {
		if (i % 5 == 0) {
			continue;
		}
		sum += i; 
	}
	printf("The sum is %d.\n", sum);
	system("pause");
	return 0;
}