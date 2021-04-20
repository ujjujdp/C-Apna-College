//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   int t;
    cin>>t;
    int p=1;
    while(t--)
    {   
        int n;
        cin>>n;
        int arr[n];
        int mx[n];
        int i=0;
        int c=0;
        int max=INT_MIN;
        for (i=0; i<n ; i++)
            cin>>arr[i];
        if(n==1 || n==0)
        {
            cout<<"Case #"<<p++<<": ";
            cout<<n<<endl;
            continue;
        }
        for (i=0; i<n ; i++)
        {
            if(arr[i]>max)
                max=arr[i];
            mx[i]=max;
        }
        /*for (i=0; i<n ; i++)
            cout<<mx[i];
        cout<<endl;*/
        for (i=0; i<n ; i++)
        {   
            if(i==0 && arr[i]>arr[i+1])
                c++;
            else if(i==n-1 && mx[i-1]<arr[i])
                c++;
            else if(mx[i-1]<arr[i] && arr[i]>arr[i+1])
                c++;
        }
        cout<<"Case #"<<p++<<": ";
        cout<<c<<endl;
    }
    return 0;   
}