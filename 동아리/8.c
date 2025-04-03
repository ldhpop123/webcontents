#include <stdio.h>

int main() {
    int repeat;
    scanf("%d", &repeat);
    for(int i = 0; i < repeat; i++) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}