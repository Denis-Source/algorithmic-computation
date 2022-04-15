#include <iostream>
using namespace std;

/*
    Функция нахождения факториала числа
    Факториал n = 1*2*3*...*n
*/
int factorial(int n) {
    // рекурсивная ветвь
    if (n > 1) {
        // рекурсивный вызов
        return n * factorial(n - 1);
    // терминальная ветвь
    } else {
        return 1;
    }
}

int main() {
    // выделяем память
    int n, result;

    // определяем значения,
    // вызываем рекурсивную функцию
    n = 10;
    result = factorial(n);

    // выводим значение и результат на экран
    printf("%d factorial is %d", n, result);
}
