#include <stdio.h>
void main() {
    int num = 10;
    printf("%d ", num); // 10

    num = 101;
    printf("%d ", num); // 101
    printf("\n ---------- \n");
    // int rnum1 = 39;
    // int rnum2 = 40;
    // int rnum3 = 41;

    int arr[6];
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 10;
    arr[3] = 5;
    arr[4] = 15;
    arr[5] = 3;

    // printf("%d ", arr[0]);  
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);
    // printf("%d ", arr[5]);

    for (int i = 0; i <= 5; i++) {
        printf("%d ", arr[i]);
    }
}