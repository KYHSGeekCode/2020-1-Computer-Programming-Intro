#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *p, **q;
	p = &num;
	q = &p;
	*p = 5;
	printf("%d\n", **q);
	**q = 10;
	printf("%d\n", *p);
	system("pause");
	return 0;
}
