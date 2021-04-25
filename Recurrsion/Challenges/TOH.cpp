#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void TOH(int n,char src,char aux,char des)
{
    if(n==1)
        cout<<"Move disk from "<<src<<" to "<<des<<endl;
    else
    {
        TOH(n-1,src,des,aux);
        cout<<"Move disk from "<<src<<" to "<<des<<endl;
        TOH(n-1,aux,src,des);
    }
}

int main()
{
    TOH(3,'A','B','C');
    return 0;   
}