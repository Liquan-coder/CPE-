//F - Fibonaccimal Base
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,x;
const int N=60;
int d[N];
signed main(){
    d[1]=1;
    d[2]=2;
  for(int i=3;i<=N;i++){
     d[i]=d[i-1]+d[i-2];
  }
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      int cnt=0;
      string s;
      cin>>x;
      int t=x;
      for(int j=N-1;j>=1;j--){
        if(x>=d[j]){
            cnt=j;
            break;
        }
        else continue;
      }
      for(int i=cnt;i>=1;i--){
        if(x>=d[cnt]){
            s+='1';
            x-=d[cnt];
        }
        else s+='0';
        cnt--;
      }
      cout<<t<<" = "<<s<<" (fib)"<<'\n';
  }
  return 0;
}