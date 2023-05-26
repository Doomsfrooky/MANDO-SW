#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice() {
    return 1 + rand() % 6;
}

int main() {
    srand(time(NULL));

    int com_1 = dice(), com_2 = dice(), com_3 = dice(), com_sum = com_1 + com_2 + com_3;
    int user_1 = dice(), user_2 = dice(), user_3 = dice(), user_sum = user_1 + user_2 + user_3;

    printf("사용자 주사위 = (%d, %d, %d) = %d\n", user_1, user_2, user_3, user_sum);
    printf("컴퓨터 주사위 = (%d, %d, %d) = %d\n", com_1, com_2, com_3, com_sum);
    if (user_sum > com_sum)
        printf("사용자 승리\n");
    else
        printf("컴퓨터 승리\n");

    return 0;
}