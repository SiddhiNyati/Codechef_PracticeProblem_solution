#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);

        int totalSize = X + (2 * Y);

        if (totalSize <= N) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
