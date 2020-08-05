/****************************
 프로그램명: practice03.c
 설명: 연습문제 03; 현재의 소스코드 파일을 읽어서 소괄호 (, ) 의 개수와 중괄호 {, } 의 개수를 출력하고 여는 괄호와 닫는 괄호 수의 수가 일치하는지 확인하게 도와주는 프로그램 
 작성일시: 2020.06.12 
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <string.h>

int main() {
    FILE * fp = fopen(__FILE__, "r"); // 현재 파일의 경로를 알려주는 매크로 
    int lbrace = 0; // { 개수 
    int rbrace = 0; // } 개수 
    int lParan = 0; // ( 개수 
    int rParan = 0; // ) 개수 
    char buf [100]; // 버퍼
	
	// 개수를 세는 루프 
    while(fgets(buf, 100, fp) != NULL) {
        int len = strlen(buf);
        for(int i = 0; i< len; i++) {
            switch(buf[i]) {
                case '(': lParan++; break;
                case ')': rParan++; break;
                case '{': lbrace++; break;
                case '}': rbrace++; break;
                default: break;
            }
        }
    }
    // 결과 출력 
    printf("left parenthesis : %d, right parenthesis : %d\n", lParan, rParan);
    printf("left brace : %d, right brace : %d\n", lbrace, rbrace);
    fclose(fp); // 파일을 닫는다. 
    return 0;
}

