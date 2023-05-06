#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

    int num, tot = 0;

    do {

        printf("정수 입력 : ");

        scanf("% d", &num);

        tot += num;

    } while (num != 0);

    printf("total = % d\n", tot);

}

// 입력 값이 0이 아닐 때 까지 정수를 입력받아서 모든 값을 더하는 프로그램이다.