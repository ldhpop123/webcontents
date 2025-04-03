#include <stdio.h>

int main() {
    int target;
    scanf("%d", &target);
    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d \n", target, i, i*target);
    }

    return 0;
}