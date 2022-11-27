// Example program
#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    int n;
    cout << "vedit chislo menshe 30 "<< endl;
    cin >> n;
    
    if (n > 30) { cout << "chislo zanadto velike"; return 0; }
    n -= 2;

    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < n; i++) {
        cout << '|';
        for (int j = 0; j < n; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
}

