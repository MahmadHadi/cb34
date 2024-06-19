// 1 8 27 64 125 ... n

#include <stdio.h>
void main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n >= 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i * i * i);
        }
    } else {
        printf("Invalid input ");
    }
}