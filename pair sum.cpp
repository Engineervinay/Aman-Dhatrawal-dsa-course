#include <iostream>
//pair sum is equal to given number 
using namespace std;

int main() {
    int n,number,i,j;
    int a[n];
    cin>>n>>number;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    int res=0;
    
    
    //brute force approach time complexity n^2
    /*
    for(i =0;i<n-1;i++){
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==number)
            {
                res=1;
                break;
                
            }
        }
    }
    */
    
    
    //for sorted array:
    // using optimized approch like binary search time complexity o(n)
    
    int low=0,high=n-1;
    while(low<high)
    {
        if(a[low]+a[high]==number)
        {
            res=1;
            break;
        }
        else if(a[low]+a[high]<number)
        {
            low++;
        }
        else {
            high--;
        }
    }
    
    
    (res==0)? cout<<"not present" : cout<<"present";
    
}