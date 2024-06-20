#include <stdio.h>

int main() {
    int x[3];
    int i, j, temp;

    printf("Enter three numbers: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

   printf("the largest number is  %d",x[2]);

    return 0;
}
