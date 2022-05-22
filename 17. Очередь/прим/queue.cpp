#include <iostream>
#include <queue>


using namespace std;


int main() {
    queue <int> testQueue;

    testQueue.push(2);
    testQueue.push(4);
    testQueue.push(8);
    testQueue.push(16);

    printf(
        "First elem: %d\n", 
        testQueue.front());

    testQueue.pop();
    printf("Poped!\n");

    printf(
        "First elem: %d\n", 
        testQueue.front());
 }

