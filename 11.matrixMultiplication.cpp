/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/

#include <iostream>
//matrix multiplication
using namespace std;

int main() {
    int n1=3,n2=4,n3=3;
   
    
    int a[n1][n2];
    int b[n2][n3];
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>b[i][j];
        }
    }
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]+=a[i][k]*b[k][j];
            }
            
        }
    }
    
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
/*
input:
2 4 1 2
8 4 3 6
1 7 9 5
1 2 3
4 5 6 
7 8 9
4 5 6

output:
33 42 51 
69 90 111 
112 134 156 
*/
