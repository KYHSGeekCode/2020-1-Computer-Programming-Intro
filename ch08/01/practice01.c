/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; main() 에서 int 타입의 num, *p, **q 를 선언하고 아래와 같은 두가지 방식으로 출력하는 프로그램
	   ▶p 를 사용하여 num 에 5 를 저장하고 q 를 사용하여 num 에 저장된 데이터를 출력
	   ▶q 를 사용하여 num 에 10 을 저장하고 p 를 사용하여 num 에 저장된 데이터를 출력
 작성일시: 2020.05.08 
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, *p, **q;
	p = &num;			// *p == num
	q = &p;				// *q == p, **q == *(*q) == *p == num
	*p = 5;				// num=5 또는 **q=5와 같다. 
	printf("%d\n", **q);
	**q = 10;			// num=10 또는 *p = 10과 같다. 
	printf("%d\n", *p);
	system("pause");
	return 0;
}
