/****************************
 ���α׷���: practice01.c
 ����: �������� 01; �ܾ� �� ���� gets �� �Է¹޾� fputs �� �ؽ�Ʈ ���Ͽ� �����ϴ� ���α׷� 
 �ۼ��Ͻ�: 2020.06.12 
 �ۼ���: ������
*****************************/

#include <stdio.h>

int main() {
    char buf[100]; // �ܾ� �� ���� �Է¹��� ���� 
    FILE * fp = fopen("out.txt", "wt");
    printf("�ܾ� 1 �Է� :");
    gets(buf); // �ܾ �Է¹޴´�. fgets(buf, 100, stdin)�� �� ���� 
    fputs(buf, fp);
    fputs("\n", fp); // �ٹٲ� ���.
	printf("�ܾ� 2 �Է�: "); 
    gets(buf);
    fputs(buf, fp);
    fclose(fp); // ������ �ݵ�� �ݾ� �ش� 
    return 0;
}
