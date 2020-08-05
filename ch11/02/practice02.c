/****************************
 프로그램명: practice02.c
 설명: 연습문제 02; first.txt 와 second.txt 파일을 열고 first.txt 파일의 끝에 second.txt 를 이어 붙여 새로운 파일인 merge.txt 에 저장하는 프로그램
 작성일시: 2020.06.12 
 작성자: 양현서
*****************************/

#include <stdio.h>
#include <stdlib.h>

// 에러가 발생했을 때 에러를 출력하고 종료 
void error(char * msg) {
    printf("%s", msg);
    exit(-1);
}

int main() {
    char buf[1024];
    FILE * fp1, *fp2, *outFp;

    fp1 = fopen("first.txt", "r");
    if(!fp1) { // 파일이 없다 
        error("File first.txt not found\n");
    }

    fp2 = fopen("second.txt", "r");
    if(!fp2) { // 파일이 없다
		fclose(fp1); 
        error("File second.txt not found\n");
    }
	
	// 결과를 적을 파일 
    outFp = fopen("merge.txt", "w");
    if(!outFp) {
        error("File merge.txt could not be created\n");
    }

	// 읽은 바이트 수 저장 
    ssize_t read = 0;
    while((read = fread(buf, sizeof(char), sizeof(buf), fp1)) > 0) {
        fwrite(buf, sizeof(char), read, outFp);
    }
    fclose(fp1);

    while((read = fread(buf, sizeof(char), sizeof(buf), fp2)) > 0) {
        fwrite(buf, sizeof(char), read, outFp);
    }
    
    // 반드시 닫아준다 
    fclose(fp2);
    fclose(outFp);
    return 0;
}




