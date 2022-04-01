#include <iostream>
 

int main()
{   
    for (int i = 0; i < 10; i++) {
        printf("%d ==> ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("Done!");
}
