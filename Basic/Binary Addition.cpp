#include<bits/stdc++.h>
using namespace std;
int binaryAddition(int a,int b)
{
    int res=0;
    int prevcarry=0;
    int x,y;
    int c=0;
    while(a>0 || b>0)
    {   
        x=a%10;
        y=b%10;
        res+=(x^y^prevcarry)*pow(10,c);
        prevcarry= (x&y) | prevcarry&(x^y);
        c++;
        a/=10;
        b/=10;
    }
    /*if(a>0)
    {
        res=a*pow(10,(c+1)) + res;
    }
    else if(b>0)
    {
        res=b*pow(10,(c+1)) + res;
    }*/
    return res;

}
int main()
{
    int a=1010;
    int b=111;
    int res=binaryAddition(a,b);
    cout<<res<<endl;
    return 0;   
}