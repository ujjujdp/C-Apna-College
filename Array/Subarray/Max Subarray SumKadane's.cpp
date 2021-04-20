//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int a[],int n)
{
        int sum=0;
        int maxSum=INT_MIN;
        int flag=0;
        for(int i=0;i<n;i++)
        {   
            if(a[i]>0)
                flag=1;
            sum += a[i];
            if(sum<0)
                sum=0;  
            maxSum=max(maxSum,sum);
        }

        
        return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for (i=0; i<n ; i++)
         cin>>arr[i];
    cout<<maxSubarraySum(arr,n);
    return 0;   
}   