#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

bool is_valid(int** arr,int n,int x,int y)
{
    for(int i=0;i<x;i++)
    {
        if(arr[i][y]==1)
            return false;
    }
    for(int i=x,j=y;i>=0 && j>=0;i--,j--)
    {
        if(arr[i][j]==1) 
            return false;
    }
    for(int i=x,j=y ; i>=0  && j<n ; i--,j++)
    {   
        if(arr[i][j]==1)
            return false;
    }
    return true;
}

bool nQueens(int** sol, int n, int x)
{
    if(x==n)
        return true;
    
    for(int j=0;j<n;j++)
    {
        if(is_valid(sol,n,x,j))
        {
            sol[x][j]=1;
            if(nQueens(sol,n,x+1))
            {
                return true;
            }
            sol[x][j]=0;
            
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;

    int** sol=new int*[n];
    for(int i=0;i<n;i++)
    {
        sol[i]=new int[n];
        for(int j=0;j<n;j++)
            sol[i][j]=0;
    }
    bool res = nQueens(sol,n,0);
    if(!res)
    {
        cout<<"NOT Possible";
        return 0;
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cout<<sol[i][j]<<" ";
        cout<<endl;
    }
    return 0;   
}