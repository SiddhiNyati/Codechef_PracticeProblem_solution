#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);
        int total_distance = 2 * X * 5;

        printf("%d\n", total_distance);
    }

    return 0;
}