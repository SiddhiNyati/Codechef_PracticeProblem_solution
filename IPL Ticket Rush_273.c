#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        int remainingStudents = (N > M) ? (N - M) : 0;

        printf("%d\n", remainingStudents);
    }

    return 0;
}
