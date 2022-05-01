#include <stdio.h>


using namespace std;
  
void stupidSort(int array[], int arrayLen) 
{ 
    int i, tempBuffer, counter;
    i = 1;
    counter = 4;
    while (i < arrayLen) {
        counter++;

        if (array[i - 1] > array[i]) {   
            counter += 3;
            tempBuffer = array[i];
            array[i] = array[i - 1];
            array[i - 1] = tempBuffer;

            i = 1;
        } else {
            i++;
            counter++;
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
    
    stupidSort(array, arrayLen); 
    
    printf("Sorted array:\n");
    printArray(array, arrayLen);
} 