#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n1= 0, n2= 1;
    int limit = 89;
    int count = 0;

    cout<<n1<<endl;
    cout<<n2<<endl;

    while(count<limit){  
        count = n1 + n2;  

        cout<<count<<endl;

        n1 = n2;
        n2 = count;
    }

    return 0;
}