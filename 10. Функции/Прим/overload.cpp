#include <iostream>


void print_data(int data) {
    printf("Integer: %d\n", data);
}

void print_data(float data) {
    printf("Float: %f\n", data);
}

void print_data(double data) {
    printf("Double: %f\n", data);
}

void print_data(char data) {
    printf("Char: %c\n", data);
}

int main() {
    print_data(12);
    print_data(3.32f);
    print_data('c');
}
