// input -> height, width
// print "rect "
// print "square "

#include <stdio.h>
void main() {
    int rect = 5, square = 5;
    printf("enter side1 : ");
    scanf("%d", &rect);

    printf("enter side2 : ");
    scanf("%d", &square);

    if (rect == square) {
        printf("Shape = square ");
    }
    if (rect != square) {
        printf("Shape = rectangle ");
    }
}