/****************************
 프로그램명: practice04.c
 설명: 연습문제 04; 입력 문장을 배열에 저장하고 해당 문자에 모음 a,e,i,o,u 이 몇 번 나오는지 출력하는 프로그램
 작성일시: 2020.05.08
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

int count_vowel(char* arr, int length);

int main() {
	char ch, str[100]; // 입력 글자와 입력된 글자들을 저장하는 변수 
	int	i = 0;
	printf("Enter a sample sentence.\n");
	while ((ch = getchar()) != '\n') { // 개행 문자를 만나기 전까지 입력 받는다. 
		str[i] = ch;
		i++;
	}
	printf("Vowels appear %d times.\n", count_vowel(str, i));
	system("pause");
	return 0;
}

// arr의 인덱스 0부터 length-1까지 모음의 개수를 샌다. 소문자만 처리한다. 
// 포인터 산술 연산을 사용 
int count_vowel(char* arr, int length)
{
	int count = 0;
	for(int i=0;i<length;i++)
	{
		char letter = *(arr+i);
		if(letter == 'a' || letter == 'e' || letter=='i' || letter=='o' || letter == 'u')
		{
			count++;
		}
	}
	return count;
}
