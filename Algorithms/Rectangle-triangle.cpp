/*
Write an algorithm that, given the lengths of the legs of a right triangle, calculates the length of its hypotenuse.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float a, b;
    cout<<"Enter the value of leg a: "<<endl;
    cin>>a;
    cout<<"Enter the value of leg b: "<<endl;
    cin>>b;

    float h=sqrt((a * 2)+(b * 2));
    
    cout<<"The length of the hypotenuse is: "<<h<<endl;
    return 0;
}