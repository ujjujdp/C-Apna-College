#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
// int pow(int b,int e)
// {   if(e==0)
//         return 1;
//     if(e==1)
//         return b;
//     return b*pow(b,e-1);
// }
// bool isPower2(int n)
// {
//     for (int i=0;i<32;i++)
//         if( ( n^pow(2,i)) == 0)
//             return true;
//     return false;
// }

bool isPower2(int n)
{
    // if((n & n-1 )==0)
    //     return true;
    // return false;
    return (n && ~(n&(n-1)));
}
int main()
{   
    cout<<isPower2(0);
    return 0;   
}