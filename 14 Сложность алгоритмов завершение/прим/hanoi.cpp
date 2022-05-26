#include <cstdio>


using namespace std;
 

int step = 0;
int counter = 0;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    counter++;
    if (n == 0) {
        return;
    }
    counter++;
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    step++;

    printf("%d)\tMove disk %d from rod %c to rod %c\n", step, n, from_rod, to_rod);
    counter++;

    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}


int main()
{
    int n = 16;
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("Total opertations: %d", counter);
}
