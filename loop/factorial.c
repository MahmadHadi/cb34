// 3! = 3 * 2 * 1 = 6 
// 5! = 5 * 4 * 3 * 2 * 1 = 120  
#include <stdio.h>
void main() {
    int num = 2;
    int fact = 1;

    if (num == 1 || num == 0) {
        printf("fact = 1");
    } else if (num == 2) {
        printf("fact = 2");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("fact = %d ", fact);
    }
}

// i = 1;
// fact = 0

// fact = fact * i // 0 * 1 = 0
// i++ // 2 

// fact = fact * i // 0 * 2 = 0

// * 000000000000000
// 0! = 1 
// 1! = 1 
// 2! = 2 