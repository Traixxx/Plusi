// Example program
#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>
using namespace std;

int main(void) {
    
   double x, y; 
   double a, b, h;
   
    cout << "vetid a" << endl;
    cin >> a;
    cout << "vedit b" << endl;
    cin >> b;
    cout << "vedit h" << endl;
    cin >> h;

    cout << endl << "-------------------" << endl
                 <<":   X    :   Y    :" << endl
                 << "-------------------";
                 
    while (a < b) {
        
        x = a;
        y = (5*pow(x, 2)-7*x+3)/(x+7) - 13*cos(x);
        
        if (x+7 == 0) { cout << endl <<"X ne v ODZ"; break; }
        cout << endl << ":   " << x << " : " << y << " :" << endl
                 << "-------------------";
        a += h;
    }
   return 0;
 }
