#include <stdio.h>
#include <stdlib.h>

int main() {
	int decimal;
	unsigned char result[4] = { 0 };
	printf("Enter a decimal number.");
	scanf_s("%d", &decimal);
	int i = 0;
	while (decimal>>1) {
		result[i] = decimal & 0x01;
		decimal >>= 1;
		i++;
	}
	result[i] = decimal & 0x01;
	for(i=3; i>=0; i--)
		printf("%d", result[i]);
	printf("\n");
	system("pause");
	return 0;
}