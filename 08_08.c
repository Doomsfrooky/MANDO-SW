#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_tax(int income) {
    int tax;

    if (income > 1000)
        return (int)(1000 * 0.08 + (income - 1000) * 0.1);
    else
        return (int)(income * 0.08);
}

int main() {
    int income;

    printf("소득을 입력하세요(만원): ");
    scanf("%d", &income);

    printf("소득세는 %d만원입니다.", get_tax(income));

    return 0;
}