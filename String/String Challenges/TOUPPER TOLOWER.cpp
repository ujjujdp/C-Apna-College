#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string to_upper(string s)
{
    for(int i=0;i<s.length();i++)
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32;
        return s;
}

string to_lower(string s)
{
    for(int i=0;i<s.length();i++)
        if(s[i]>=65 && s [i]<=90)
            s[i]+=32;
    return s;
} 
int main()
{
    string str="AbCdEf";
    cout<<to_upper(str)<<endl;
    cout<<to_lower(str)<<endl;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin()+3,str.end(),str.begin()+3,::tolower);
    cout<<str<<endl;
    return 0;
}