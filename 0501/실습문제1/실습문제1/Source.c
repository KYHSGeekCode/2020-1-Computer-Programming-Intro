#include <stdio.h>
#include <stdlib.h>

void selection_sort(int * ary, int count)
{
	if (count <= 1)
		return;
	int max = ary[0];
	int maxi = 0;
	for (int i = 0; i < count; i++)
	{
		if (max < ary[i])
		{
			maxi = i;
			max = ary[i];
		}
	}
	int temp = ary[maxi];
	ary[maxi] = ary[count - 1];
	ary[count - 1] = temp;
	selection_sort(ary, count-1);
}

int main() {
	int ary[5];
	printf("5개의 정수 입력 : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &ary[i]);
	}
	selection_sort(ary, sizeof(ary) / sizeof(ary[0]));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", ary[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
