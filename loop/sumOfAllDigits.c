// input => 123 -> 1 + 2 + 3 = 6
// input => 5323 -> 5 + 3 + 2 + 3 = 13 

#include <stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ld = 0, sum = 0;
    while (num != 0) {
        ld = num % 10;
        sum += ld;
        num /= 10;
    }
    printf("sum = %d ", sum);
}

// 1 + 2 + 3 = 3 + 2 + 1 
// num = 123 
// sum = 0
// ld = 0

// ld = num % 10 = 123 % 10 = 3 
// sum = sum + ld // 0 + 3 = 3 
// num = num / 10 // 123 / 10 = 12

// ld = num % 10 = 12 % 10 = 2
// sum = sum + ld // 3 + 2 = 5 
// num = num / 10 = 12 / 10 = 1

// ld = num % 10 = 1 % 10 = 1
// sum = sum + ld // 5 + 1 = 6 
// num = num / 10 = 1 / 10 = 0



// * -------------------

// num = 5392
// ld = 0
// sum = 0

// ld = num % 10 // 5392 % 10 = 2 
// sum += ld; // sum = sum + ld // 0 + 2 = 2
// num /= 10 // num = num / 10 // 5392 / 10 = 539

// ld = num % 10 // 539 % 10 = 9
// sum += ld; // 2 + 9 = 11 
// num /= 10 // 539 / 10 = 53

// ld = num % 10 // 3 
// sum += ld; // 11 + 3 = 14 
// num /= 10 // 53 / 10 = 5 

// ld = num % 10 // 5 
// sum += ld; // 14 + 5 = 19 
// num /= 10 // 0 -> loop break 

