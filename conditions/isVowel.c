#include <stdio.h>
void main() {
    // vowels = a, e, i, o, u 
    char ch;
    printf("Enter a char :");
    scanf("%c", &ch);

    // if (ch == 'a') {
    //     printf("Given char is an vowel ");
    // } else if (ch == 'e') {
    //     printf("Given char is an vowel ");
    // } else if (ch == 'i') {
    //     printf("Given char is an vowel ");
    // }

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A') {
        printf("Given char is an vowel ");
    } else {
        printf("Given char is an consonant ");
    }
}