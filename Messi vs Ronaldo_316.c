#include <stdio.h>

int main() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);

    int messiPoints = A * 2 + B;
    int ronaldoPoints = X * 2 + Y;

    if (messiPoints > ronaldoPoints) {
        printf("Messi\n");
    } else if (ronaldoPoints > messiPoints) {
        printf("Ronaldo\n");
    } else {
        printf("Equal\n");
    }

    return 0;
}
