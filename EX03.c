#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

        printf("% x\n", 0x20 << 2);

        return 0;

    }

/*출력 결과 :
80
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);
	printf("%d\n", c);
	return 0;

}

출력 결과 : 
1
*/