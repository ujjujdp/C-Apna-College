#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//Given a 2xn board and tiles of 2x1, count no of ways to tile the given board
int pairUp(int n)
{
    if(n<=2)
        return n;

    return pairUp(n-1) + (n-1)*pairUp(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<pairUp(n);
    return 0;   
}