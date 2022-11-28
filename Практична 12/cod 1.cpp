#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 4;
    int n = 3;
    int arr[m][n];
    
    srand(time(NULL));
    for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        arr[i][j] = rand() % 100;
        cout << arr[i][j] << " ";
        }
    cout << endl;
    }

    for (int i = 0; i < m; i++){
        int d = 0;
    for (int j = 0; j < n; j++){
        if (arr[i][j] == 0){
        }
            
        else if (arr[i][j] % 2 == 0){
            d++;
        }
        }
    cout<<i+1<< " row have "<<d<<" double letters"<<endl;
}
}
