/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/

#include <iostream>
//bit manipulation - check if given number is power of two
using namespace std;

int main() {
    //if number has only 1 bit is set (1) and number-1 & number is 0.
    int a;
    cin>>a;
    if(a&&!(a & a-1))
    {
        cout<<" it is power of two";
        
    }
    else
        cout<<" not";
}
