/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/

#include <iostream>
//pointers 
using namespace std;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    
    int a=10;
    int *p=&a;
    cout<<*p<<endl;//prints 10
    cout<<p<<endl;//prints address of a
    int **q=&p;//declaring pointer of pointer
    cout<<**q<<endl;//prints 10
    q=&p;
    cout<<**q<<endl;//prints 10
    cout<<*q<<endl;//adress of a
    int b=20;
    int *s;
    p=&a;
    s=&b;
    swap(p,s);//passing pointers
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);//passing adresses
    cout<<a<<" "<<b<<endl;
    
 
    
}
