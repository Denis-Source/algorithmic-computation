#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;

    if (a > b) {
        printf("%d\n", a);
    } else if (a == b) {
        printf("%d = %d\n", a, b);
    } else {
        printf("%d\n", b);
    }
    system("pause");
}
