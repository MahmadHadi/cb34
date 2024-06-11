// multiple of 3 and 5 both 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 3 == 0) {
        if (num % 5 == 0) {
            printf("Num is multiple of three and five both ");
        } else {
            printf("Num is multiple of 3 but not of 5 ");
        }
    } else {
        printf("Num is not multiple of 3 ");
    }
}