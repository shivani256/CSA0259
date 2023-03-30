#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

bool checkSumOfPrimes(int num) {
    for(int i = 2; i <= num/2; i++) {
        if(isPrime(i)) {
            if(isPrime(num-i)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(checkSumOfPrimes(num)) {
        printf("%d can be expressed as the sum of two prime numbers.\n", num);
    }
    else {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
    return 0;
}

