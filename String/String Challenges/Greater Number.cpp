#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="12345678saf";
    sort(s.begin(),s.end(), greater<int>());
    cout<<s;
    return 0;
}