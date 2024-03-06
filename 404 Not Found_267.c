#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Check if the response code is 404
    if (X == 404) {
        printf("NOT FOUND\n");
    } else {
        printf("FOUND\n");
    }

    return 0;
}