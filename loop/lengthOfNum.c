// input => num = 829 => length = 3  
// input => num = 82932 => length = 5

#include <stdio.h>
void main() {

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
}

num = 123
int length = 0

num != 0 -> 123 != 0 - t 
    length++; // 1 
    num = num / 10 => 123 / 10 = 12.3 => 12

num != 0 -> 12 != 0 - t 
    length++ // 2
    num = num / 10 => 12 / 10 = 1.2 => 1 

num != 0 -> 1 != 0 - t 
    length++ // 3 
    num = num / 10 => 1 / 10 = 0.1 => 0 

num != 0 -> 0 != 0 -> f -> loop end 

print length; // 3

// * --------------------

num = 9282 
length = 0

num != 0 -> 9282 != 0 - t 
    length++ // 1 
    num /= 10 // 9282 / 10 = 928

num != 0 -> 928 != 0 - t 
    length++ // 2 
    num /= 10 -> 928 / 10 = 92

num != 0 -> 92 != 0 - t 
    length++ // 3 
    num /= 10 -> 92 / 10 = 9 

num != 0 -> 9 != 0 - t 
    length++ // 4 
    num /= 10 -> 9 / 10 = 0

num != 0 -> 0 != 0 - f - loop break

print length 