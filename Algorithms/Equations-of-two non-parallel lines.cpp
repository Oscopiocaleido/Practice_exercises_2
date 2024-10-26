/*
Given the equations of two non-parallel lines y = m1x+b1 and y = m2x+b2, write an algorithm that computes their intersection point.
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    int m1, b1, m2, b2;
    float x=0, y=0;
    cout<<"Enter the value of m1: "<<endl;
    cin>>m1;
    cout<<"Enter the value of b1: "<<endl;
    cin>>b1;
    cout<<"Enter the value of m2: "<<endl;
    cin>>m2;
    cout<<"Enter the value of b2: "<<endl;
    cin>>b2;

    x = (b2 - b1) / (m1 + m2);

    y= m1 * x + b1;

    cout<<"Therefore, the two lines intersect at point: "<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}