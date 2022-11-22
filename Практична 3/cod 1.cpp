*ЗАВДАННЯ ЗА 3 ЛАБОРАТОРНУ РОБОТУ*

// Example program
#include <iostream>
using namespace std;
#include <string>

int main()
{
  int N;
  
  
      Misac:cout << "vedit nomer misyacya: \n";
      cin >> N;
  switch (N) {
      case 1: N = 1; cout << "sichen, 1 quvartal"; break;
      case 2: N = 2; cout << "lutiy, 1 quvartal"; break;
      case 3: N = 3; cout << "berezen, 2 quvartal"; break;
      case 4: N = 4; cout << "kviten, 2 quvartal"; break;
      case 5: N = 5; cout << "traven, 2 quvartal"; break;
      case 6: N = 6; cout << "cherven, 3 quvartal"; break;
      case 7: N = 7; cout << "lipen, 3 quvartal"; break;
      case 8: N = 8; cout << "serpen, 3 quvartal"; break;
      case 9: N = 9; cout << "veresen, 4 quvartal"; break;
      case 10: N = 10; cout << "jovten, 4 quvartal"; break;
      case 11: N = 11; cout << "listopad, 4 quvartal"; break;
      case 12: N = 12; cout << "gruden, 1 quvartal"; break;
      
      default:{
          cout << "\n Vedit nomer vid 1 do 12 \n";
      
      goto Misac;
       }
      }
  
  
  return 0;
}




