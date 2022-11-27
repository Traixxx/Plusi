// Example program
#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    
    int c0;
    int st;
    
    cin >> c0;
    
    while (c0 != 1)
    {
        if (c0 % 2 == 0) {
            c0 /= 2;
            }
        else {
            c0 = c0 * 3 + 1;
            }
        cout << c0 << endl;
        st++;
    }
    cout<< "krokiv: "<< st;
   return 0;
 }
