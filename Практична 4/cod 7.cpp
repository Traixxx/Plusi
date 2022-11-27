// Example program
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    
    float ch1 = 2.3;
    float ch2 = 2.3;
    float ch3 = 2.123456;
    float ch4 = 2.123456;
    float ch5 = 2.123456;

    printf("%.1f \n", ch1); 
    //1 знак після коми
    printf("%.2f \n", ch2);
    //2 знаки після коми
    printf("%f \n", ch3);
    //усі знаки після коми
    printf("%.2f \n", ch4);
    //2 знаки після коми
    printf("%.f \n", ch5);
    // число без десятих

return 0;
}

