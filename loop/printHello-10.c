#include <stdio.h>
void main() {

    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");
    // printf("hello \n");

    int num = 5;
    int count = 1;
    while (count <= num) {
        printf("hello ");
        // printf("%d %d \n", count, num);
        count++; // 2, 3, 4, 5, ...
    }
}
// count = 1 

// count <= 5 -> 1 <= 5 -> t 
//     print "hello \n" 
//     count++; // 2 

// count <= 5 -> 2 <= 5 -> t
//     print "hello \n"
//     count++; // 3 

// count <= 5 -> 3 <= 5 -> t 
//     print "hello \n"
//     count++; // 4

// count <= 5 -> 4 <= 5 -> t 
//     print "hello \n"
//     count++; // 5

// count <= 5 -> 5 <= 5 -> t 
//     print "hello \n"
//     count++; // 6 

// count <= 5 -> 6 <= 5 -> f -> loop end 