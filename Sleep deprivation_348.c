#include <stdio.h>

// Function to determine if Chef is sleep-deprived or not
char* check_sleep_deprivation(int X) {
    return (X < 7) ? "YES" : "NO";
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input the number of hours Chef slept
        int X;
        scanf("%d", &X);
        
        // Check and print if Chef is sleep-deprived or not
        char* result = check_sleep_deprivation(X);
        printf("%s\n", result);
    }

    return 0;
}