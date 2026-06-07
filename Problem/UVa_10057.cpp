//O - A mid-summer night's dream.
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;
int a[N];
int main()
{
    while(cin>>n)
    {
        int a1=0,a2=0,a3=0;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int l,r;
        if(n&1) {
            l=a[n/2];
            r=a[n/2];
        }
        else{
            l=a[n/2-1];
            r=a[n/2];
        }
        a1=l;
        for(int i=0;i<n;i++){
            if(a[i]<=r&&a[i]>=l) a2++;
        }
        a3=r-l+1;
        cout<<a1<<' '<<a2<<' '<<a3<<'\n';
    }

    return 0;
}
