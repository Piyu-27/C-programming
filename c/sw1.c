//WAP to check vowel or consonant
//aeiou
#include <stdio.h>

int main() {
    char alp;
    printf("Enter a character: ");
    scanf("%c", &alp);

    switch (alp) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }

    return 0;
}
