#include <stdio.h>

// Function to calculate the liters of water required by the water cooler
int water_requirement(int N) {
    return 2 * N;
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        // Input the value for N
        int N;
        scanf("%d", &N);
        
        // Calculate and print the liters of water required by the water cooler
        int result = water_requirement(N);
        printf("%d\n", result);
    }

    return 0;
}
