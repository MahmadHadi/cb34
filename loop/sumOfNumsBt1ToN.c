// 5 -> 1 + 2 + 3 + 4 + 5 = 15 
// 3 = 1 + 2 + 3 = 6 

#include <stdio.h>
void main() {
    int num = 15;
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("sum = %d ", sum);
}
// sum = 0;
// i = 1
// sum += i // 0 + 1 = 1

// i++ // i = 2  
// sum += i // 1 + 2 = 3 

// i++ // i = 3 
// sum += i // 3 + 3 = 6 