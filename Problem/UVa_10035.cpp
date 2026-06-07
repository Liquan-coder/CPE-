#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
  while(scanf("%d%d",&a,&b)){
    if(a==0&&b==0) break;
    int ope[100]={0};
    int res=0;
    string s1=to_string(a),s2=to_string(b);
    while(s1.size()>s2.size()){
        s2='0'+s2;
    }
    while(s2.size()>s1.size()){
        s1='0'+s1;
    }
    for(int i=s1.size();i>=0;i--){
        int cnt=(s1[i]-'0')+(s2[i]-'0')+ope[i];
        if(cnt>=10) {
            if(i!=0) ope[i-1]=cnt/10;
             res++;
        }
    }
    if(res==0) printf("No carry operation.\n");
    else if(res==1) printf("%d carry operation.\n",res);
    else printf("%d carry operations.\n",res);
  }
   return 0;
}