#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	const int m = 12;
	int array[m] = { -3, 12, 65, 1, 70, 11, 23, 30, 50, 20, 10, 40 };
 
	std::sort(array, array+m);
	
 
	for (int i=0; i < m; ++i)
		std::cout << array[i] << ' ';
 

	
	int maxId = 0;

	  for (int j = 0; j < maxId; j++)
        	std::cout << array[j] << ' ';
        		
	
    
    	return 0;
}
