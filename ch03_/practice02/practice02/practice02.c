#include <stdio.h> // scanf, printf
#include <stdlib.h> // system
#include <stdbool.h> // bool, true, false

int main() {
	int input; // ����� �Է� ����
	bool flag = true; // ��� ��� �������� �Ǵ��ϴ� ����
	while (flag) // flag�� false�� �Ǳ� ������ �ݺ�
	{
		printf("��� �Է�:");
		scanf_s("%d", &input);
		if (input < 0) {
			printf("����� �Է��ϼ���.\n");
			continue;
		}
		if (input == 0) {
			flag = false;
		}
		else {
			printf("%d\n", input*input);
		}
	}
	printf("���α׷� ����...\n");
	system("pause");
	return 0;
}