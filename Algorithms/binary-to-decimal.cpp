/*
Write an algorithm that transforms a four-bit binary number to a decimal number.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int binaryNumber, num1, num2, num3, num4;
    float decimalNumber;
    cout<<"Write a four-bit binary number: "<<endl;
    cin>>binaryNumber;

    num1 = binaryNumber / 1000;
    binaryNumber = binaryNumber % 1000;
    num2 = binaryNumber / 100;
    binaryNumber = binaryNumber % 100;
    num3 = binaryNumber / 10;
    num4 = binaryNumber % 10;

    decimalNumber =  (num4 * pow(2,0)) + (num3 * pow(2,1))  + (num2 * pow(2,2)) + (num1 * pow(2,3)) ;

    cout<<"The binary number in decimal is equal to: "<<decimalNumber;

    return 0;
}

