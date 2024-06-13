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

    switch (opr)
    {
    case '+':
        printf("%d + %d = %d ", num1, num2, num1 + num2);
        break;
    
    case '-':
        printf("%d - %d = %d ", num1, num2, num1 - num2);
        break;
    
    case '*':
        printf("%d * %d = %d ", num1, num2, num1 * num2);
        break;
    
    case '/':
        printf("%d / %d = %f ", num1, num2, (float)num1 / num2);
        break;
    
    default:
        printf("Invalid input ");
        break;
    }

}