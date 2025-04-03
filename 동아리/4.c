#include <stdio.h>

int main() {
    int size, sum=0;
    scanf("%d", &size);

    for(int i = 0; i < size; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("%d",sum/size);

    return 0;
}