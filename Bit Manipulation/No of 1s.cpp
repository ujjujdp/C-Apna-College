#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int noOfOnes(int n)
{
    if(n==0)
        return 0;
    int c=1;
    while(n&(n-1))
    {
        c++;
        n=n&(n-1);
    }
    return c;
}
int main()
{   
    cout<<noOfOnes(35);
    return 0;   
}