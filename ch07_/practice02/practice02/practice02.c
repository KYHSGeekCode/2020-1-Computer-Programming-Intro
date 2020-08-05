/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; a, b, c 가 있을 때 순환 스왑 (Cyclic Swap)은 a 를 b 로 , b 를 c 로 , c 를 a 로 옮기는 스왑을 말한다 . 아래 cyclic_swap 함수를 호출하여 main() 에서 a, b, c 값을 출력하는 프로그램
 작성일시: 2020.04.24
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

void cyclic_swap(int *a, int *b, int *c);

int main() {
	int a, b, c;
	printf("Enter three integers a, b, c.\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Before cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	cyclic_swap(&a, &b, &c); // a, b, c의 주소를 넘겨준다.
	printf("After cyclic swap, a = %d, b = %d, c = %d.\n", a, b, c);
	system("pause");
	return 0;
}


void cyclic_swap(int *a, int *b, int *c)
{
	const int old_a = *a; // a를 c로 덮어쓰기 전에 저장해둔다.
	*a = *c; // a의 주소에 c의 주소에 있는 값을 쓴다.
	*c = *b; // c의 주소에 b의 주소에 있는 값을 쓴다.
	*b = old_a; // b의 주소에 이전 a를 쓴다.
}

