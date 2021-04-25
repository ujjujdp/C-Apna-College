#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;



int main()
{   
    int arr[]={2,4,6,3,2,4,6};
    int xorsum=0;
    for(int i=0;i<7;i++)
        xorsum^=arr[i];
    cout<<xorsum;
    return 0;   
}