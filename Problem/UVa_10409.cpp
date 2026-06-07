#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
   while(cin>>n){
        if(n==0) break;
     int top=1,right=3,frn=2;
      for(int i=1;i<=n;i++){
         cin>>s;
         if(s=="south"){
            int cnt=top;
            top=frn;
            frn=7-cnt;
         }
         if(s=="east"){
            int cnt=top;
            top=right;
            right=7-cnt;
         }
         if(s=="west"){
            int cnt=top;
            top=7-right;
            right=cnt;
         }
         if(s=="north"){
            int cnt=frn;
            frn=top;
            top=7-cnt;
         }
      }
      cout<<top<<'\n';
   }
  return 0;
}