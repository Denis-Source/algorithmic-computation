#include <iostream>


void printData(int data) {
    printf("Integer: %d\n", data);
}

void printData(float data) {
    printf("Float: %f\n", data);
}

void printData(double data) {
    printf("Double: %f\n", data);
}

void printData(char data) {
    printf("Char: %c\n", data);
}

int main() {
    printData(12);
    printData(3.32f);
    printData('c');
}
