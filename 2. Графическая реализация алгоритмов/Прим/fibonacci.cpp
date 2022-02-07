#include <iostream>

using namespace std;

int main() {
    int quantity;

    int previous = 0;
    int next = 1;
    int buffer = next;
    cin >> quantity;
    while (quantity > 0) {
        cout << next << endl;
        buffer = next;
        next += previous;
        previous = buffer;
        quantity--;
    }
}