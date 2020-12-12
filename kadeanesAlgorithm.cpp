#include <iostream>
//kadeanes algorithm for max sum of subarrays -
using namespace std;

int main() {
    int n,a[100];
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>a[i];
         
    }
    int maxsum=0,currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    
        
    cout<<maxsum;
}