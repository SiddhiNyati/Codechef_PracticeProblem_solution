#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        if (X > 100) {
            printf("%d\n", X - 10);
        } else {
            printf("%d\n", X);
        }
    }

    return 0;
}