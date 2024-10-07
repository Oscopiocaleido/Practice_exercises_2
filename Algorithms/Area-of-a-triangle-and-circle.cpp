/*
Write an algorithm that takes as input the base and height of a triangle, the radius of a circle, and
triangle, the radius of a circle, and determines if the triangle has an area greater than the circle.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float triangleBase, triangleHeight, circleRadius;

    cout<<"Enter the triangle base: "<<endl;
    cin>>triangleBase;

    cout<<"Enter the triangle height: "<<endl;
    cin>>triangleHeight;

    cout<<"Enter the circle Radius: "<<endl;
    cin>>circleRadius;

    float triangleArea = (triangleBase * triangleHeight) / 2;
    float circleArea = 3.14 * pow(circleRadius,2);

    if(triangleArea>circleArea){
        cout<<"The area of the triangle which is: "<<triangleArea<< " greater than the area of the circle which is: "<< circleArea<<endl;
    } else {
        if(circleArea>triangleArea){
            cout<<"The area of the circle: "<< circleArea<< " is greater than the area of the triangle which is: "<< triangleArea<<endl;
        } else{
            cout<<"The area of the triangle that is: "<< triangleArea<< " is equal to the area of the circle which is: "<<circleArea<<endl;
        }
    }
    return 0;
}