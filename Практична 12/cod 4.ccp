#include <iostream>
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() 
{
    int m=4;
    int n=6;
    int s[n];
    int arr[m][n];
    
    srand(time(NULL));
    
for(int i=0;i<n;i++){
    s[i] = 0;
}    
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
    arr[i][j]= rand()%50;
    cout << arr[i][j] << " ";
}
    cout << endl;
}
for(int i=0;i<m;i++){
for (int j = 0; j < n; j++){
    sum[j] += arr[i][j];
}
}
for(int j=0;j<n;j++){
    cout <<"sum of the line"<<j+1<< " is "<<s[j]<<endl;
}
}
