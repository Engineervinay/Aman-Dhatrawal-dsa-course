#include <iostream>
//bit manipulation - counting number of one's
using namespace std;

int main() {
    //do a=a&a-1 till a becomes 0
    int a;
    cin>>a;
    int count=0;
    while(a!=0)
    {
        a=a&a-1;
        count++;
    }
    cout<<count;
}