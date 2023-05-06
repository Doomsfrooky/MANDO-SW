#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{

	int x, y, z;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	printf("제일 작은 정수는 ");

	if (x < y) {
		if (x < z)
			printf("%d", x);
		else
			printf("%d", z);
	}
	else {
		if (y < z)
			printf("%d", y);
		else
			printf("%d", z);
	}
	printf("입니다\n");

	return 0;
}