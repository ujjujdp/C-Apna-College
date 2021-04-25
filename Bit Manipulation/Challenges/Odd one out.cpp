#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return (n & (1<<pos))!=0 ; 
}

int main()
{   
    int arr[]={2,4,6,3,2,4,8};
    for(int i=0;i<7;i++)
        if(getBit(arr[i],0)==1)
            cout<<arr[i];
    return 0;   
}