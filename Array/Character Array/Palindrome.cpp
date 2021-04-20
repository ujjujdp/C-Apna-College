#include<bits/stdc++.h>
#include<climits>
using namespace std;


int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    int i=0;
    bool flag=true;
    cin>>arr;
    for (i=0; i<n/2 ; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"Palindrome";
    else    
        cout<<"Not Palindrome";
    return 0;   
}   