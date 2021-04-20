//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int a[],int n)
{
        int i,j;
        int maxSum=INT_MIN;
        int sum=0;  
        int cs[n+1]={0};
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            cs[i+1]=sum;
        }
        for(i=1;i<=n;i++)
        {   sum=0;
            for(j=0;j<i;j++)
            {    
                sum=cs[i]-cs[j];
                maxSum=max(maxSum,sum);
            }
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