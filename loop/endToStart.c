// print end to start -> end = 5, start = 2 -> o/p => 5 4 3 2

#include <stdio.h>
void main()
{

    int start, end;
    printf("Enter start number : ");
    scanf("%d", &start);
    printf("Enter end number : ");
    scanf("%d", &end);

    if (start >= end) {
        printf("Invalid input ");
    } else {
        while (end >= start) {
            printf("%d ", end);
            end--;
        }
    }
}

// e = 5; s = 2 

// e >= s -> 5 >= 2 -> t 
//     print e // 5 
//     e--; // e = 4 

// e >= s -> 4 >= 2 -> t 
//     print e // 4 
//     e--; // e = 3  

// e >= s -> 3 >= 2 -> t 
//     print e // 3 
//     e--; // 2 

// e >= s -> 2 >= 2 -> t 
//     peint e // 2 
//     e--; // 1 

// e >= s -> 1 >= 2 -> f => loop end 

// * ---------------------------
// s = -3
// e = 0 

// e >= s -> 0 >= -3 -> t 
//     print e // 0 
//     e--; // e = -1 

// e >= s -> -1 >= -3 -> t     
//     print e // -1 
//     e--; // e = -2

// e >= s -> -2 >= -3 -> t 
//     print e // -2
//     e--; // e = -3 

// e >= s -> -3 >= -3 -> t 
//     print e // -3 
//     e--; // e = -4 

// e >= s -> -4 >= -3 -> f -> loop end 