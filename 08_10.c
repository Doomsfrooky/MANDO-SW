#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint() {
    return 10 + rand() % 81;
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%d ", randint());
    }

    return 0;

}