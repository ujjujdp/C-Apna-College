#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void notilln(int n)
{
    if (n==0)
        return ;

    notilln(n-1);
        cout<<n<<" ";

}

int main()
{
    int n;
    cin>>n;
    notilln(n);
    return 0;   
}