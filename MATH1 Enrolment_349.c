#include <stdio.h>

// Function to calculate the minimum number of extra seats required
int min_extra_seats(int X, int Y) {
    return (Y <= X) ? 0 : Y - X;
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input the current number of seats and number of interested students
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        // Calculate and print the minimum number of extra seats required
        int result = min_extra_seats(X, Y);
        printf("%d\n", result);
    }

    return 0;
}