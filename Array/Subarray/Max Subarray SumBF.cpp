//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int a[],int n)
{
        int i,j;
        int max=INT_MIN;
        int sum=0;  
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {   sum=0;
                for(int k=i;k<=j;k++)
                    sum+=a[k];
                if(sum>max)
                    max=sum;
            }
        }
        
        return max;
}

int main()
{
    int n;
    //cin>>n;
    n=9;
    int arr[n]={-2,1,-3,4,-1,2,1,-5,4};
    int i=0;
    //for (i=0; i<n ; i++)
      //  cin>>arr[i];
    
    cout<<maxSubarraySum(arr,n);
    return 0;   
}