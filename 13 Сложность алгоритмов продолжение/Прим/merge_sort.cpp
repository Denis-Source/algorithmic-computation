#include <stdio.h>

using namespace std;


int counter = 0;

void merge(int array[], int left, int middle, int right) {
   int i, j, k, nl, nr;
   counter += 3;
   //size of left and right sub-arrays
   counter += 4;
   nl = middle - left + 1; 
   nr = right - middle;
   int leftArray[nl], rightArray[nr];
   //fill left and right sub-arrays
   for(i = 0; i < nl; i++) {
      counter++;
      leftArray[i] = array[left + i];
   }
   for(j = 0; j < nr; j++) {
      counter++;
      rightArray[j] = array[middle + 1 + j];
   }
   counter += 3;
   i = 0; j = 0; k = left;
   //marge temp arrays to real array
   while(i < nl && j < nr) {
      counter+=2;
      if(leftArray[i] <= rightArray[j]) {
         array[k] = leftArray[i];
         i++;
      } else {
         array[k] = rightArray[j];
         j++;
      }
      counter++;
      k++;
   }
   while(i < nl) {       //extra element in left array
      counter+= 3;
      array[k] = leftArray[i];
      i++; k++;
   }
   while(j < nr) {     //extra element in right array
      counter += 3;
      array[k] = rightArray[j];
      j++; k++;
   }
}
void mergeSort(int array[], int left, int right) {
   int middle;
   counter++;
   if(left < right) {
      counter+=4;
      int middle = left + (right - left) / 2;
      // Sort first and second arrays
      mergeSort(array, left, middle);
      mergeSort(array, middle + 1, right);
      merge(array, left, middle, right);
   }
}


void printArray(int array[], int left) {
   for (int i=0; i < left; i++) {
        printf("%d\n", array[i]);
   }
    
} 
  
int main() { 
   int left = 8;
   int array[left] = {7, 6, 5, 4, 3, 1, 2, 0};

   printf("Initial array:\n");
   printArray(array, left); 
    
   mergeSort(array, 0, left - 1); 
   printf("It took %d operations\n", counter);

   printf("Sorted array:\n");
   printArray(array, left);
} 
