#include <stdio.h>

int main () {
    int count = 0;

    for (int i = 1; i < 101; i++) {
        if(i%3==0) {count++;}
    }

    printf("%d", count);
    return 0;
}