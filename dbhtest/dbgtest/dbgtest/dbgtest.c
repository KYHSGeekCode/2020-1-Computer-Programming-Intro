#include<stdio.h>
int main(void) {
	int num = 10;
	int* numPtr = &num;
	*numPtr = 20; //break point
	printf("%d\n", *numPtr);
	printf("%d\n", num);
	return 0;
}