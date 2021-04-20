#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

bool matrixSearch(int *ptr,int n,int m,int i,int j,int x)
{
    if( *((ptr+i*m)+j) ==x)
    {
        cout<<i<<" "<<j<<endl;
        return true;
    }    
    else if(x< *((ptr+i*m)+j) )
        return false;
    else if(i==n-1 && j==m-1)
        return false;
    else 
        return matrixSearch(ptr,n,m,i+1,j,x)||matrixSearch(ptr,n,m,i,j+1,x); 
}

int main()
{   
    int n,m;
    cin>>n>>m;
    int i,j;
    int arr[n][m];
    int x;
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    } 
    bool q=matrixSearch(&arr[0][0],n,m,0,0,x);
    cout<<q;
    return 0;
}