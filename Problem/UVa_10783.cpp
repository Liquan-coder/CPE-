//AI - Odd Sum
#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int main(){
  cin>>n;
  for(int j=1;j<=n;j++){
    cin>>a>>b;
    int res=0;
    for(int i=a;i<=b;i++){
        if(i&1) res+=i;
    }
    cout<<"Case "<<j<<": "<<res<<'\n';
  }
  return 0;
}
