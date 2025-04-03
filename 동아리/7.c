#include <stdio.h>

int main() {
    int max = 0;

    for (int i = 0; i < 10; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp > max) {max = temp;}
    }

    printf("%d", max);
    return 0;
}