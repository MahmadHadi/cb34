// 3 12 48 192 768 ...

#include <stdio.h>
void main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int ans = 3;

    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", ans);
            // ans = ans * 4;
            ans *= 4;
        }
    } else {
        printf("Invalid input ");
    }
}

// 3, 12, 48, 192, ...

// ans = 3
// print ans // 3 

// ans = ans * 4 // 12 
// print ans // 12 

// ans = ans * 4 // 12 * 4 = 48
// print ans // 48 

// ans = ans * 4 // 48 * 4 = 192
// print ans // 192 
// ...