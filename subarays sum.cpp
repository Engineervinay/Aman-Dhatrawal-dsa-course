#include <iostream>

using namespace std;
//subarrays

int main() {
    int n,i,j,a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            
        }
	cout<<sum<<endl;
    }
    
}
