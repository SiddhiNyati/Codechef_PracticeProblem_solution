#include <stdio.h>

// Function to calculate the maximum number of chess games Chef can play
int max_chess_games(int hours) {
    return hours * 3;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int hours;
        scanf("%d", &hours);
        printf("%d\n", max_chess_games(hours));
    }

    return 0;
}