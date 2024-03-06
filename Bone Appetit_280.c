#include <stdio.h>

int main() {
    int N, M, X, Y;
    scanf("%d %d", &N, &M);
    scanf("%d %d", &X, &Y);

    int totalTreats = (N * X) + (M * Y);
    printf("%d\n", totalTreats);

    return 0;
}