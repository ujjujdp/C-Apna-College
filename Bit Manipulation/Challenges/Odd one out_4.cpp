#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos)
{
    return (n|(1<<pos));
}

int main()
{
    int arr[]={1,1,1,2,2,2,5,4,4,4};
    int bits[32]={0};
    int x=0;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        for(int j=0;j<10;j++)
        {
            if(getBit(arr[j],i))
                sum++;
        }
        if(sum%3)
            x=setBit(x,i);
    }
    cout<<x;
    return 0;
}
// int main()
// {   
//     int arr[]={1,1,1,2,2,2,5,4,4,4};
//     int bits[32]={0};
//     for(int i=0;i<10;i++)
//     {   int temp=arr[i];
//         int pos=0;
//         while(temp)
//         {   
//             if(temp & 1)
//             {
//                 bits[pos]++;
//             }
//             temp>>=1;
//             pos++;
//         }
//     }
//     for(int i=0;i<32;i++)
//         cout<<bits[i]<<" ";
//     cout<<endl;
//     int x=0;
//     for(int i=0;i<32;i++)
//     {
//         if(bits[i]%3!=0)
//         {
//             x += 1<<i;
//         }
//     }
//     cout<<x;
//     return 0;   
// }