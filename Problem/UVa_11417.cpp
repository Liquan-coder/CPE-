#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    return b==0 ? a : GCD(b,a%b);
}
int Gfunc(int N)
{
    int G=0,i,j;
    for(i=1;i<N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            G+=GCD(i,j);
        }
    }
    return G;
}
int main()
{
    int N;
    while(cin>>N&&N!=0)
    {
        cout<<Gfunc(N)<<endl;
    }
    return 0;
}