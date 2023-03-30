#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int lower, upper, i;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

int isArmstrong(int num) {
    int temp, digits = 0, sum = 0;

    temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if (num == sum) {
        return 1;
    } else {
        return 0;
    }
}

