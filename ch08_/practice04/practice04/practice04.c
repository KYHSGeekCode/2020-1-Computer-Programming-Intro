#include <stdio.h>
#include <stdlib.h>

int count_vowel(char* arr, int length);
int main() {
	char ch, str[100];
	int	i = 0;
	printf("Enter a sample sentence.\n");
	while ((ch = getchar()) != '\n') {
		str[i] = ch;
		i++;
	}
	printf("Vowels appear %d times.\n", count_vowel(str, i));
	system("pause");
	return 0;
}

int count_vowel(char* arr, int length)
{
	int count = 0;
	for(int i=0;i<length;i++)
	{
		char letter = arr[i];
		if(letter == 'a' || letter == 'e' || letter=='i' || letter=='o' || letter == 'u')
		{
			count++;
		}
	}
	return count;
}