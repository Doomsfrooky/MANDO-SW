#include <stdio.h>
int main(void)
{

        int num, i;

        printf("정수를 입력하시오: ");
        scanf_s("%d", &num);
        printf("약수: ");

        for (i = 1; i <= num; i++) {

            if (num % i == 0)

                printf("%d ", i);

        }

        return 0;

}