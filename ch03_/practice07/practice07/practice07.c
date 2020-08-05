#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int hour, minute;
	bool isLate;
	printf("출근 시간의 시를 입력:");
	scanf_s("%d", &hour);
	printf("출근 시간의 분을 입력:");
	scanf_s("%d", &minute);
	
	if (hour == 9) {
		if (minute > 30) {
			isLate = true;
		}
		else {
			isLate = false;
		}
	}
	else if (hour < 9) {
		isLate = false;
	}
	else {
		isLate = true;
	}
	if (isLate) {
		printf("지각입니다.\n");
	}
	else {
		printf("정시 출근입니다.\n");
	}
	system("pause");
	return 0;
}