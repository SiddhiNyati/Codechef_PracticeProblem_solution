#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        long long totalPrize = 10LL * X + 90LL * Y;
        printf("%lld\n", totalPrize);
    }

    return 0;
}