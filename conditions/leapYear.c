// * input - year - leap year -> true - else - false 
// 2020 2024 2028 2032 2036

#include <stdio.h>
void main() {
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if (year <= 0) { //      = -2024
        year = year * (-1);
    }

    if (year % 4 == 0) {
        printf("%d is an leap year ", year);
    } else {
        printf("%d is not an leap year ", year);
    }
}