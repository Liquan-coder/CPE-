//AH - Can You Solve It?
#include<bits/stdc++.h>
using namespace std;
int n;
int x,y,tx,ty;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>tx>>ty;
        int res=0;
        int c1=x+y;
        int c2=tx+ty;
        res+=c2-c1;
        if(c1==c2){
        while(x!=tx||y!=ty) {
            x++;
            y--;
            res++;
        }
      }
      else{
        while(x!=c1||y!=0){
                x++;
                y--;
                res++;
        } 
        for(int p=c1+1;p<c2;p++){
              res+=p;
          }
        if(x!=tx||y!=ty){
          x=0;
          y=c2;
        while(x!=tx||y!=ty) {
            x++;
            y--;
            res++;
       }
        }
    }
        cout<<"Case "<<i<<": "<<res<<'\n';
    }
    return 0;
}
// 3
// 0 0 0 1
// 0 0 1 0
// 0 0 0 2