/****************************
 ���α׷���: practice03.c
 ����: �������� 03; ������ �ҽ��ڵ� ������ �о �Ұ�ȣ (, ) �� ������ �߰�ȣ {, } �� ������ ����ϰ� ���� ��ȣ�� �ݴ� ��ȣ ���� ���� ��ġ�ϴ��� Ȯ���ϰ� �����ִ� ���α׷� 
 �ۼ��Ͻ�: 2020.06.12 
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <string.h>

int main() {
    FILE * fp = fopen(__FILE__, "r"); // ���� ������ ��θ� �˷��ִ� ��ũ�� 
    int lbrace = 0; // { ���� 
    int rbrace = 0; // } ���� 
    int lParan = 0; // ( ���� 
    int rParan = 0; // ) ���� 
    char buf [100]; // ����
	
	// ������ ���� ���� 
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
    // ��� ��� 
    printf("left parenthesis : %d, right parenthesis : %d\n", lParan, rParan);
    printf("left brace : %d, right brace : %d\n", lbrace, rbrace);
    fclose(fp); // ������ �ݴ´�. 
    return 0;
}

