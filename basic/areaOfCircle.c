// * A = 3.1415 * r * r
#include <stdio.h>
void main() {

    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);

    float ans = 3.1415 * radius * radius;

    printf("ans = %f ", ans);

}