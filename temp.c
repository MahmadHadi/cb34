#include <stdio.h>
void main () {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int ld = 0, prod = 1;
    while (num != 0) {
        ld = num % 10;
        prod *= ld;
        num /= 10; // 3 / 10 = 0

        // printf("num = %d prod = %d ld = %d \n", num, prod, ld);
    }
    printf("prod = %d ", prod);
}