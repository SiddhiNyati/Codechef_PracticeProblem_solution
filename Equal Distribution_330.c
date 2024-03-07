#include <stdio.h>

// Function to determine if chocolates can be distributed equally
void distribute_chocolates(int a, int b) {
    if ((a + b) % 2 == 0 && (a - b) % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        distribute_chocolates(a, b);
    }

    return 0;
}