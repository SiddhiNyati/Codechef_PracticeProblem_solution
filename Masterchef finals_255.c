#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        printf("%s\n", X <= 10 ? "YES" : "NO");
    }

    return 0;
}