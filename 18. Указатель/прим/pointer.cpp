#include <iostream>


using namespace std;

int main() {
    int number = 228;
    int *pointer = &number;
    printf("Mem. addr.: %p", pointer);
}