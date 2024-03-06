#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        // Calculate the remaining number of donations needed
        int remaining_donations = N - X;

        printf("%d\n", remaining_donations);
    }

    return 0;
}