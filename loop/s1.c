// 1 2 3 4 5 6 ... n 

#include <stdio.h>
void main() {
    int n;
    printf("Ente a number : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input ");
    } else {
        for (int count = 1; count <= n; count++) {
            printf("%d ", count);
        }
    }
}

// n = 4 
// count = 1

// count <= n -> 1 <= 4 -> t 
//     print count // 1 
//     count++ // 2 

// count <= n -> 2 <= 4 -> t 
//     print count // 2 
//     count++ // 3


// n = -10
// count = 1 

// count <= n -> 1 <= -10 -> f -> loop end 
