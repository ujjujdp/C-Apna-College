#include<bits/stdc++.h>

using namespace std;

bool myCompare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.first<p2.first;
}

int main()
{   
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;
    for(int i=0;i<8;i++)
    {
        v.push_back(make_pair(arr[i],i));   
    }
    //sort(v.begin(),v.end());
    // for(int i=0;i<8;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    sort(v.begin(),v.end(),myCompare);
    for(int i=0;i<8;i++)
    {
        arr[v[i].second]=i;
    }
    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
    return 0;   
}