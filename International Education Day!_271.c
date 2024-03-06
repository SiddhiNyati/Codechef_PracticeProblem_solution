#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // Calculate the total sales for Chef and Chefina
    int chef_sales = A * C;
    int chefina_sales = B * C;

    // Determine the maximum sales among Chef and Chefina
    int max_sales = (chef_sales > chefina_sales) ? chef_sales : chefina_sales;

    printf("%d\n", max_sales);

    return 0;
}