//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<x;
            x=1-x;
        }   
        if(i%2==1)
            x=0;
        else    
            x=1;
    
        cout<<endl;

    }
    return 0;   
}