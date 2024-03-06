#include <stdio.h>

int main() {
    char luckyLetter;
    char S[11];
    scanf("%s", S);
    luckyLetter = S[6];

    printf("%c\n", luckyLetter);

    return 0;
}