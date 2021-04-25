#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m+1]={0};
    for(int i=2;i<=m;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=m;j+=i)
                    arr[j]++;
            
        }
    }

    for(int i=n;i<=m;i++)
        if(arr[i]==0)
            cout<<i<<" ";
    return 0;   
}