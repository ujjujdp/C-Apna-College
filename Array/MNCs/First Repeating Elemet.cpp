#include<bits/stdc++.h>
#include<climits>
using namespace std;

int mintt(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int firstRepeatingElement(int a[],int n)
{
    if(n==1)
        return -1;
    int elements[n]={0};
    int index[n];
    int flag=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
        index[i]=INT_MAX;

    for(int i=0;i<n;i++)
    {
        elements[a[i]] ++;
        index[a[i]]=mintt(index[a[i]],i) ;
    }

    for(int i=0;i<n;i++)
    {
        if(elements[i]>1)
        {
            min=mintt(min,index[i]);
            flag=1;
        }
    }
    if(flag==1)
        return min+1;
    return -1;
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
        cout<<firstRepeatingElement(arr,n)<<endl;
    }

    return 0;   
}