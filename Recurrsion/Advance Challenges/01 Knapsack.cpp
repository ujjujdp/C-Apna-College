#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int value[]={100,50,150,100};
int wt[]={10,20,30,40};

int knapsack_01(int W)
{
    static int i=0;
    if(i==4)
    {
        return 0;
    }
    int W1 = W1 - wt[i];
    i++;
    if(W1<0)
        return knapsack_01(W);
    else
        return max(value[i-1] + knapsack_01(W1) , knapsack_01(W));
}
int main()
{
    int W;
    cin>>W;
    cout<<knapsack_01(W);
    return 0;   
}