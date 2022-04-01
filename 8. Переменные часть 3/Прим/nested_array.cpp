#include <iostream>

using namespace std;

int main() {
    int array1[2][2] = {
            {1, 2}, {3, 4}
        };
    int array2[2][2] = {
            {1}, {3, 4}
        };
        
    int numberA = array1[1][1];
    int numberB = array2[0][3];

    printf("%d\n", numberA);
    printf("%d\n", numberB);
}