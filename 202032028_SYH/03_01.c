#include <stdio.h>

int main(void) {

	int x = 0;

	for (int i = 1; i <= 30; i++) {

		x += i * i + 1;

	}

	printf("´ä : %d\n", x);

	return 0;

}