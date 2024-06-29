// a b c d 
// a b c d
// a b c d
// a b c d
#include <stdio.h>
void main() {

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%c ", 96 + j);    
        }
        printf("\n");
    }

}


// i = 1, j = 1
// i <= 3, j <= 3 
// i++, j++

// i <= 3 -> 1 <= 3 -> t 
//     j = 1 
//     j <= 3 -> 1 <= 3 -> t 
//          print ("%c ", 96 + j -> 96 + 1 = 97)
//          j++ // j = 2 
//     j <= 3 -> 2 <= 3 -> t 
//         print ("%c ", 96 + j => 96 + 2 = 98)
//         j++ // j = 3 
//     j <= 3 -> 3 <= 3 -> t 
//         print ("%c ", 96 + j => 96 + 3 = 99)
//         j++ // j = 4 
//     j <= 3 -> 4 <= 3 -> f -> loop break 

//     print "\n";
//     i++ // i = 2 

// i <= 3 -> 2 <= 3 -> t 
//     j = 1 
//     j <= 3 -> 1 <= 3 -> t 
//         print ("%c ", 96 + j -> 97)
//         j++ // j = 2 
//     j <= 3 -> 2 <= 3 -> t 
//         print ("%c ", 96 + j -> 98)
//         j++ // j = 3 
//     j <= 3 -> 3 <= 3 -> t 
//         print ("%c ", 96 + j -> 99)
//         j++ // j = 4
//     j <= 3 -> 4 <= 3 -> f -> loop break 