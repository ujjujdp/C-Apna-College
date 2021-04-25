#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool sortedArray(int arr[],int n)
{
    if(n==1)
        return true;
    if (arr[0]<=arr[1])
        return sortedArray(arr+1,n-1);
    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    bool ans=sortedArray(arr,n);
    cout<<ans;
    return 0;   
}