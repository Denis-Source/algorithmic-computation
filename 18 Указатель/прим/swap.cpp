#include <iostream>


using namespace std;

void swap(int* a, int* b) {
    int tmp = *b;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 32;
    int y = 43;
    swap(&x, &y);

    printf("X = %d; Y = %d\n", x, y);
}