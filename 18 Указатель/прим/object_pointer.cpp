#include <iostream>
#include <queue>


using namespace std;


void printQueue(queue<int>* queuePtr) {
	while (!(*queuePtr).empty()) {
		printf("Element: %d\n", (*queuePtr).front());
		(*queuePtr).pop();
	}
	printf("Done!");
}


int main() {
	queue <int> testQueue;

	testQueue.push(2);
	testQueue.push(4);
	testQueue.push(8);
	testQueue.push(16);

	queue<int>* queuePointer = &testQueue;
	printQueue(queuePointer);
}