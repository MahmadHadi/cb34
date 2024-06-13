#include <stdio.h>
void main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    fflush(stdin);

    char nat;
    printf("Are you Indian ? (y / n) ");
    scanf("%c", &nat);

    // if (age > 18) {
    //     printf("You can vote ");
    // } else {
    //     if () {

    //     }else if () {

    //     }
    //     printf("You cannot vote ");
    // }

    // if (age > 0) {
    //     if (age > 18 && nat == 'y') {
    //         print "vote  "
    //     } else {
    //         printf("cannot vote ");
    //     }
    // }

    age > 0 ? 
        (age > 18 && nat == 'y' ? 
          printf("You can vote ") 
        : printf("You cannot vote ")) 
        : printf("Invalid input ");
}
