#include <iostream>
using namespace std;

int main() {
    int x = 23;
    switch (x) { // Проверяем переменную x
        case 1: 
            // Если переменная будет равна 1, то здесь сработает код
            // Может быть множество строк, а не только одна
            printf("Переменная равна 1\n");
            break; // Указываем конец для кода для этой проверки
        case 56: // Если переменная будет равна 56, то здесь сработает код
            // Может быть множество строк, а не только одна
            printf("Переменная равна 56\n");
            break; // Указываем конец для кода для этой проверки
            // По аналогии таких проверок может быть множество
            // Также можно добавить проверку, которая сработает в случае
            // если все остальные проверки не сработают
        default:
            printf("Переменная равна %d\n", x);
            break; // Можно и не ставить, так как это последние условие
    }
    system("pause");
}