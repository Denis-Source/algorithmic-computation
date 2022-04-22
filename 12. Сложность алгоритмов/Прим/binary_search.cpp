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


int findValueBinary(int array[], int smallest, int highest, int number) {
    int counter = 0;
    int index = -1;
    while (smallest <= highest) {
        counter++;
        int middle = smallest + (highest - smallest) / 2;
 
        if (array[middle] == number)
            index = middle; 
        if (array[middle] < number)
            smallest = middle + 1;
        else
            highest = middle - 1;
    }
    printf("It took %d operations\n", counter);
    return index;
}


int main() {
    const int arrLen = 100000;
    int arr[arrLen];
    genSortedValues(arr, arrLen);


    int numberToFind = 9999;
    int value = findValueBinary(arr, arr[0], arr[arrLen - 1], numberToFind);
    printf("Found number %d, at %d position\n", numberToFind, value);

}

