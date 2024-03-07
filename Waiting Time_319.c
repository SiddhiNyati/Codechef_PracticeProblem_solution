#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int K, X;
        scanf("%d %d", &K, &X);

        int remainingDays = 7 * K - X;

        printf("%d\n", remainingDays);
    }

    return 0;
}