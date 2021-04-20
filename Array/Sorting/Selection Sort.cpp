//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
void selectionSort(int a[],int n)
{   
    int min=INT16_MAX;
    int index=0;
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                index=j;
            }
        }
        temp=a[i];
        a[i]=a[index];
        a[index]=temp;  
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    selectionSort(arr,n);

    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
    return 0;   
}