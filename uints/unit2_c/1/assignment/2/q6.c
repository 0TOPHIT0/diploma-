#include <stdio.h>

int main() {
    printf("Enter an integer: ");
    int x, sum;
    sum = 0;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        sum += i;
    }

    printf("Sum of integers from 1 to %d: %d\n", x, sum);
    return 0;
}
