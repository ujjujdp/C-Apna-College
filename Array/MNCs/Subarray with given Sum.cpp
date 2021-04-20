#include<bits/stdc++.h>
#include<climits>
using namespace std;

/*void subarraySumGiven(int a[],int n ,int s)
{   
    int sum;
    for(int i=0;i<n;i++)
    {   
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==s)
            {
                cout<<i+1<<" "<<j+1;
                return;
            }   
            if(sum>s)
                break;
        }
    }
}*/

void subarraySumGiven(int a[],int n ,int s)
{   
    int sum=0;
	int l=0,r=0;
    for(int i=0;i<n;i++)
    {	
		if (sum==s)	
		{	
			cout<<l+1<<" "<<r;
			return;
		}
		else if(sum<s)
			sum+=a[r++];
		else if(sum>s)
			sum=sum-a[l++];
		
	}
	cout<<-1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int s;
        cin>>n;
        cin>>s;
        int arr[n];
        for (int i=0; i<n ; i++)
            cin>>arr[i];
        subarraySumGiven(arr,n,s);
    }

    return 0;   
}