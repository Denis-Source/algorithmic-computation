#include <iostream>
#include <list>

using namespace std;


int main() {
    list<char> list1;
    list1.push_back('L');
    list1.push_back('I');
    list1.push_back('S');
    list1.push_back('T');

    list1.reverse();

    for (char c : list1) {
        printf("%c\t", c);
    }
}