//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;
    int arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }   
    int a,b,c,d;
    a=0;            //Row Start
    b=n-1;          //Row end
    c=0;            //Col Start
    d=m-1;          //Col End
    int x=min(n,m);
    x*=2;
    int k=0;
    for(i=0;i<x;i++)
    {   if(i%4==0)
        {   
            for(j=c;j<=d;j++)
            {     
                cout<<arr[a][j]<<" "; 
            }
            a++;
        }
        else if(i%4==2)
        {   
            for(j=d;j>=c;j--)
            {     
                cout<<arr[b][j]<<" "; 
            }
            b--;
        }
        else if(i%4==1)
        {   
            for(j=a;j<=b;j++)
            {     
                cout<<arr[j][d]<<" "; 
               
            }
            d--;
        }
        else if(i%4==3)
        {   
            for(j=b;j>=a;j--)
            {     
                cout<<arr[j][c]<<" "; 
            }
            c++;
        }
    }
    return 0;
}