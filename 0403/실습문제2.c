#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int number;
	bool flag = true;
	printf("����� �Է��Ͻÿ� : ");
	scanf("%d", &number);
	while(flag) {
		if(number % 3 == 0) {
			printf("3�� ����Դϴ�.\n");
		} else {
			printf("3�� ����� �ƴմϴ�.\n"); 
		}		
	}
	system("pause");
	return 0;
}

