#include <stdio.h>
double average_by_array(int p[], int length);
double average_by_pointer(int *p, int length);

int main() {
	int	arr[5] = { 10, 40, 50, 20, 15 };
	printf("%lf\n", average_by_array(arr, 5));
	printf("%lf\n", average_by_pointer(arr, 5));
	return 0;
}

double average_by_array(int p[], int length)
{
	double sum = 0;
	for(int i=0; i< length; i++)
	{
		sum += p[i];
	}
	return sum / length;
}

double average_by_pointer(int *p, int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += *(p+i);
	}
	return sum / length;
}