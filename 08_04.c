#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int main() {
    printf("문자를 입력하세요: ");
    char ch;

    scanf("%c", &ch);

    if (check_alpha(ch) == 1)
        printf("%c는 알파벳 문자입니다.", ch);
    else
        printf("%c는 알파벳 문자가 아닙니다.", ch);

}