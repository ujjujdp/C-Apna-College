//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int countInversion(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j] && i<j)
                c++;

    return c;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    int res = countInversion(arr,n);
    // for (int i=0; i<n ; i++)
    //     cout<<arr[i]<<" ";
    cout<<res;
    return 0;   
}