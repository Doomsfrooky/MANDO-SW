#include <stdio.h>

int main(void){

	int y = 0;

for (int i = 10; i <= 30; i++) {

	for (int j = 0; j <= 5; j++) {

		y += i + j;

	}

}

	printf("´ä : %d", y);

	return 0;

}
