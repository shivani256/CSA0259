#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    for ( ; num != 0; num /= 10) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
    }

    printf("The reverse of the given number is: %d\n", reverse);

    return 0;
}

