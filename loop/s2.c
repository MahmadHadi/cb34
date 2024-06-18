// 2 4 6 8 10 12 14 ... 
// aki - odd, beki - even 
#include <stdio.h>
void main() {

    int even;
    printf("Enter even number : ");
    scanf("%d", &even);

    for (int count = 2; count <= even; count += 2) {
        printf("%d ", count);
    }
}

// even = 10
// int count = 2 

// count <= even -> 2 <= 10 -> t 
//     print count // 2 
//     count += 2 // count = count + 2 // count = 2 + 2 = 4 

// count <= even => 4 <= 10 -> t 
//     printf count // 4 
//     count += 2 // count = 6 

// count <= even => 6 <= 10 -> t 
//     printf count; // 6 
//     count += 2 // count = 8 

// count <= even => 8 <= 10 -> t 
//     printf count ; // 8 
//     count += 2 // count = 10

// count <= even -> 10 <= 10 -> t 
//     print count // 10
//     count += 2 // count = 12 

// count <= even -> 12 <= 10 -> f - loop end 

// // * ---------------------------

// even = 5 
// count = 2 

// count <= even -> 2 <= 5 -> t 
//     print count // 2 
//     count += 2 // count = 4

// count <= even -> 4 <= 5 -> t 
//     print count // 4 
//     count += 2 // count = 6 

// count <= even -> 6 <= 5 -> f -> loop end 

// 1 2 3 4 5 6 7 8 9 10 11 12 