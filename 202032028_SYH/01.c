#include <stdio.h>
int main(void)
{

        int num, i;

        printf("������ �Է��Ͻÿ�: ");
        scanf_s("%d", &num);
        printf("���: ");

        for (i = 1; i <= num; i++) {

            if (num % i == 0)

                printf("%d ", i);

        }

        return 0;

}