#include <stdio.h>
#include <stdlib.h>

int min, max;
void min_max(int a, int b, int c);

int main() {
	int a, b, c; // Á¤¼ö 3°³
	printf("Enter three integers.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	min_max(a, b, c);
	printf("min is %d, max is %d.\n", min, max);
	system("pause");
	return 0;
}

void min_max(int a, int b, int c) {
	if (a > b) {
		if (b > c) {
			max = a;
			min = c;
		}
		else {
			if (a > c) {
				max = a;
				min = b;
			}
			else {
				max = c;
				min = b;
			}
		}
	}
	else { // a < b
		if (b < c) {
			max = c;
			min = a;
		}
		else {
			if (a > c) {
				max = b;
				min = c;
			}
			else {
				max = b;
				min = a;
			}
		}
	}
}