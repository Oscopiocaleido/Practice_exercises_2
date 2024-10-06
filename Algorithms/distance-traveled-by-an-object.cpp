/*
Write an algorithm that, given the distance traveled by an object and the time it took the object to travel that distance, calculates its velocity.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float velocity, distance, time;

    cout<<"Enter the distance traveled by the object: "<<endl;
    cin>>distance;

    cout<<"Enter the time it took for the object to travel that distance: "<<endl;
    cin>>time;

    velocity = distance / time;

    cout<<"The object's velocity is:"<<velocity<<endl;
    return 0;
}