#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

bool isPrime(int n)
{
    if (n==1)
        return false;
    bool flag=true;
    for (int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            flag=false;
            return flag;
        }
    }
    return flag;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=n;i<=m;i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
    return 0;   
}