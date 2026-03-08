#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
int n,m,x,y;
bool st[N][N];
bool v;
char tmp;
string s;
void move(char way){
      if(way=='W') {
        if(x==0&&!st[x][y]) v=true,tmp=way,st[x][y]=true;
        else if(x>=1) x--; 
      }
      else if(way=='N'){
        if(y==m&&!st[x][y]) v=true,tmp=way,st[x][y]=true;
        else if(y<m) y++;
      }
      else if(way=='E'){
        if(x==n&&!st[x][y]) v=true,tmp=way,st[x][y]=true;
        else if(x<n) x++;
      } 
      else if(way=='S'){
        if(y==0&&!st[x][y]) v=true,tmp=way,st[x][y]=true;
        else if(y>=1) y--; 
     }
}
char turn_way(char way,char turn){
   if(way=='N'){
      if(turn=='R') return 'E';
      else if(turn=='L') return 'W'; 
   }
   if(way=='E'){
      if(turn=='R') return 'S';
      else if(turn=='L') return 'N'; 
   }
   if(way=='S'){
      if(turn=='R') return 'W';
      else if(turn=='L') return 'E';
   }
   if(way=='W'){
      if(turn=='R') return 'N';
      else if(turn=='L') return 'S'; 
   }
   return 'k';
}
int main(){
    char start;
    cin>>n>>m;
    memset(st,false,sizeof st);
    while(cin>>x>>y){
        cin>>start;
        cin>>s;
        v=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='F') {
              if(v) break;
              move(start);
            }
            else start=turn_way(start,s[i]);   
        }
        if(v) cout<<x<<' '<<y<<' '<<tmp<<' '<<"LOST\n";
        else cout<<x<<' '<<y<<' '<<start<<'\n';
        
    }

    return 0;
}