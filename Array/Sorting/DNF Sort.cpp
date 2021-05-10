//#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

void DNFSort(int arr[],int n)
{
    int low=0;              //Start of 1s
    int mid=0;              //Start of unknowns
    int high=n-1;           //Start of 2s
    while(1)
    {
        if(mid==high)
            break;
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;

        }
        else if(arr[mid]==2)
        {
            swap(arr[high],arr[mid]);
            high--;
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
    DNFSort(arr,n);

    for (int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
   
    return 0;   
}