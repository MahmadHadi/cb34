// 1 1 2 3 5 8 13 21 34 ... 

#include <stdio.h>
void main() {

    int first = 1, sec = 1;
    int ans;

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d %d ", first, sec);
    if (n >= 0) {
        for (int i = 3; i <= n; i++) {
            ans = first + sec;
            printf("%d ", ans);
            first = sec;
            sec = ans;
        }
    } else {
        printf("Invalid input ");
    }
}

// first = 1, sec = 1;
// int ans;
// print first, sec 

// ans = first + sec // 1 + 1 = 2 
// print ans // 2 
// first = sec // first = 1
// sec = ans // sec = 2 

// ans = first + sec // 1 + 2 = 3 
// print ans // 3 
// first = sec // first = 2 
// sec = ans // sec = 3 

// ans = first + sec // 2 + 3 = 5 
// print ans // 5 
// first = sec // first = 3 
// sec = ans // sec = 5 
 
// ans = first + sec // 3 + 5 = 8 
// print ans // 8 
// first = sec // first = 5 
// sec = ans // 8 
// // ... 
