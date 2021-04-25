#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return (n & (1<<pos))!=0; 
}

int main()
{   
    int arr[]={2,4,6,125,7,2,4,6};
    int xorsum=0;
    int xorsum1=0;
    for(int i=0;i<8;i++)
        xorsum^=arr[i];
    int pos=0;
    int setbit=0;
    int k=xorsum;
    while(!setbit)
    {
        setbit = xorsum & 1;
        pos++;
        xorsum>>=1;
    }
    pos--;
    for(int i=0;i<8;i++)
        if(getBit(arr[i],pos)==1)
            xorsum1^=arr[i];
    cout<<xorsum1<<" "<<(xorsum1^k);
    return 0;   
}