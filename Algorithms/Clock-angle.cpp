/*
Let's assume an analog clock (with hands). Given the exact time (hours and
minutes), write an algorithm that calculates the angle between the two hands.
For example, at 3:00 the angle will be 90 degrees. At 3:15 the angle will be
7.5 degrees.
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    float minuteHand, hourHand;

    cout<<"Enter the clock hour hand: "<<endl;
    cin>>hourHand;

    cout<<"Enter the clock minute hand: "<<endl;
    cin>>minuteHand;

    float hourAngle, minuteAngle, finalAngle;

    hourAngle = hourHand * 30;
    minuteAngle = minuteHand * 6;
    finalAngle = abs((hourAngle + (minuteAngle / 12)) - minuteAngle);

    cout<<"The angle between both hands is " << finalAngle <<" degrees." <<endl;
    return 0;
}