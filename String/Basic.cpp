#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s="Apna College";
    // s.clear();
    // cout<<s;
    // string s1="fam";
    // string s2="ily";
    // //s1.append(s2);
    // cout<<s1+s2<<" "<<s2;

    // string str1="xyz";
    // string str2="abc";
    // cout<<str2.compare(str1);
    string s1="abcghi";
    cout<<s1<<endl;
    // s1.erase(3,3);
    s1.insert(3,"def");
    cout<<s1.substr(4,2)<<endl;

    string str="786";
    cout<<stoi(str)+2<<endl;

    int x=786;
    cout<<to_string(x)+"2"<<endl;

    string s3="gsednjisHU646DFSA4 HD";
    sort(s3.begin(),s3.end());
    cout<<s3;
    return 0;   
}