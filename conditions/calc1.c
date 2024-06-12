#include <stdio.h>
void main() {
    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    char opr;
    printf("Enter operator : ");
    fflush(stdin);
    scanf("%c", &opr);

    if (opr == '+') {
        printf("%d + %d = %d ", num1, num2, num1 + num2);
    } else if (opr == '-') {
        printf("%d - %d = %d ", num1, num2, num1 - num2);
    } else if (opr == '*') {
        printf("%d * %d = %d ", num1, num2, num1 * num2);
    } else if (opr == '/') {
        printf("%d / %d = %d ", num1, num2, num1 / num2);
    } else {
        printf("Invalid input ");
    }
}