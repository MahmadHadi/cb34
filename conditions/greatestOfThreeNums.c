// * 2 nums - input - print which one is greater 
// num1 = 1,
// num2 = 2
// print "num2 is greater "

// num1 = 3,
// num2 = 2
// print "num1 is greater "

#include <stdio.h>
void main() {
    int num1, num2, num3;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Enter number 3 : ");
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("num1 is greatest ");
        } else {
            printf("num3 is greatest ");
        }
    } else {
        if (num2 > num3) {
            printf("Num2 is greatest ");
        } else {
            printf("Num3 is greatest ");
        }
    }
}

// 2
// 1
// 3

// 2 > 1 - t - num1 > num2 - t 
// 3 > 2 - t num3 > num1 - 3 > 1 - num3 > num2 - t - num3 badha thi moto    


