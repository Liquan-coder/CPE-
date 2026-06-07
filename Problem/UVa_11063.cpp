#include<bits/stdc++.h>
using namespace std;
const int N=110;
int n,a[N],cnt=0;
int main()
{
    while(cin>>n)
    {
        cnt++;
        unordered_map<int,int> mp;
        bool v=false,k=false;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]<1) k=true;
            if(i>1){
                if(a[i-1]>=a[i]) k=true;
            }
        }
        for(int i=1; i<n; i++)
        {
            for(int j=i; j<=n; j++)
            {
                mp[a[i]+a[j]]++;
                if(mp[a[i]+a[j]]>1) v=true;
            }
        }
        if(!v&&!k) cout<<"Case #"<<cnt<<": It is a B2-Sequence."<<'\n';
        else cout<<"Case #"<<cnt<<": It is not a B2-Sequence."<<'\n';
  cout<<'\n';
    }
    return 0;
}