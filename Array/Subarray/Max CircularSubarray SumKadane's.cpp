//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int a[],int n)
{
        int sum=0;
        int maxSum=INT_MIN;
        int flag=0;
        int x=a[0]+a[n-1];
        if(x>0)
            flag=1;
        if(flag==0)
        {    
            for(int i=0;i<n;i++)
            {   
                sum += a[i];
                if(sum<0)
                    sum=0;  
                maxSum=max(maxSum,sum);
            }
        }
        else
        {
            for(int i=0;i<n;i++)
                a[i]*= (-1);
            
            for(int i=0;i<n;i++)
            {   
                sum += a[i];
                if(sum<0)
                    sum=0;  
                maxSum=max(maxSum,sum);
            }
            for(int i=0;i<n;i++)
                a[i]*= (-1);
            int realsum=0;
            for(int i=0;i<n;i++)
                realsum+=a[i];
            maxSum=realsum+maxSum;
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