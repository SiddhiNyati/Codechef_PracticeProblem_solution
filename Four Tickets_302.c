#include <stdio.h>

// Function to determine whether friends can attend the concert
char* attend_concert(int ticket_cost) {
    if (ticket_cost * 4 <= 1000) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; i++) {
        int X;
        scanf("%d", &X);

        // Output the result for the current test case
        char* result = attend_concert(X);
        printf("%s\n", result);
    }

    return 0;
}
