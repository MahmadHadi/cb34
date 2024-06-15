// 1 2 3 4 5 ... 10

#include <stdio.h>
void main() {
    
    int start = 0, end = 0;

    printf("Enter value of start {starting number } : ");
    scanf("%d", &start);

    printf("Enter value of end {ending number } : ");
    scanf("%d", &end);

    if (start <= end) {
        while (start <= end) {
            printf("%d ", start);
            start++; // 2 3 4 5 6... 11
        }
    } else {
        printf("Invalid input ");
    }

    printf("\n -------------\n");
    printf("start = %d ", start);
}


// s = 10, e = 15

// s <= e -> 10 <= 15 -> t 
//     s <= e -> 10 <= 15 -> t 
//         print s 
//         s++ // 11 

//     s <= e -> 11 <= 15 -> t 
//         print s 
//         s++ // 12

//     s <= e -> 12 <= 15 -> t 
//         print s 
//         s++ // 13 

//     s <= e -> 13 <= 15 -> t 
//         print s 
//         s++ // 14 

//     s <= e -> 14 <= 15 -> t 
//         print s 
//         s++ // 15 

//     s <= e -> 15 <= 15 -> t 
//         print s  
//         s++ // 16 

//     s <= e -> 16 <= 15 - f -> loop end 

// Output 
// 10 11 12 13 14 15 