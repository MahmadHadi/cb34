// 1 2 3 
// 1 2 3 
// 1 2 3 

#include <stdio.h>
void main() {
    // %d, j 

    // 1 2 3
    // 1 2 3
    // 1 2 3
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

