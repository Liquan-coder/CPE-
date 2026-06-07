#include<bits/stdc++.h>
using namespace std;
const int N=1100;
int n,m,cnt=1;
char g[N][N];
int a[N][N];
bool v=false;
int dx[8]={1,0,-1,0,1,1,-1,-1},dy[8]={0,1,-1,-1,-1,1,0,1};
int main(){
    while(cin>>n>>m){
        if(n==0&&m==0) 
        {
            break;
        }
       for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>g[i][j];
        }
       }
       memset(a,0,sizeof a);
      for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(g[i][j]=='*'){
                a[i][j]=-1;
                for(int k=0;k<=7;k++){
                    int x=i+dx[k],y=j+dy[k];
                    if(x<=n&&x>=1&&y>=1&&y<=m&&a[x][y]!=-1) a[x][y]+=1; 
                }
            }
        }
       }
        if(v) cout<<'\n';
        cout<<"Field #"<<cnt<<":"<<'\n';
        for(int i=1;i<=n;i++){
           for(int j=1;j<=m;j++){
             if(a[i][j]==-1) cout<<'*';
             else cout<<a[i][j];
           } 
           cout<<'\n';
        }
        v=true;
        cnt++;
    }
    return 0;
}