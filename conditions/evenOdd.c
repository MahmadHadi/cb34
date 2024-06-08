// * input -> num -> check if num is even{beki} or odd {aki}

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // 2, 4, 6, 8, 10
    if (num % 2 == 0) {
        printf("Even number ");
    }
    if (num % 2 == 1) {
        printf("Odd number ");
    }
}   