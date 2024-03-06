#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);
        int maxBurgers = A < B ? A : B;
        printf("%d\n", maxBurgers);
    }

    return 0;
}