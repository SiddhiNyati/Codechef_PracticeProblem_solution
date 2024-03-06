#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int unattemptedProblems = X - Y;

    printf("%d\n", unattemptedProblems);

    return 0;
}