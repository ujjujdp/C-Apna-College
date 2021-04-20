#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int PairSum(vector<int> a,int n,int k)
{
    sort(a.begin(),a.end());
    cout<<endl;
    int l=0;
    int r=n-1;
    int ps=0;
    while(l<r)
    {   ps=0;
        ps=a[l]+a[r];
        if (ps==k)
            return 1;
        else if(ps<k)
            l++;
        else 
            r--;
    }
    return 0;
}

int main()
{
    int n; 
    int k;
    cin>>n>>k;
    vector<int> arr;
    int i;
    for (i=0; i<n ; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<PairSum(arr,n,k);
    return 0;   
}   