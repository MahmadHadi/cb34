#include <stdio.h>
void main() {

    int count = 1;
    while (count <= 10) {
        printf("%d ", count);
        count++;
    }
    printf("\n----------\n");
    for (int count2 = 1; count2 <= 10; count2++) {
        printf("%d ", count2);
    }
    
}