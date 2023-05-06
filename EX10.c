#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{

    for (int i = 0; i < 10; i += 2)

    printf("% d\n", i);

}
/*
0
2
4
6
8
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
int i = 0x10;

for (; i; i >>= 1)

printf(“hello”);

결과:
hellohellohellohellohello
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
int x, y;

for (x = 0; x < 3; x++)

    for (y = 2; y >= 0; y--)
    printf(“ * ”);

결과 :
*********
*/