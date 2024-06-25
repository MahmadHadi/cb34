// * * * *
// * * * *
// * * * *
// * * * *

#include <stdio.h>
void main() {

    int row, col;
    printf("Enter row : ");
    scanf("%d", &row);

    printf("Enter col : ");
    scanf("%d", &col);

    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");

    if (row >= 0 && col >= 0) {
        for (int i = 1; i <= row; i++) { // row

            // printf("* * * *");
            // printf("* ");
            // printf("* ");
            // printf("* ");
            // printf("* ");

            for (int j = 1; j <= col; j++) { // col || cell
                printf("* ");
            }
            printf("\n");
        }
    } else {
        printf("Invalid input ");
    }

    // printf("* ");
    // printf("* ");
    // printf("* ");
    // printf("* ");
}

// i = 1, j = 1
// i <= 4, j <= 3


// i <= 4 -> 1 <= 4 => t 
//     j <= 3 -> 1 <= 3 - t 
//         print "* ";
//         j++ // j = 2 
//     j <= 3 -> 2 <= 3 - t 
//         print "* ";
//         j++ // j = 3 
//     j <= 3 -> 3 <= 3 - t 
//         print "* ";
//         j++ // j = 4 
//     j <= 3 -> 4 <= 3 -> f -> loop break;
//     print "\n"
//     i++ // i = 2 

// i <= 4 -> 2 <= 4 -> t 
//     j = 1 
//     j <= 3 -> 1 <= 3 -> t 
//         print "* "
//         j++ // j = 2 
//     j <= 3 -> 2 <= 3 -> t 
//         print "* "
//         j++ // j = 3 
//     j <= 3 -> 3 <= 3 -> t 
//         print "* ";
//         j++ // j = 4
//     j <= 3 -> 4 <= 3 -> f -> loop break
//     print "\n"
//     i++ // i = 3 

// o / p: 
//     * * * 
//     * * * 
