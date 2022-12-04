#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 3;
    int n = 3;
    int arr[m][n];
    
    srand(time(NULL));
    
    for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        arr[i][j] = rand() % 50;
        cout << arr[i][j] << " ";
    }
        cout << endl;
    }
    
    int LD = 2;
    int PD = 0;
    int LDS = 0;
    int PDS = 0; 
    
    for (int i = 0; i < 3; i++){
        LDS += arr[LD][i];
        PDS += arr[PD][i];
        LD--;
        PD++;
    }
    cout << "Sum of 'from right to the left' diagonal "
    << LDS << endl;
    cout << "Sum of 'from left to the right' diagonal "
    << PDS << endl;
}
