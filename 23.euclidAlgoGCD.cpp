//euclid algorithm to find out gcd
#include <iostream>

using namespace std;

int calcGCD(int n1,int n2){
    while(n2!=0){
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    return n1;
}
int main() {
    int num1,num2;
    cin>>num1>>num2;
    cout<<calcGCD(num1,num2);
    return 0;
}