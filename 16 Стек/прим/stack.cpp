#include <iostream>
#include <stack>


using namespace std;


int main() {
    stack <int> testStack;

    int number = 42;
    testStack.push(32);

    printf("Element on top: %d\n", testStack.top());
    testStack.push(1337);

    printf("Element on top: %d\n", testStack.top());
    testStack.pop();

    printf("Element on top: %d\n", testStack.top());
    testStack.pop();

    if (testStack.empty()) {
        printf("The stack is empty");
    } else {
        printf("There are %d elements in the stack", testStack.size());
    }
 }

