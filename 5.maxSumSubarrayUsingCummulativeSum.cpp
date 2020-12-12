/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/


#include <iostream>
//cumulative sum approach for max sum of subarrays -
using namespace std;

int main() {
    int n,a[100],id[100];
    cin>>n;
    int sum[n];
    cin>>a[0];
    sum[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];            
    }
    int maxsum=0,currentsum;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            currentsum=sum[i]-sum[j];
            maxsum=max(currentsum,maxsum);
            
        }
    }
    cout<<maxsum;
}
