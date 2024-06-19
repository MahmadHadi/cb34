// 3! = 3 * 2 * 1 = 6 
// 5! = 5 * 4 * 3 * 2 * 1 = 120  
#include <stdio.h>
void main() {
    int num = 7;
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("fact = %d ", fact);
}

// i = 1;
// fact = 0

// fact = fact * i // 0 * 1 = 0
// i++ // 2 

// fact = fact * i // 0 * 2 = 0
