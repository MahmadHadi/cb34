// check temp - user input = temp - temp <= 20 - cold, else - hot

#include <stdio.h>
void main() {
    int temp;
    printf("Enter temperature : ");
    scanf("%d", &temp);

    if (temp <= 20) 
        printf("It is an cold day ");
    else
        printf("It is an hot day ");
    
}