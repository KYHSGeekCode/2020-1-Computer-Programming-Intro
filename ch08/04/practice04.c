/****************************
 ���α׷���: practice04.c
 ����: �������� 04; �Է� ������ �迭�� �����ϰ� �ش� ���ڿ� ���� a,e,i,o,u �� �� �� �������� ����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.05.08
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

int count_vowel(char* arr, int length);

int main() {
	char ch, str[100]; // �Է� ���ڿ� �Էµ� ���ڵ��� �����ϴ� ���� 
	int	i = 0;
	printf("Enter a sample sentence.\n");
	while ((ch = getchar()) != '\n') { // ���� ���ڸ� ������ ������ �Է� �޴´�. 
		str[i] = ch;
		i++;
	}
	printf("Vowels appear %d times.\n", count_vowel(str, i));
	system("pause");
	return 0;
}

// arr�� �ε��� 0���� length-1���� ������ ������ ����. �ҹ��ڸ� ó���Ѵ�. 
// ������ ��� ������ ��� 
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
