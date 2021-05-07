//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int temp1[n1]={0};
    int temp2[n2]={0};
    for(int i=0;i<n1;i++)
    {
        temp1[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        temp2[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int m=l;
    while(i<n1 && j<n2)
    {
        if(temp1[i]<temp2[j])
        {
            arr[m++]=temp1[i++];
        }
        else
        {
            arr[m++]=temp2[j++];
        }
    } 
    while(i<n1)
        arr[m++]=temp1[i++];
    while(j<n2)
        arr[m++]=temp2[j++];
}

void mergeSort(int arr[], int l,int r)      
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n ; i++)
        cin>>arr[i];
    mergeSort(arr,0,n-1);
    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
    return 0;   
}