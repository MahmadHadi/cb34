// a b c d 
// e f g h 
// i j k l 
#include <stdio.h>
void main() {

    char ch = 'a';
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

}

// a a a a 
// a     a 
// a     a 
// a a a a 

// a b a b 
// a b a b 
// a b a b 