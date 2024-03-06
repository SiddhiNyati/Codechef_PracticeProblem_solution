#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Check if the page is dedicated to the sports section
    if (X >= 8 && X <= 10) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}