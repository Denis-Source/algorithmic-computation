#include <iostream>
#include <cmath>


using namespace std;


int main() {
	int number = 228;
	int *ptr = &number;
	int **pptr = &ptr;

	printf("Value: %d\n", number);
	printf("Value: %p\n", ptr);
	printf("Value: %p\n", pptr);
}