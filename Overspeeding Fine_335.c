#include <stdio.h>

// Function to determine the fine paid by Chef
void calculate_fine(int speed) {
    if (speed <= 70) {
        printf("0\n");
    } else if (speed > 70 && speed <= 100) {
        printf("500\n");
    } else {
        printf("2000\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int speed;
        scanf("%d", &speed);
        calculate_fine(speed);
    }

    return 0;
}