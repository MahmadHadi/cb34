#include <stdio.h>
void main() {
    int num = 5;
    int fact = 1;

    if (num == 1 || num == 0) {
        printf("fact  = 1");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("fact = %d ", fact);
    }
}