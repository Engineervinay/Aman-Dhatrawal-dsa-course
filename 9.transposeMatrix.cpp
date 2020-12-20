/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/


#include <iostream>
//transpose of matrix
using namespace std;

int main() {
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"before: \n";
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"after: \n";
    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
/*input:
3 3
1 2 3 4 5 6 7 8 9

output:
before: 
1 2 3 
4 5 6 
7 8 9 
after: 
1 4 7 
2 5 8 
3 6 9 
*/

