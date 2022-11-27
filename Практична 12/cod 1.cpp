#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
int arr[4][3];
int acc = 0;

srand(time(NULL));

for(int i=0; i<4; i++){
    cout << "\n";
for(int j=0; j<3; j++){      
    arr[i][j] = rand() % 101;
    cout << arr[i][j] << " ";
 }
 }
    
for(int i=0; i<4; i++){
    acc = 0;   
for(int j=0; j<3; j++){ 
    acc = 0; 
     if(arr[i][j] % 2 == 0) acc++; 
 }
     cout << "\n" << "acc = " << acc << "\n";
  
}
return 0;
}
