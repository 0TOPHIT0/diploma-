#include <stdio.h>

int main() {
    printf("Enter an integer: ");
    int x;
    scanf("%d", &x);
    int pro = 1;

    for (int i = 1; i <= x; i++) {
        pro *= i;
    }

    printf("Product of integers from 1 to %d: %d\n", x, pro);
    return 0;
}
