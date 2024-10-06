/*Write an algorithm that reads a four-digit number and displays the number written on the back.
the number written on the reverse side. For example, if the number is 4678, the output should be 8764.
output should be 8764.*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <string>

using namespace std;

int main(){
    int number;
    int num1, num2, num3, num4;

    cout<<"Enter a four-digit number: ";cin>>number;
    cout<<endl;
    
    num1 = number / 1000;
    number = number % 1000;
    num2 = number / 100;
    number = number %100;
    num3= number / 10;
    num4 = number % 10;
    cout<<"The inverse number would be: "<<num4<<num3<<num2<<num1;
    return 0;
}