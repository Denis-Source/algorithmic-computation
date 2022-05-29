#include <iostream>

using namespace std;


int main() {
    int oldLen = 5;
    int oldArray[] = {1, 2, 3, 4, 5};

    int newValue = 6;

    int newLen = 8;
    int newArray[newLen];

    for (int i = 0; i < oldLen; i++) {
        newArray[i] = oldArray[i];
    }

    newArray[5] = newValue;

    for (int i = 0; i < newLen; i++) {
        printf("%d\n", newArray[i]);    
    }
}