/****************************
 프로그램명: project01.c
 설명: 과제 1; 20 자 이내의 단어나 문장을 입력받고 회문인지 판단하는 프로그램
 완성일시: 2020.06.21
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// 회문인지 판단하는 함수. 스페이스는 무시한다. 
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
    char buf[32]; // 20자보다 큰 버퍼 
    while(1) {
        printf("단어나 문장을 입력 : ");
        fgets(buf, 32, stdin);
        if(strcmp(buf, "quit\n") == 0) {
            printf("프로그램 종료\n");
            break;
        }
        if(isPalindrome(buf)) {
            printf("회문이 맞음\n");
        } else {
            printf("회문이 아님\n");
        }
    }
    return 0;
}
