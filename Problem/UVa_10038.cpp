//J - Jolly Jumpers
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n;
int a[N];
int main()
{
    while(cin>>n)
    {
        bool h=true;
        for(int i=1; i<=n; i++) cin>>a[i];
       
        vector<int> v;
        for(int i=n; i>1; i--)
        {
            v.push_back(abs(a[i]-a[i-1]));
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n-1; i++)
        {
            if(i+1!=v[i]) h=false;
        }
        if(h) cout<<"Jolly\n";
        else cout<<"Not jolly\n";
    }
    return 0;
}