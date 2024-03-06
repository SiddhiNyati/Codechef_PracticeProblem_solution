#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int runsNeeded = X - Y;
        printf("%d\n", runsNeeded);
    }

    return 0;
}
