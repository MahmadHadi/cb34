// num = input - multiple of three

#include <stdio.h>
void main() {
    int num = 10;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        printf("Multiple of three ");
    } else {
        printf("Not multiple of three ");
    }
}