/*
 Jose and Pedro are two frogs. Jose can jump J centimeters and Pedro can jump P centimeters.
 Assuming that both frogs start jumping at the same point (and in the same direction), make an algorithm 
 that determines whether the frogs will coincide at the same point at some point before Jose takes K jumps.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int jose_jump = 0, pedro_distance = 0, jose_distance = 0;

    cout << "Enter the distance Jose can jump: ";
	cin >> jose_distance;
	cout << "Enter the times Jose will jump: ";
	cin >> jose_jump;
	cout << "Enter the distance Pedro can jump: ";
	cin >> pedro_distance;

    if((jose_distance * pedro_distance)<=(jose_distance * jose_jump)){
        cout << "The frogs will meet at the same point before Jose finishes all his jumps." <<endl;
    }else{
        cout << "The frogs will not meet at some point before Jose finishes all his jumps." <<endl;
    }

    return 0;
}