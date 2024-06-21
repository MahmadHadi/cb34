#include <stdio.h>
void main() {
    int num = 10;

    for (int i = 1; i <= num; i++) {
        if (i == 6) {
            // continue; // loop skip 
            break; // loop end 
        } 
        printf("%d ", i);
    }
}

n = 5;
i = 1;

i <= n -> 1 <= 5 - t 
    print i 
    i++ // 2 

i <= n -> 2 <= 5 - t 
    print i 
    i++ // 3 

i <= n -> 3 <= 5 - t 
    if (i == 3) => 3 == 3 -> t 
        i++
        break; -> loop end 

// code 

// * ------------------------


n = 5;
i = 1;

i <= n -> 1 <= 5 - t 
    print i 
    i++ // 2 

i <= n -> 2 <= 5 - t 
    print i 
    i++ // 3 

i <= n -> 3 <= 5 - t 
    if (i == 3) => 3 == 3 -> t 
        i++ // 4 
        continue; -> loop skip 

i <= n -> 4 <= 5 -> t 
    if (i == 3) => 4 == 3 - f 
    print i 
    i++ // 5
// code 