#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        int credits = 4 * X + 2 * Y;
        printf("%d\n", credits);
    }

    return 0;
}

