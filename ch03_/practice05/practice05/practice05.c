#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
	char gender;
	int age;
	double bonus = 0;
	printf("성별 입력: (m/w):");
	scanf_s(" %c", &gender);
	printf("나이 입력: ");
	scanf_s(" %d", &age);
	if (gender == 'w' || gender == 'W') {
		if (age <= 20) {
			// 적립금의 1.5배 적립
			bonus = 1.5;
		}
		else if (age <= 30) {
			// 적립금의 2배 적립
			bonus = 2;
		}	
		else {
			// 적립금의 3배 적립
			bonus = 3;
		}
	}
	else {
		// 적립금의 2배 적립
		bonus = 2;
	}
	printf("적립금의 %.1f배를 적립합니다. 즉 적립금의 %.1f배만큼 추가적립합니다.\n", bonus, bonus-1);

	printf("프로그램을 종료합니다. \n");
	system("pause");
	return 0;
}