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

int findValueBinaryR(int array[], int smallest, int highest, int number) {
    if (highest >= smallest) {
        int middle = smallest + (highest - smallest) / 2;
 
        if (array[middle] == number)
            return middle;
            
        if (array[middle] > number)
            return findValueBinaryR(array, smallest, middle - 1, number);

        return findValueBinaryR(array, middle + 1, highest, number);
    }
}


int main() {
    const int arrLen = 100000;
    int arr[arrLen];
    genSortedValues(arr, arrLen);


    int numberToFind = 9999;
    int value = findValueBinaryR(arr, arr[0], arr[arrLen - 1], numberToFind);
    printf("Found number %d, at %d position\n", numberToFind, value);

}

