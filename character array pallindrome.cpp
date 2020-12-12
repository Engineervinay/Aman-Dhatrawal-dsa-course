#include <iostream>
//character arrays pallindrome,
using namespace std;

int main() {
 
    char a[100];
    int n;
    cin>>n;
    
    cin>>a;
    cout<<a;
    bool palindrome=1;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            palindrome=0;
            break;
        }
    }
    (palindrome)? cout<<" is pallindrome" : cout<<" is not pallindrome";
    
}