#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return (n & (1<<pos))!=0 ; 
}

int setBit(int n,int pos)
{
    return (n | (1<<pos));
}

int clearBit(int n,int pos)
{
    return (n & (~(1<<pos)));
}

int updateBit(int n,int pos,int x)
{
    // if(x==1)
    //     return (n | (1<<pos));
    // if(x==0)
    //     return (n & (~(1<<pos)));
    n=clearBit(n,pos);
        return (n | (x<<pos));
}

int main()
{   
    cout<<updateBit(7,3,1);
    return 0;   
}