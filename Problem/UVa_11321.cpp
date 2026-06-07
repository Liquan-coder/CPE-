#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,x,a,b;
vector<int> v[2*N];
int main()
{
    while(cin>>n>>m)
    {
        if (n==0&&m==0)
        {
            cout << "0 0" << endl;
            break;
        }
        for(int i=1; i<=n; i++)
        {
            cin>>x;
            if(x%m<=0) v[abs(x%m)+N].push_back(x);
            else v[x%m].push_back(x);
        }
        cout << n << " " << m << endl;
        for(int i=N+m-1; i>=N; i--)
        {
            int odd[N],even[N],cnt1=0,cnt2=0;
            if(v[i].size())
            {
                for(int j:v[i])
                {
                    if(j&1) odd[cnt1++]=j;
                    else even[cnt2++]=j;
                }
                v[i].clear();
                sort(odd,odd+cnt1,greater<int>());
                sort(even,even+cnt2);
                for(int j=0; j<cnt1; j++) cout<<odd[j]<<'\n';
                for(int j=0; j<cnt2; j++) cout<<even[j]<<'\n';
            }
        }
        for(int i=1; i<m; i++)
        {
            int odd[N],even[N],cnt1=0,cnt2=0;
            if(v[i].size())
            {
                for(int j:v[i])
                {
                    if(j&1) odd[cnt1++]=j;
                    else even[cnt2++]=j;
                }
                v[i].clear();
                sort(odd,odd+cnt1,greater<int>());
                sort(even,even+cnt2);
                for(int j=0; j<cnt1; j++) cout<<odd[j]<<'\n';
                for(int j=0; j<cnt2; j++) cout<<even[j]<<'\n';
            }
        }
        
    }
    return 0;
}