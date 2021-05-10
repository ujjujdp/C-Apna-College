//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int min(int arr[],int n)
{
    int min=INT_MAX;
    for (int i=0;i<n;i++)
        if(arr[i]<min)
            min=arr[i];
    return min;
}

int max(int arr[],int n)
{
    int max=INT_MIN;
    for (int i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

void countSort(int arr[],int n)
{
    int l=min(arr,n);
    int r=max(arr,n);                         // To calculate range
    int range=r-l+1;
    int countArr[range]={0};
    int res[n]={0};
    for(int i=0;i<n;i++)
        countArr[arr[i]-l] ++ ;
    int x=0;
    for(int i=0;i<range;i++)
    {
        x += countArr[i];
        countArr[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        res[--countArr[arr[i]-l]]=arr[i];
    }
    for (int i=0; i<n ; i++)
        cout<<res[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    countSort(arr,n);
   
    return 0;   
}