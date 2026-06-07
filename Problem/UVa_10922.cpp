//AL - 2 the 9s
#include<bits/stdc++.h>
using namespace std;
int degree=0;
bool v=true;
void dfs(string s)
{
    degree++;
    int k=0;
    for(int i=0; i<s.size(); i++)
    {
        k+=s[i]-'0';
    }
    if(k%9==0) v=false;
    if(k<=10) return;
    dfs(to_string(k));

}
int main()
{
    string x;
    while(cin>>x)
    {
        if(x[0]=='0') break;
        degree=0;
        v=true;
        dfs(x);
        if(v) cout<<x<<" is not a multiple of 9.\n";
        else cout<<x<<" is a multiple of 9 and has 9-degree "<<degree<<'.'<<'\n';
    }
    return 0;
}
