//A - The 3n + 1 problem
#include<bits/stdc++.h>
using namespace std;
int a,b;
int x,y;
int sum=0,res=0;
void f(int n){
   if(n==1) return;
   if(n&1) {
    sum++;
    return f(n*3+1);
   }
    else {
      sum++;
      return f(n/2);
   }
}
int main(){
    while(cin>>a>>b){
       res=0;
        x=a;
        y=b;
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++){
       sum=1;
       f(i);
       res=max(res,sum);
    }
    cout<<x<<' '<<y<<' '<<res<<'\n';
}
    return 0;
}