#include <stdio.h>
void main()
{
    int num = 1;

    switch (num)
    {
    default:
        printf("Invalid ");
        break;
    case 1:
        printf("One ");
        break;
    case 5:
        printf("Five ");
        break;
    case 10:
        printf("One Zero ");
        break;
    }
}
