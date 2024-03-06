#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        // Calculate the number of hours Chef works
        int hours = (Y - X + 12) % 12;

        printf("%d\n", hours);
    }

    return 0;
}
