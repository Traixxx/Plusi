#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main(void) {
    int m = 4;
    int n = 7;
    int arr[m][n];
    
    srand(time(NULL));
    
    for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++) {
        arr[i][j] = rand() % 50;
        cout << arr[i][j] << " ";
    }
        cout << endl;
    }
    
    int min = arr[0][0];
    int minn = 0;
    int num = 0;
    
    for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        num++;
        if (arr[i][j] < min){
            min = arr[i][j]; min = num; 
        }
    }
    }
    cout << "Minimum number: "
    << min << endl;
    cout << "Number of number: "
    << minn << endl;
}
