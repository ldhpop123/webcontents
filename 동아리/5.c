#include <stdio.h>

int main() {
    int target;
    scanf("%d", &target);

    int x;
    scanf("%d", &x);
    if (target % x == 0) {
        printf("true");
    } else {
        printf("false");
    }

    return 0;
}