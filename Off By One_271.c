#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    // Calculate A + B and append 1 to the result
    int result = (A + B) * 10 + 1;

    printf("%d\n", result);

    return 0;
}
