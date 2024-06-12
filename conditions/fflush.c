#include <stdio.h>
void main() {
    // int age;
    // printf("Enter your age : ");
    // scanf("%d", &age);

    // char ch;
    // printf("Enter ch : ");

    // fflush(stdin);
    // scanf("%c", &ch); 

    // printf("age = %d ch = %c hadi ", age, ch);

    // char new = '\n';


    char ch1, ch2;
    printf("Enter ch1 : ");
    scanf("%c", &ch1);

    printf("Enter ch2 : ");
    fflush(stdin);
    scanf("%c", &ch2);
    
    printf("ch1 = %c, ch2 = %c, done", ch1, ch2);
}