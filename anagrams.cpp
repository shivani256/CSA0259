#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int freq[256] = {0}, i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return;
    }

    for (i = 0; str1[i] != '\0'; i++) {
        freq[(int) str1[i]]++;
    }


    for (i = 0; str2[i] != '\0'; i++) {
        freq[(int) str2[i]]--;
    }

 
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Strings are not anagrams.\n");
            return;
        }
    }

    printf("Strings are anagrams.\n");
}

