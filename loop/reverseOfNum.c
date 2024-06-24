// input => 123 -> output => 321 
// 2391 => 1932 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ld = 0;
    int rnum = 0;

    while (num != 0) {
        printf("rnum = %d num = %d ld = %d \n", rnum, num, ld);

        ld = num % 10;
        rnum = rnum * 10 + ld;
        num /= 10;    
    }
    printf("rnum = %d ", rnum);    
}
// 111 => 1 * 100 + 1 * 10 + 1 * 1 = 100 + 10 + 1 = 111
// 234 => 2 * 100 + 3 * 10 + 4 * 1 = 200 + 30 + 4 = 234

// 9492 => 9 * 1000 + 4 * 100 + 9 * 10 + 2 * 1 = 9000 + 400 + 90 + 2 = 9492
// 9492 => 2 * 1000 + 9 * 100 + 4 * 10 + 9 * 1 = 2000 + 900 + 40 + 9 = 2949

// 123 => 3 * 100 + 2 * 10 + 1 * 1 = 300 + 20 + 1 => 321 

// num = 123 
// ld = 0
// ans = 0 

// ld = num % 10 = 123 % 10 = 3 

// ld = num % 10;
// rnum = rnum * 10 + ld; 
// num /= 10;

// num = 123 
// rnum = 0 

// num != 0 -> 123 != 0 - t 
//     ld = num % 10 // ld = 3
//     rnum = rnum * 10 + ld // 0 * 10 + 3 = 0 + 3 = 3 
//     num /= 10 // num = num / 10 => num = 123 / 10 = 12 

// num != 0 -> 12 != 0 - t 
//     ld = num % 10 // ld = 2 
//     rnum = rnum * 10 + ld // 3 * 10 + 2 = 30 + 2 = 32 
//     num /= 10; // 1 

// num != 0 -> 1 != 0 - t 
//     ld = num % 10 // ld = 1 
//     rnum = rnum * 10 + ld // 32 * 10 + 1 = 320 + 1 = 321
//     num /= 10 // num = 0

// num != 0 -> 0 != 0 - f -> loop break 

// **************************

// num = 4292 
// rnum = 0
// ld = 0

// num != 0 -> 4292 != 0 -> t 
//     ld = num % 10 // 4292 % 10 = 2 
//     rnum = rnum * 10 + ld // 0 * 1 + 2 = 2
//     num /= 10 // 4292 / 10 = 429 

// num != 0 -> 429 != 0 -> t 
//     ld = num % 10 // 9
//     rnum = rnum * 10 + ld // 2 * 10 + 9 = 29
//     num /= 10 // 429 / 10 = 42

// num != 0 -> 42 != 0 - t 
//     ld = num % 10 // 2 
//     rnum = rnum * 10 + ld // 29 * 10 + 2 = 290 + 2 = 292
//     num /= 10 // 42 / 10 = 4 

// num != 0 -> 4 != 0 - t 
//     ld = num % 10 // 4
//     rnum = rnum * 10 + ld // 292 * 10 + 4 = 2920 + 4 = 2924 
//     num /= 10 // 4 / 10 = 0

// num != 0 -> 0 != 0 - f - loop break;