#include <stdio.h> 

int main(void) {

	int x, y;

	printf("정수를 입력하시오: ");

	scanf_s("%d", &x);

	do {

		y = x % 10;
		x /= 10;
		printf("%d", y);

	} while (x != 0);

	return 0;

}