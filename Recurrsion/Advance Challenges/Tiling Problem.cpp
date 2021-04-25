#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//Given a 2xn board and tiles of 2x1, count no of ways to tile the given board
int tiling(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int temp;
    temp = tiling(n-2) + tiling(n-1);
    return temp;
}

int main()
{
    int n;
    cin>>n;
    cout<<tiling(n);
    return 0;   
}