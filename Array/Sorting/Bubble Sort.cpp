//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
void bubbleSort(int a[],int n)
{   
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)      
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;  
            }
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
    bubbleSort(arr,n);

    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
    return 0;   
}