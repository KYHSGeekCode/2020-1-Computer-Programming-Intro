#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	char gender;
	int age;
	double bonus = 0;
	printf("���� �Է�: (m/w):");
	scanf_s(" %c", &gender);
	printf("���� �Է�: ");
	scanf_s(" %d", &age);
	if (gender == 'w' || gender == 'W') {
		if (age <= 20) {
			// �������� 1.5�� ����
			bonus = 1.5;
		}
		else if (age <= 30) {
			// �������� 2�� ����
			bonus = 2;
		}	
		else {
			// �������� 3�� ����
			bonus = 3;
		}
	}
	else {
		// �������� 2�� ����
		bonus = 2;
	}
	printf("�������� %.1f�踦 �����մϴ�. �� �������� %.1f�踸ŭ �߰������մϴ�.\n", bonus, bonus-1);

	printf("���α׷��� �����մϴ�. \n");
	system("pause");
	return 0;
}