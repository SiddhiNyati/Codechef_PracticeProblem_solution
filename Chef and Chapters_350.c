#include <stdio.h>

// Function to calculate the total number of chapters Chef has to study
int total_chapters(int X, int Y, int Z) {
    return X * Y * Z;
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input the values for X, Y, and Z
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        
        // Calculate and print the total number of chapters Chef has to study
        int result = total_chapters(X, Y, Z);
        printf("%d\n", result);
    }

    return 0;
}