// * V = (4 * 3.1415 * r * r * r) / 3, 
#include <stdio.h>
void main() {
    float r;
    printf("Enter radius : ");
    scanf("%f", &r);

    float ans = (4 * 3.1415 * r * r * r) / 3;

    printf("ans = %.2f ", ans);
}