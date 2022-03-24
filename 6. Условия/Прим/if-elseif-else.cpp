#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6;

    if (a > b) {
        printf("%d\n", a);
    } else if (a == b) {
        printf("%d = %d\n", a, b);

    } else {
        printf("%d", b);
    }
    system("pause");
}
