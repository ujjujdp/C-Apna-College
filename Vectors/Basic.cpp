#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it;
    for(auto element : v)
        cout<<element;

    v.pop_back();
    for(auto element : v)
        cout<<element;
    cout<<endl;
    vector<int> v2 (3,50);
    for(auto element : v2)
        cout<<element;
    cout<<endl;
    pair<int,char> p;
    p.first=3;
    p.second='c';
    cout<<p;
    return 0;   
}