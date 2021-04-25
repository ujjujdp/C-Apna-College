#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

// void removeDuplicates(string s)
// {
//     static int i=0;
//     if(i==0)
//         cout<<s[0];
//     i++;
//     if(s.size()==1)
//         return;
//     if(s[0]!=s[1])
//     {
//         cout<<s[1];
//     }
//     string temp = s.substr(1);
//     removeDuplicates(temp);
//     i++;
// }

string removeDuplicates(string s)
{
    string ans;
    if(s.size()==1)
        return s;
    if(s[0]==s[1])
    {
        string temp = s.substr(1);
        ans = removeDuplicates(temp);
    }
    else 
    {
        string temp = s.substr(1);
        ans = s[0] + removeDuplicates(temp);
    }
    return ans;
}
int main()
{
    cout<<removeDuplicates("abbcccccccgggggeeeeedsddeeee");
    return 0;   
}