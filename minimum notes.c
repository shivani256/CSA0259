#include <stdio.h>

int main() {
    int amount, notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes500 = amount / 500;
    amount = amount % 500;

    notes100 = amount / 100;
    amount = amount % 100;

    notes50 = amount / 50;
    amount = amount % 50;

    notes20 = amount / 20;
    amount = amount % 20;

    notes10 = amount / 10;
    amount = amount % 10;

    notes5 = amount / 5;
    amount = amount % 5;

    notes2 = amount / 2;
    amount = amount % 2;

    notes1 = amount;

    printf("Number of Rs. 500 notes required: %d\n", notes500);
    printf("Number of Rs. 100 notes required: %d\n", notes100);
    printf("Number of Rs. 50 notes required: %d\n", notes50);
    printf("Number of Rs. 20 notes required: %d\n", notes20);
    printf("Number of Rs. 10 notes required: %d\n", notes10);
    printf("Number of Rs. 5 notes required: %d\n", notes5);
    printf("Number of Rs. 2 notes required: %d\n", notes2);
    printf("Number of Rs. 1 notes required: %d\n", notes1);

    return 0;
}

