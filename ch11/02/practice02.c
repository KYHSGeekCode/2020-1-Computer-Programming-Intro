/****************************
 ���α׷���: practice02.c
 ����: �������� 02; first.txt �� second.txt ������ ���� first.txt ������ ���� second.txt �� �̾� �ٿ� ���ο� ������ merge.txt �� �����ϴ� ���α׷�
 �ۼ��Ͻ�: 2020.06.12 
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>

// ������ �߻����� �� ������ ����ϰ� ���� 
void error(char * msg) {
    printf("%s", msg);
    exit(-1);
}

int main() {
    char buf[1024];
    FILE * fp1, *fp2, *outFp;

    fp1 = fopen("first.txt", "r");
    if(!fp1) { // ������ ���� 
        error("File first.txt not found\n");
    }

    fp2 = fopen("second.txt", "r");
    if(!fp2) { // ������ ����
		fclose(fp1); 
        error("File second.txt not found\n");
    }
	
	// ����� ���� ���� 
    outFp = fopen("merge.txt", "w");
    if(!outFp) {
        error("File merge.txt could not be created\n");
    }

	// ���� ����Ʈ �� ���� 
    ssize_t read = 0;
    while((read = fread(buf, sizeof(char), sizeof(buf), fp1)) > 0) {
        fwrite(buf, sizeof(char), read, outFp);
    }
    fclose(fp1);

    while((read = fread(buf, sizeof(char), sizeof(buf), fp2)) > 0) {
        fwrite(buf, sizeof(char), read, outFp);
    }
    
    // �ݵ�� �ݾ��ش� 
    fclose(fp2);
    fclose(outFp);
    return 0;
}




