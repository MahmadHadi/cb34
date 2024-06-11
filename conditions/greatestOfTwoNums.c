// * 2 nums - input - print which one is greater 
// num1 = 1,
// num2 = 2
// print "num2 is greater "

// num1 = 3,
// num2 = 2
// print "num1 is greater "

#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    if (num1 <= num2) {
        printf("Num2 > num1 ");
    } else {
        printf("Num1 > num2 ");
    }
}