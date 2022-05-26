#include <iostream>
using namespace std;


int counter = 0;
void powerSet(string str, int index = -1,
              string curr = "")
{
    counter += 2;
    int n = str.length();
    if (index == n) {
        counter++;
        return;
    }
    counter++;
    cout << curr << endl;
    for (int i = index + 1; i < n; i++) {
        counter+= 3;
        curr += str[i];
        powerSet(str, i, curr);
        curr.erase(curr.size() - 1);
    }
    counter++;
    return;
}


int main()
{
    string str = "1234";
    powerSet(str);
    cout << "Total operations:" << counter << "\n";

    return 0;
}