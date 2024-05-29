#include <stdio.h>

int main() {
    char carac;

    for (carac = 'a'; carac <= 'z'; carac++) {
        printf("%c   ", carac);
    }

    printf("\n");

    return 0;
}