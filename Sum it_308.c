#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A, B, C;
        scanf("%d %d %d", &A, &B, &C);

        if (A + B == C) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}