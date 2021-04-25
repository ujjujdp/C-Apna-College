#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int spf[n+1]={0};
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
                if(spf[i]==0)
                    spf[j]=i;
            
        }
    }
    while(n!=1)
    {
        if(spf[n]==0)
            cout<<n;
        else
            cout<<spf[n]<<" ";
        
        n=n/spf[n];
    }

    return 0;   
}