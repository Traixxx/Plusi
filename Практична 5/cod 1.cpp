// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    
    double array[5];
    double x;
    
    cout << "Vedit  yakes chislo 5 raziv \n";
    
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        array[i] = x;
    }

    for ( int x : array)
    {
        cout << endl <<  pow(sin(x), 5) + abs(5 * x - 1.5);
    }
    
return 0;
}
