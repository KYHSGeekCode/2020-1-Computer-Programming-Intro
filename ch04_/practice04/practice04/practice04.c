#include <stdio.h>
#include <stdlib.h>

int main() {
	int base, power, result = 1;
	printf("Enter base and power.\n");
	scanf_s(" %d %d", &base, &power);
	for (int i = 0; i < power; i++) {
		result *= base;
	}
	printf("%d to the power of %d is %d\n", base, power, result);
	system("pause");
	return 0;
}