// user - age, nationality - input 
// age > 18 and nationality - Indian - you can vote 
// age > 18 and nationality - not Indian - you cannot vote 
// age < 18 and nationality - Indian - you cannot vote 

#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    char valid;
    printf("Are you Indian : ");
    fflush(stdin);
    scanf("%c", &valid);

    // printf("age = %d indian = %c ", age, valid);

    if (age > 18 && valid == 'y') {
        printf("You can vote ");
    } else {
        printf("You cannot vote ");
    }
}