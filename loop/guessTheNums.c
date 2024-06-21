// key = 10;
// input -> 10

#include <stdio.h>
void main()
{

    int num;
    int key = 10;
    
    do {
        printf("Enter a number : ");
        scanf("%d", &num);
    } while (num != key);

    printf("You have entered the key ");

    printf("\n-------------------\n");
    key = 12;

    for (; key != num;) {
        printf("Enter a number : ");
        scanf("%d", &num);
    }
    printf("You have entered the key ");

    printf("\n-------------------\n");

    key = 32;
    while (num != key) {
        printf("Enter a number : ");
        scanf("%d", &num);
    }
    printf("You have entered the key ");   
}