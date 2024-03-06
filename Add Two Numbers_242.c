#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int sum = A + B;

        printf("%d\n", sum);
    }

    return 0;
}