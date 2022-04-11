#include <iostream>

int scope_test_outside_function = 1337;

void testScope() {
    int scope_test_inside_function = 42;

    // Функция "Видит" (имеет доступ к двум переменным)
    printf("%d\n", scope_test_outside_function);
    printf("%d\n", scope_test_inside_function);
}

int main() {
    testScope();

    // Функция "Видит" только к переменной scope_test_outside_function
    printf("%d\n", scope_test_outside_function);

    // ОШИБКА
    printf("%d\n", scope_test_inside_function);

}
