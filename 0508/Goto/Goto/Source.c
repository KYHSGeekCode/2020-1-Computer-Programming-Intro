#include <stdio.h>

int  main()
{
	int num1 = 1;
	for (int i = 0; i < 10; i)
	{
		switch (num1)
		{
			case 1:
			printf("1 ÀÔ´Ï´Ù n");
			goto EXIT;
			default:
				break;
		}
	}
	EXIT:
	return 0;
}
