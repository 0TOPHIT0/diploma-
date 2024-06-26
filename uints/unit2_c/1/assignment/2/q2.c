#include <stdio.h>

int main() {
    char x;
    int found = 0;
    char z[] = {'a', 'o', 'i', 'u', 'e'};

    printf("Enter an alphabet: ");
    scanf("%c", &x);

    for (int i = 0; i < 5; i++) {
        if (z[i] == x) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("%c is a vowel\n", x);
    else
        printf("%c is a consonant\n", x);

    return 0;
}
