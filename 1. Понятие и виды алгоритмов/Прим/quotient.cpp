#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient;

    cin >> dividend;
    cin >> divisor;

    if (divisor == 0) {
        cout << "No solution!" << endl;
    } else {
        quotient = dividend / divisor;
        cout << "Quotient = " << quotient << endl;
    }

    return 0;
}
