//498-bis
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        long long int a[200000],f;
        int n,i;
        //intput
        for(n=0;;n++) {
            cin>>a[n];
            if(getchar()=='\n') break; }
        f=a[0]*n;
        for(int i=1;i<n;i++)
        {  
            f=f*x+a[i]*(n-i);
        }

        cout<<f<<"\n";
    }
    return 0;
}