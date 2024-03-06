#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        int totalWords = N * M;
        printf("%d\n", totalWords);
    }

    return 0;
}