void get_sum_mul(int x, int y, int * p_sum, int * p_mul)
{
	*p_sum = x + y;
	*p_mul = x * y;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	int sum, mul;
	scanf_s("%d %d", &a, &b);
	get_sum_mul(a, b, &sum, &mul);
	printf("Че: %d Аі: %d\n", sum, mul);
	system("pause");
	return 0;
}