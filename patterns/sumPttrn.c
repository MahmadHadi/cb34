// 1 2 3
// 4 5 6
// 7 8 9 

#include <stdio.h>
void main() {
    // 01 02 03 04 
    // 05 06 07 08 
    // 09 10 11 12 
    // 13 14 15 16 
    int sum = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
           printf("%.2d ", sum);
           sum++; 
        }
        printf("\n");
    }
}