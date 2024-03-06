#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int minimum_investment = X - Y;
        printf("%d\n", minimum_investment > 0 ? minimum_investment : 0);
    }

    return 0;
}