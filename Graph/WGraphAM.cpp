#include<bits/stdc++.h>
using namespace std;

int AM[10][10]={0};

void addEdge()
{   
    int a;
    int b;
    int w;
    cout<<"Edges between _ and _ with weigth = ";
    cin>>a>>b>>w;
    if ( AM[a][b]!=0 && AM[b][a]!=0 && AM[a][b]==AM[b][a])
        cout<<"Already Connected!!";
    else
        AM[a][b]=AM[b][a]=w;
}
void removeEdge(int a,int b)
{
    AM[a][b]=AM[b][a]=0;
}
void printGraph(int n)s
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i<j)
                if ( AM[i][j]!=0 && AM[j][i]!=0 && AM[i][j]==AM[j][i])
                    cout<<i<<" is connected with "<<j<<" with weight = "<<AM[i][j]<<endl;
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