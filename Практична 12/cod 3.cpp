#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 5;
    int n = 7;
    int arr[m][n];
    
    srand(time(NULL));
    
for (int i = 0; i < m; i++){
for (int j = 0; j < n; j++){
    arr[i][j] = rand() % 50;
    cout << arr[i][j] << " ";
}
    cout << endl;
}
for (int i = 0; i < m; i++){
    int s = 0;
for (int j = 0; j < n; j++){
    s += arr[i][j];
}
    cout<<"sum of the row"<< i+1 <<" is "<<s<<endl;
}
