/****************************
 ���α׷���: project02.c
 ����: ���� 2; ���簢�� ������ ����� �ԷµǾ� �ִ� matrix.txt ������ ����
			   ���ο� �ۼ��� ����� ����, ����, ��ü�� ���� ���Ͽ� result.txt�� �����ϴ� ���α׷� 
 �ϼ��Ͻ�: 2020.06.21
 �ۼ���: ������
*****************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// ������ ����ϰ� �����Ѵ�. 
void error(char * msg) {
    printf("%s", msg);
    exit(0);
}


int main() {
    FILE * fp = fopen("matrix.txt", "rt"); // read, text mode
    if(!fp) {
        error("Failed to open matrix.txt\n");
    }

    // compute the first line's length before allocation
    int c;
    int lineLength = 0;
    do {
        c= fgetc(fp);
        if(c == '\n' || c == EOF) // c == EOF unlikely to happen
            break;
        lineLength++;
    } while(c != EOF);
    // printf("Line length: %d\n", lineLength);

    lineLength++; // include null character
    char * firstLine = malloc(sizeof(char) * lineLength); // allocate buffer
    // reset file position
    rewind(fp);
    // read one line for probe
    fgets(firstLine, lineLength, fp);
    firstLine[lineLength - 1] = '\0';
    // printf("firstline:%s", firstLine);

    // count the number of numbers in a line
    char * iter = firstLine;
    int numPerRow = 0;
    while(*iter) {
        if(isdigit(*iter) || (*iter == '-' || *iter == '+') && isdigit(*(iter+1))) { // is a number?
            int val = (int) strtol(iter, &iter, 10); // return value ignored
            numPerRow++;
        } else {
            iter++;	// skip
        }
    }
    // printf("Number per row: %d\n", numPerRow);

    free(firstLine);
    firstLine = NULL;
    const int bytePerRow = sizeof(int) * (numPerRow+1); // include the sum result
    // allocate buffer for reading
    int ** matrix = NULL; //malloc(sizeof(int *));

    // matrix[0] = NULL; //malloc(bytePerRow);

    // read numbers
    rewind(fp);
    int numLines = 0;
    int readcount = 0;
    for(; ; numLines++) {
        matrix = realloc(matrix,  sizeof(int *) * (numLines+2)); // lines plus sum result
        matrix[numLines] = malloc(bytePerRow);
        memset(matrix[numLines], 0, bytePerRow); // valgrind is angry when I omit this line
        for(int j = 0; j < numPerRow; j++) {
            int num = 0;
            readcount++;
            if(fscanf(fp,"%d", &num) == EOF) {
                // printf("Last number tried: %d, readcount: %d\n", num, readcount);
                goto readdone;
            }
            matrix[numLines][j] = num;
        }
    }
    matrix[numLines] = malloc(bytePerRow);
readdone:
    fclose(fp);
    // printf("Read done\n");
    // compute the sum
    for(int i = 0; i < numLines; i++) {
        int sum = 0;
        for(int j = 0; j < numPerRow; j++) {
            // printf("(%d, %d)=%d\n", i, j, matrix[i][j]);
            sum += matrix[i][j];
            matrix[numLines][j] += matrix[i][j];
        }
        matrix[i][numPerRow] = sum;
    }
    // rightbottom_most value
    int sum = 0;
    for(int j = 0; j < numPerRow; j++) {
        sum += matrix[numLines][j];
    }
    matrix[numLines][numPerRow] = sum;

    // write the result matrix to file
    FILE * resultFp = fopen("result.txt", "wt"); // write, text
    for(int i = 0; i <= numLines; i++) {
        for(int j = 0; j <= numPerRow; j++) {
            // printf("%d %d\n", i, j);
            fprintf(resultFp, "%d", matrix[i][j]);
            if(j != numPerRow)
                fprintf(resultFp, " ");
            else if(i != numLines)
                fprintf(resultFp, "\n");
        }
        free(matrix[i]);
        matrix[i] = NULL;
    }
    free(matrix);
    fclose(resultFp);
    return 0;
}
