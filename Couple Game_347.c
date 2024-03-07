#include <stdio.h>

// Function to calculate the minimum number of boys who cannot participate
int min_boys_not_participating(int G, int B) {
    return B - G;
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input values for G and B
        int G, B;
        scanf("%d %d", &G, &B);
        
        // Calculate and print the minimum number of boys who cannot participate
        int result = min_boys_not_participating(G, B);
        printf("%d\n", result);
    }

    return 0;
}