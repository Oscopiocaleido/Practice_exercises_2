/*Write an algorithm that receives as input the coefficients A, B and C
of a second degree equation (Ax2 + Bx + C = 0), and prints out the values of x on the screen.
the values of x. Assume that the equation always has a solution
in real numbers. Recall that the solution of a second degree equation is given by x
degree equation is given by x −b±√b2−4ac/2a*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float quadratic, lineal, independent ;
    cout<<"Enter the values of coefficients A, B and C."<<endl;
    cin>>quadratic;
    cin>>lineal;
    cin>>independent;

    float discriminant = lineal * lineal - 4 * quadratic * independent;

    float x1 = (-1 * lineal + sqrt(discriminant))/(2*quadratic);
    float x2 = (-1 * lineal - sqrt(discriminant))/(2*quadratic);

    cout<<"The value of x is: "<<x1 <<" if positive and if negative, it is: "<<x2<<endl;
    
    return 0;
}
