#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;



string moveX(string s)
{
    string ans;
    string temp;
    temp = s.substr(1);
    if(s.size()==1)
        return s;
    if(s[0]=='x')
    {
        ans = moveX(temp);
        ans += s[0];
    }
    else
    {
        ans = s[0] + moveX(temp);
    }
    return ans;
}
int main()
{
    cout<<moveX("abcxbsxbxxbbxxx");
    return 0;   
}