#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void stringReverse(string s)
{
    string temp = s.substr(1);
    if(s.length()==1)
        {cout<<s[0];
        return;}
    else
        stringReverse(temp);
    cout<<s[0];
}

int main()
{
    stringReverse("ujjawal");
    return 0;   
}