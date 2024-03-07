#include <stdio.h>

// Function to determine the winner of the auction
void determine_winner(int a, int b, int c) {
    if (a > b && a > c) {
        printf("Alice\n");
    } else if (b > a && b > c) {
        printf("Bob\n");
    } else {
        printf("Charlie\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        determine_winner(a, b, c);
    }

    return 0;
}
