#include<bits/stdc++.h>
#include<climits>
#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    int i=0;
    int maxLength=0;
    char maxLengthWord[10];
    int currLen=0;
    cin.getline(arr,n);
    cin.ignore();
    for (i=0; i<n+1 ; i++)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currLen>maxLength)
            {
                int k;
                maxLength=currLen;
                for(k=0;k<maxLength;k++)
                    maxLengthWord[k]=arr[i-maxLength+k];
                maxLengthWord[k]='\0';
            }
            currLen=0;
            continue;
        }
        currLen++;
    }
    cout<<maxLength<<endl<<maxLengthWord;
    return 0;   
}   