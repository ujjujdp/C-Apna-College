//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void WaveSort(int arr[],int n)
{
    for(int i=1;i<n;i+=2)
    {
        if(arr[i]<arr[i-1])
            swap(arr[i],arr[i-1]);
        if(arr[i]>arr[i+1] && i<=n-2)
            swap(arr[i],arr[i+1]);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    WaveSort(arr,n);

    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
   
    return 0;   
}