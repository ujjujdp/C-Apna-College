//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k=n*(n+1)/2;
    int subsum[k];
    int c=0;
    int sum=0;
    int i=0;
    int j=0;
    for (i=0; i<n ; i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {   sum=0;
        for(j=i;j<n;j++)
        {
            sum+=arr[j];
            subsum[c++]=sum;
        }
    }
    for (i=0; i<k ; i++)
        cout<<subsum[i]<<" ";
    return 0;   
}