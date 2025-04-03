#include <stdio.h>

int main() {
    char str;
    scanf("%c", &str);

    if (str == 'a' || str == 'A') {printf("Apple");}
    if (str == 'b' || str == 'B') {printf("Banana");}
    if (str == 'c' || str == 'C') {printf("Cherry");}
    if (str == 'd' || str == 'D') {printf("Dragon fruit");}

    return 0;
}