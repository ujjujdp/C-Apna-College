#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

bool is_valid(int** arr,int n,int i,int j)
{
    if(arr[i][j]==0 || i>=n || j>=n)
        return false;
    return true;
}

bool rat_in_a_maze(int** arr,int n, int i,int j, int** sol)
{
    if(i==n-1 && j==n-1)
    {
        sol[i][j]=1;
        return true;
    }
    if(is_valid(arr,n,i,j))
    {
        sol[i][j]=1;
        if(rat_in_a_maze(arr,n,i+1,j,sol))
        {
            return true;
        }
        if(rat_in_a_maze(arr,n,i,j+1,sol))
        {
            return true;
        }
        sol[i][j]=0;
        return false;
    }
    
    
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++)
        arr[i]=new int[n];

    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin>>arr[i][j];

    int** sol=new int*[n];
    for(int i=0;i<n;i++)
    {
        sol[i]=new int[n];
        for(int j=0;j<n;j++)
            sol[i][j]=0;
    }

    bool res = rat_in_a_maze(arr,n,0,0,sol);
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



// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1