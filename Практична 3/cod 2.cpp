// Example program
#include <iostream>
using namespace std;
#include <string>

int main()
{
  int N;
  int y;
  int x;
  int z;
  
  
 finish: cout << "vedit trohznache chislo N: ";
  cin >> N;
 
  
if( N>=100 and N<= 999 ){  
 cout << "skladaetsa z chisel: ";
 x = N/100;
 y = N/10%10;
 z = N%100%10;
cout << x << " ";
cout << y << " ";
cout << z;
}
 else { 
     goto finish;
     }
     
     
      cout << "\nSuma chisel bilshe 5: \n";
     if (x>5 and y>5 and z>5) { cout << x+y+z; }
         else if (x>5 and y>5 and z<5) { cout << x+y; }
         else if (x>5 and y<5 and z<5) { cout << x+z; }
         else if (x<5 and y>5 and z>5) { cout << y+z; }
         else if (x>5 and y<5 and z<5) { cout << x; }
         else if (x<5 and y>5 and z<5) { cout << y; }
         else if (x<5 and y<5 and z>5) { cout << z; }
         else if (x <= 5 and y <= 5 and z <= 5) { cout << "takih chisel nemae"; }
         
         
  return 0;
}
