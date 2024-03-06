#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int extra_chairs = (X > Y) ? (X - Y) : 0;
        printf("%d\n", extra_chairs);
    }

    return 0;
}