#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int clearDays = 7 - X - Y;

    printf("%d\n", clearDays);

    return 0;
}