#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void pies(string s)
{
    string temp;
    if(s[0]=='p' && s[1]=='i')
    { 
        cout<<"3.14";
        temp = s.substr(2);
    }
    else 
    {
        cout<<s[0];
        temp = s.substr(1);
    }    
    if(s.length()==2)
        return;
    pies(temp);
}

int main()
{
    pies("pisdgsdpidsgpi");
    return 0;   
}