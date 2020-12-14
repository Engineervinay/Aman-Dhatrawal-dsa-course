/*********************************
github repository:
https://github.com/Engineervinay/Placement-Preparation-Course-cpp
*********************************/


#include <iostream>
//print matrix in spiral order
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
    int rowstart=0,rowend=n-1,colstart=0,colend=m-1;
    while(rowstart<=rowend && colstart<= colend)
    {
        //printing upper row 
        for(i=colstart;i<=colend;i++)
        {
            cout<<a[rowstart][i]<<" ";
            
        }
        //right side col
        rowstart++;
        for(i=rowstart;i<=rowend;i++)
        {
            cout<<a[i][colend]<<" ";
        }
        //down side row
        colend--;
        for(i=colend;i>=colstart;i--)
        {
            cout<<a[rowend][i]<<" ";
        }
        //left side col
        rowend--;
        for(i=rowend;i>=rowstart;i--){
            cout<<a[i][colstart]<<" ";
        }
        colstart++;
    }
    
}



/* **********input***************
5 6
1 5 7 9 10 11 6 10 12 13 20 21 9 25 29 30 32 41 15 55 59 63 68 70 40 70 79 81 95 105
output:
1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 
*/
