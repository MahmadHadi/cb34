// a = w * l 

#include <stdio.h>
void main() {
    int widht;
    int length;

    printf("Enter width : ");
    scanf("%d", &widht);

    printf("Enter length : ");
    scanf("%d", &length);

    int ans = length * widht;

    printf("ans = %d ", ans);
}