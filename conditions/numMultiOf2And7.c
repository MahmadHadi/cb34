// multi of 2 and 7 
#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        if (num % 7 == 0) {
            printf("Num is multi of 2 and 7 both ");
        } else {
            printf("Num is multi of 2 but not of 7 ");
        }
    } else {
        if (num % 7 == 0) {
            printf("Num is multiple of 7 but not of 2 ");
        } else {
            printf("Num is not multi of 2 and 7 ");
        }
    }
}