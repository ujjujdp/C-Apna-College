#include<bits/stdc++.h>
using namespace std;

bool AM[10][10]={0};

void addEdge()
{   
    int a;
    int b;
    cout<<"Edges between _ and _ ";
    cin>>a>>b;
    if ( AM[a][b]==1 && AM[b][a]==1)
        cout<<"Already Connected!!";
    else
        AM[a][b]=AM[b][a]=1;
}
void removeEdge(int a,int b)
{
    AM[a][b]=AM[b][a]=0;
}
void printGraph(int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i<j)
                if ( AM[i][j]==1 && AM[j][i]==1)
                    cout<<i<<" is connected with "<<j<<endl;
}
void printAM(int n)
{
    for(int i=0;i<n;i++)
    {    
        for(int j=0;j<n;j++)
        {    cout<<AM[i][j]<<" ";
        }
        cout<<endl;
    }        
}
int main()
{
    
    int n;
    cout<<"#Nodes(<=10)=";    
    cin>>n;
    int e;
    cout<<"#Edges=";    
    cin>>e;
    printAM(n);
    for(int i=0;i<e;i++)
    {   
        addEdge();
    }
    printAM(n);
    printGraph(n);    
    return 0;
}