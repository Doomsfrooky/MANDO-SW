#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    }
    return 0;
}

int main() {
    printf("���ڸ� �Է��ϼ���: ");
    char ch;

    scanf("%c", &ch);

    if (check_alpha(ch) == 1)
        printf("%c�� ���ĺ� �����Դϴ�.", ch);
    else
        printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", ch);

}