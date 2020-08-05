/****************************
 ���α׷���: project01.c
 ����: ���� 1; 20 �� �̳��� �ܾ ������ �Է¹ް� ȸ������ �Ǵ��ϴ� ���α׷�
 �ϼ��Ͻ�: 2020.06.21
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// ȸ������ �Ǵ��ϴ� �Լ�. �����̽��� �����Ѵ�. 
int isPalindrome(char * word) {
    int x = 0;
    int len = strlen(word);
    int y = len - 1;
    while(x <= y) {
        // printf("%d'%c' %d'%c'\n", x, word[x], y, word[y]);
        
		// ignore space
        while(x < len - 1 && isspace(word[x]))
            x++;
        
		// ignore space
        while(y > 0 && isspace(word[y]))
            y--;
            
        //check palindrome
        if(word[x] != word[y]) {
            return 0;				// not a palindrome
        }
        x++;
        y--;
    }
    return 1;	// is a palindrome
}

int main() {
    char buf[32]; // 20�ں��� ū ���� 
    while(1) {
        printf("�ܾ ������ �Է� : ");
        fgets(buf, 32, stdin);
        if(strcmp(buf, "quit\n") == 0) {
            printf("���α׷� ����\n");
            break;
        }
        if(isPalindrome(buf)) {
            printf("ȸ���� ����\n");
        } else {
            printf("ȸ���� �ƴ�\n");
        }
    }
    return 0;
}
