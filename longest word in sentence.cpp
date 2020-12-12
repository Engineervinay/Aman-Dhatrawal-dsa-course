#include <iostream>
//longest word in sentence
using namespace std;

int main() {
 
    char a[100];
    int n;
    cin>>n;
    cin.ignore();//to ignore/clear characters from input buffer.
    cin.getline(a,n);//for input of sentense
   
    cout<<a<<endl;
    int maxlength=0,currentlength=0,i=0;
    while(1)
    {
        if(a[i]==' ' || a[i]=='\0'){
            maxlength=max(currentlength,maxlength);
            currentlength=0;
        }
        else
            currentlength++;
        if(a[i]=='\0')
            break;
        i++;
            
    }
    cout<<maxlength;
}