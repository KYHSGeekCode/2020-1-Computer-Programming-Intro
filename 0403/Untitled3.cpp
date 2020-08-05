#include <stdio.h>
#include <stdlib.h>

int main() {
	for(int line=0; line<5; line++) {
		for(int i=0; i<5-line; i++) {
			printf(" ");
		}
		for(int j=1; j<line+2; j++)
			printf("%d", j);
		printf("\n");
	} 
	system("pause");
	return 0;
}
