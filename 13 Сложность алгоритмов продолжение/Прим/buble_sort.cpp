#include <stdio.h>

using namespace std;
  

void bubbleSort(int array[], int arrayLen) {
    int tempBuffer;
    int counter = 1;
    for (int i = 0; i < arrayLen - 1; i++) {
        for (int j = 0; j < arrayLen - i - 1; j++) {
            counter++;
            if (array[j] > array[j + 1]) {
                counter += 3;
                tempBuffer = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tempBuffer;
            }
        }
    }
    printf("It took %d operations\n", counter);
}
  
void printArray(int array[], int arrayLen) {
    for (int i=0; i < arrayLen; i++) {
        printf("%d\n", array[i]);
    }
    
} 
  
int main() { 
    int arrayLen = 8;
    int array[arrayLen] = {5, 6, 4, 34, 7, 1, 12, 32};

    printf("Initial array:\n");
    printArray(array, arrayLen); 
    
    bubbleSort(array, arrayLen); 
    
    printf("Sorted array:\n");
    printArray(array, arrayLen);
} 
