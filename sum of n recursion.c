#include <stdio.h>

int sum(int n);

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is %d\n", n, sum(n));

    return 0;
}

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n-1);
    }
}

