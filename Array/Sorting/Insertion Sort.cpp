//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
void insertionSort(int a[],int n)
{   
    int i,j;
    int temp;
    for(i=1;i<n;i++)
    {
        for(j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            else        
                break;
        }
    }
}   

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    insertionSort(arr,n);

    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
    return 0;   
}