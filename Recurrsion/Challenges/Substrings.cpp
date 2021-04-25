#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void substrings(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    string temp = s.substr(1);
    substrings(temp,ans);
    substrings(temp,ans+s[0]);
    
}

int main()
{
    substrings("ABC", "");
    return 0;   
}