// Example program
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    
    
    int d = 1;
    
    for (int i = 1; i < 20; i++) {
        if (i % 2 == 0) {
            cout << i << "\n";
           d *= i;
        }
    }
    cout << d;
    
return 0;
}
