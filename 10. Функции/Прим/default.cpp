#include <iostream>
#include <cmath>


double round(float number, int prec=2) {
    int processed = number * pow(10, prec);
    double rounded = processed / pow(10, prec);
    return rounded;
}

int main() {
    printf(
        "Rounded number: %f\n", 
        round(23.3423422f)
    );

    printf(
        "Rounded number: %f\n", 
        round(23.3423422f, 3)
    );
}
