#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int weeklyCost = 6 * X + Y;

    printf("%d\n", weeklyCost);

    return 0;
}