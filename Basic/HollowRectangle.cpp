//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==c || j== 1)
                cout<<"*";
            else
                cout<<" ";
        }   
        cout<<endl;

    }
    return 0;   
}