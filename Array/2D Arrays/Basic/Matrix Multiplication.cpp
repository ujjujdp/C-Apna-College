//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int i,j;
    int a[n][m];
    int b[m][r];
    int c[n][r];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    } 
    for(i=0;i<m;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            c[i][j]=0;
        }
    } 
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            for(int k=0;k<m;k++)
                c[i][j] += a[i][k]*b[k][j]; 
        }
    }  
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}