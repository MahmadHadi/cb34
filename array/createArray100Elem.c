// create an array of 100 size which containes any 100 integers value 

#include <stdio.h>
#include <stdlib.h> // to get rand();
int main() {
    int arr[100];

    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;

    for (int i = 0; i <= 99; i++) {
        arr[i] = rand();
    }

    for (int i = 0; i <= 99; i++) {
        printf("%d, ", arr[i]);
    }

    printf("\n ------------ \n");

    // printf("%d ", rand());
    // printf("%d ", rand());
    return 0;
}

// create variables 
// assign value - 0 - 99 
// print 


// 41, 18467, 6334, 26500, 19169, 15724, 11478, 29358, 26962, 
// 24464, 5705, 28145, 23281, 16827, 9961, 491, 2995, 11942, 4827, 5436, 32391, 14604, 3902, 153, 292, 12382, 17421, 18716, 19718, 19895, 5447, 21726, 14771, 11538, 1869, 19912, 25667, 26299, 17035, 9894, 28703, 23811, 31322, 30333, 17673, 4664, 15141, 7711, 28253, 6868, 25547, 27644, 32662, 32757, 20037, 12859, 8723, 9741, 27529, 778, 12316, 3035, 22190, 1842, 288, 30106, 9040, 8942, 19264, 22648, 27446, 23805, 
// 15890, 6729, 24370, 15350, 15006, 31101, 24393, 3548, 19629, 12623, 24084, 19954, 18756, 11840, 4966, 7376, 13931, 26308, 16944, 32439, 24626, 11323, 5537, 21538, 16118, 2082, 22929, 16541,