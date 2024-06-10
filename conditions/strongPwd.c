// input => pwd - length >= 4 - strong else weak 
// 121214 = length = 6
// 328 = 3
// 1000 - strong
// 999 - weak
#include <stdio.h>
void main() {
    int pwd;
    printf("Enter pwd : ");
    scanf("%d", &pwd);

    if (pwd <= 0) { // pwd = -100
        pwd = pwd * (-1);
    }

    // printf("pwd ");
    if (pwd >= 1000) {
        printf("Strong pwd %d ", pwd);
    } else {
        printf("Weak pwd %d ", pwd);
    }
}