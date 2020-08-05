/****************************
 프로그램명: practice01.c
 설명: 연습문제 01; 단어 두 개를 gets 로 입력받아 fputs 로 텍스트 파일에 저장하는 프로그램 
 작성일시: 2020.06.12 
 작성자: 양현서
*****************************/

#include <stdio.h>

int main() {
    char buf[100]; // 단어 두 개를 입력받을 공간 
    FILE * fp = fopen("out.txt", "wt");
    printf("단어 1 입력 :");
    gets(buf); // 단어를 입력받는다. fgets(buf, 100, stdin)이 더 안전 
    fputs(buf, fp);
    fputs("\n", fp); // 줄바꿈 출력.
	printf("단어 2 입력: "); 
    gets(buf);
    fputs(buf, fp);
    fclose(fp); // 파일을 반드시 닫아 준다 
    return 0;
}
