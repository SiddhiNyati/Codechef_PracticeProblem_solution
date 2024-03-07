#include <stdio.h>

// Function to check if the government kept the AQI within limits
char* check_aqi_limits(int X) {
    return (X < 100) ? "YES" : "NO";
}

int main() {
    // Input the AQI value measured by Chef
    int X;
    scanf("%d", &X);
    
    // Check and print whether the government kept the AQI within limits
    char* result = check_aqi_limits(X);
    printf("%s\n", result);

    return 0;
}