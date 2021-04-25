#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int gcdEuclids(int a,int b)
{
    int rem;
    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;       
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcdEuclids(max(a,b),min(a,b));
    return 0;   
}