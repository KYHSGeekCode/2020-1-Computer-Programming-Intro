#include <stdio.h>
#include <stdlib.h>

int power(int a, int b);

int main() {
	int base, multiplier, result;
	printf("Enter base and multiplier\n");
	scanf_s("%d %d", &base, &multiplier);
	result = power(base, multiplier);
	printf("%d to the power of %d is %d\n", base, multiplier, result);
	system("pause");
}

int power(int a, int b) {
	if (b == 1) {
		return a;
	}
	if (b == 0) {
		return 0;
	}
	return a * power(a, b - 1);
}