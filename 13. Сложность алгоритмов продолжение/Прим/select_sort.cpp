#include <stdio.h>


using namespace std;
  
void selectionSort(int array[], int arrayLen) 
{ 
    int minElementIndex, tempBuffer, counter;
    counter = 2; 
  
    for (int i = 0; i < arrayLen - 1; i++) { 
        counter++;
        minElementIndex = i; 
        for (int j = i + 1; j < arrayLen; j++) {
            counter++;
            if (array[j] < array[minElementIndex]) {
                minElementIndex = j; 
                counter++;
            } 
        }
        counter += 3;
        tempBuffer = array[minElementIndex];
        array[minElementIndex] = array[i];
        array[i] = tempBuffer;
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
    
    selectionSort(array, arrayLen); 
    
    printf("Sorted array:\n");
    printArray(array, arrayLen);
} 