#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void subsets(char a[],int n)
{
    for(int i=0; i< (1<<n); i++)
    {
        cout<<"{";
        for(int j=0 ; j<n ; j++)
        {   
            if (i & 1<<j )
                cout<<a[j]<<",";
        }
        cout<<"}"<<endl;
    }
    
}
int main()
{   
    char arr[]={'a','b','c'};
    subsets(arr,3);
    return 0;   
}