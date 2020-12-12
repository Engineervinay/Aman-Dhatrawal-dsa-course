#include <iostream>
//bit manipulation - all number are present twice except one print that number
using namespace std;

int main() {
    // using xor operator ^ -xor operator
    int a[]={2,2,6,5,5,6,4};
    int xorsum=0;
    for(int i=0;i<7;i++)
    {
        xorsum=xorsum^a[i];
    }
    cout<<xorsum;
    
    
}