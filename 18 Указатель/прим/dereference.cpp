#include <iostream>


using namespace std;

int main() {
    int number = 228;
    int* pointer = &number;
    printf("Mem. addr.: %p\n", pointer);

    *pointer = 1337;
    printf("New value: %d\n", number);
}