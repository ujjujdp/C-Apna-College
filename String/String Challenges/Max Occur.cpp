#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abcgsddfbsadvdsvvvvvabcade";
    int maxTimes=0;
    int curr=0;
    char ans;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        curr++;
        if(curr>maxTimes)
        {
            maxTimes=curr;
            ans=s[i];
        }
        if(s[i]!=s[i+1])
            curr=0;
    }
    cout<<ans<<"->"<<maxTimes;
    return 0;
}