#include <stdio.h>
#include <string.h>

void main() {
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    j = strlen(str) - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
}

