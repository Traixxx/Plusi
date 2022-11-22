// Example program
#include <iostream>
using namespace std;
#include <string>

int main()
{
  int N;
  int x;
  int y;
  int z;
  int i = 1;
  
  
    cout << "\n Vedit dodatne chislo \n";
      cin >> N;
     if(N>=10 and N<=99){
     while(i == 1){ 
        i++;
        y = N/10%10;
        z = N%100%10;
        cout << "perestavlaem: \n";
        cout << z << y;

    }
     }
     else{
         while(i == 1){ 
        i++;
        x = N/100;
        y = N/10%10;
        z = N%100%10;
        cout << "perestavlaem: \n";
        cout << z <<y << x;

    }
     }
     

  
  return 0;
}
