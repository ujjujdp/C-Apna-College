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
    int x = s[0];
    string temp2 = to_string(x);
    substrings(temp,ans);
    substrings(temp,ans+s[0]);
    substrings(temp,ans+temp2);
    
}

int main()
{
    substrings("AB","");
    return 0;   
}