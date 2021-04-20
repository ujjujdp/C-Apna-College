//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;
    int arr[n][m];
    int b[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    } 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j][i]=arr[i][j];
        }
    }  
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}