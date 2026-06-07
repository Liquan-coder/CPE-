#include<bits/stdc++.h>
using namespace std;
int n,t;
int a[100000];
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
   int res=INT_MAX;
   for(int i=1;i<=n;i++)
   {
       int cnt=0;
       for(int j=1;j<=n;j++){
        cnt+=abs(a[i]-a[j]);
       }
       res=min(cnt,res);
   }
   cout<<res<<'\n';
  }
  return 0;
}
