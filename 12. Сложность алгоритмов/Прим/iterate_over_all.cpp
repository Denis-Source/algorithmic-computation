#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

void genSortedValues(int array[], int len) {
    int seed = 0;
    srand(seed);
    for (int i = 0; i < len; i++) {
        array[i] = rand();
    }
    sort(array, array + len);
}

int findValue(int array[], int len, int number) {
    int counter = 0;
    int index = -1;

    for (int i = 0; i < len; i++) {
        counter++;

        if (array[i] == number) {
            index = i;
            break;
        }
    }
    printf("It took %d operations\n", counter);
    return index;
}

int main() {
    const int arrLen = 100000;
    int arr[arrLen];
    genSortedValues(arr, arrLen);


    int numberToFind = 9999;
    int value = findValue(arr, arrLen, numberToFind);
    printf("Found number %d, at %d position\n", numberToFind, value);

}

