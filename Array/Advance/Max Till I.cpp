//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mx[n];
    int i=0;
    int max=INT_MIN;
    for (i=0; i<n ; i++)
        cin>>arr[i];
    for (i=0; i<n ; i++)
    {
        if(arr[i]>max)
            max=arr[i];
        mx[i]=max;
    }

    for (i=0; i<n ; i++)
        cout<<mx[i]<<" ";
    return 0;   
}