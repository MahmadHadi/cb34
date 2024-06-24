// input -> 5
// 1! = 1
// 2! = 2
// 3! = 6
// 4! = 24
// 5! = 120

#include <stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact *= i;
        printf("%d! = %d \n", i, fact);
    }
}

// num = 5 
// fact = 1 

// i = 1 

// i <= num -> 1 <= 5 -> t 
//     fact *= i // 1 * 1 = 1
//     print fact // 1
//     i++ // i = 2

// i <= num -> 2 <= 5 -> t 
//     fact *= i // 1 * 2 = 2 
//     print fact 
//     i++ // 3 

// i <= num -> 3 <= 5 -> t
//     fact *= i // 2 * 3 = 6 
//     print fact // 6 
//     i++ // 4 

// i <= num -> 4 <= 5 -> t 
//     fact *= i // 4 * 6 = 24 
//     print fact // 24 
//     i++ // 5 

// i <= num -> 5 <= 5 -> t 
//     fact *= i // 24 * 5 = 120
//     print fact // 120 
//     i++ // 6 

// i <= num -> 6 <= 5 -> f -> loop break 