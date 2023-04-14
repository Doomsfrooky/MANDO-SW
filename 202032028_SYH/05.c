#include<stdio.h>
int main(void){

    int age;
    double height;

    printf("키를 입력하시오(cm) : ");
    scanf("%lf",height);

    printf("나이를 입력하시오 : ");
    scanf("%d", age);

    if (height >= 140 && age >= 10) {
        printf("타도 좋습니다.\n");
    }
    else
    printf("죄송합니다.\n");

    return 0;
    
}