#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}

