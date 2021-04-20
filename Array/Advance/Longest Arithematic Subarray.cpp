//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k=n-1;
    int las[k];
    int i=0;
    int j=0;
    int y=0;
    int ymax[k];
    int l[k];
    int r[k];
    int c=0;
    int max=INT_MIN;
    for (i=0; i<n ; i++)
        cin>>arr[i];
    
    for (i=0; i<k ; i++)
    {
        las[i]=arr[i+1]-arr[i];
    }
    
    for (i=0; i<k ;)
    {   y=0;
        for(j=i;j<k;j++)
        {
            if(las[i]==las[j])
            {    y++;
                if(j==k-1)
                {
                    ymax[c]=y;
                    l[c]=i;
                    r[c]=j+1;
                    c++;
                }
            }
            else
            {
                ymax[c]=y;
                l[c]=i;
                r[c]=j;
                c++;
                break;
            } 
        }
        i+=y;
    }
    int index=0;
    for(i=0;i<c;i++)
    {   if(ymax[i]>max)
        {
            max=ymax[i];
            index=i;
        }
    }

    for(i=l[index];i<=r[index];i++)
        cout<<arr[i]<<" ";
    cout<<endl<<ymax[index]+1;
    /*cout<<endl;
    for (i=0;i<c;i++)
        cout<<ymax[i]<<" ";
    cout<<endl;

    for (i=0;i<c;i++)
        cout<<l[i]<<" ";
    cout<<endl;

    for (i=0;i<c;i++)
        cout<<r[i]<<" ";
    cout<<endl;
    for (i=0; i<k ; i++)
        cout<<las[i]<<" ";*/
    return 0;   
}




/*//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main()
{   int t;
    cin>>t;
    int p=1;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    int k=n-1;
    int las[k];
    int i=0;
    int j=0;
    int y=0;
    int ymax[k];
    int l[k];
    int r[k];
    int c=0;
    int max=INT_MIN;
    for (i=0; i<n ; i++)
        cin>>arr[i];
    
    for (i=0; i<k ; i++)
    {
        las[i]=arr[i+1]-arr[i];
    }
    
    for (i=0; i<k ;)
    {   y=0;
        for(j=i;j<k;j++)
        {
            if(las[i]==las[j])
            {    y++;
                if(j==k-1)
                {
                    ymax[c]=y;
                    l[c]=i;
                    r[c]=j+1;
                    c++;
                }
            }
            else
            {
                ymax[c]=y;
                l[c]=i;
                r[c]=j;
                c++;
                break;
            } 
        }
        i+=y;
    }
    int index=0;
    for(i=0;i<c;i++)
    {   if(ymax[i]>max)
        {
            max=ymax[i];
            index=i;
        }
    }

    //for(i=l[index];i<=r[index];i++)
      //  cout<<arr[i]<<" ";
    cout<<"Case #"<<p++<<": ";
    cout<<ymax[index]+1<<endl;
    }
    /*cout<<endl;
    for (i=0;i<c;i++)
        cout<<ymax[i]<<" ";
    cout<<endl;

    for (i=0;i<c;i++)
        cout<<l[i]<<" ";
    cout<<endl;

    for (i=0;i<c;i++)
        cout<<r[i]<<" ";
    cout<<endl;
    for (i=0; i<k ; i++)
        cout<<las[i]<<" ";*/
    return 0;   
}*/