#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int firstIndex(int arr[],int n, int x)
{
    static int c=-1;
    c++;
    if(n==0)
        return -1;
    if(arr[0]==x)
        return c;
    return firstIndex(arr+1,n-1,x);

}

int lastIndex(int arr[],int n,int x)
{
    static int c=-1;
    if(n==0)
        return -1;
    return lastIndex(arr+1,n-1,x);
    c++;
    if(arr[0]==x)
        return c;

}

int main()
{
    int n;
    int x;
    cin>>n>>x;
    int arr[n];
    for (int i=0;i<n;i++)
        cin>>arr[i];
    int fi=firstIndex(arr,n,x);
    int li=lastIndex(arr,n,x);
    cout<<fi<<" "<<li;
    return 0;   
}