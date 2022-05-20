#include <iostream>
#include <stack>


using namespace std;


int main() {
    stack <int> testStack;

    testStack.push(42);
    testStack.push(228);
    testStack.push(1337);

    printf("Start\n");

    while(!testStack.empty()) {
        printf(
            "Elem: %d\n",
             testStack.top());
        testStack.pop();
    }
    printf("Out of elements!\n");
 }
