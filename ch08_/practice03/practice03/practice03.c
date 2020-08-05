#include <stdio.h>
#include <stdlib.h>
void reverse_array(int *a, int *b, int length);

int main()
{
	printf("Enter a sequence of positive integers.\n");
	int input[10] = { 0, };
	int reversed[10] = { 0, };
	int i = 0;
	int length;
	while (1)
	{
		int num;
		scanf_s("%d", &num);
		if (num <= 0)
			break;
		input[i++] = num;
	}
	length = i;
	reverse_array(input, reversed, i);
	for (i = 0; i < length; i++)
	{
		printf("%d ", reversed[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

void reverse_array(int* a, int* b, int length)
{
	for (int i = 0; i < length; i++)
	{
		b[i] = a[length - i - 1];
	}
}
