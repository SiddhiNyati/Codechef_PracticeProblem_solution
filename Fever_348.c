#include <stdio.h>

// Function to determine if Chef has fever or not
char* check_fever(int X) {
    return (X > 98) ? "YES" : "NO";
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input the body temperature of Chef
        int X;
        scanf("%d", &X);
        
        // Check and print if Chef has fever or not
        char* result = check_fever(X);
        printf("%s\n", result);
    }

    return 0;
}
