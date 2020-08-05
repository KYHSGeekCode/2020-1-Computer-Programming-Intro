#include<stdio.h>
#include<stdlib.h>

void negativeSquared(int, int);
int positiveSquared(int, int);
void printResult(double);
double gResult;

int main(void)
{
	int num, pow;
	int lResult = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf_s("%d", &num);
		printf("제곱 횟수 : ");
		scanf_s("%d", &pow);
		if (pow == 0) {
			printResult(lResult);
			break;
		}
		else if (pow < 0) {
			negativeSquared(num, pow);
			printResult(gResult);
		}
		else {
			lResult = positiveSquared(num, pow);
			printResult(lResult);
		}
	}
	return 0;
}
void negativeSquared(int num, int pow) {
	double result = 1.0;
	pow *= -1;
	for (int i = 1; i <= pow; pow++) {
		result *= num;
	}
	gResult = 1 / result;
}
int positiveSquared(int num, int pow) {
	int result = 1;
	int i = 1;
	while (i <= pow) {
		//num *= result;
		result *= num;
		i++;
	}
	return result;
}
void printResult(double result) {
	printf("결과는 %f입니다.\n", gResult);
}