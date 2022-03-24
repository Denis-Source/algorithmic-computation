#include <iostream>
using namespace std;


int main() {
    char c = 97;
    cout << static_cast<int>(c) << endl; 
    // в результате выведется 97, а не 'a'
}
