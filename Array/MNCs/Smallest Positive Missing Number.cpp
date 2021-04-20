#include<bits/stdc++.h>
#include<climits>
using namespace std;

int SPMN(int a[],int n)
{   
    int c=0;
    int x[1000000]={0};
    for(int i=0;i<n;i++)
        if(a[i]>0)
            x[a[i]]++;
    while(1)
    {
        c++;
        if(x[c]==0)
            return c;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n ; i++)
            cin>>arr[i];
        cout<<SPMN(arr,n)<<endl;
    }

    return 0;   
}