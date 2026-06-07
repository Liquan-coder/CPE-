//C - TEX Quotes
#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    bool v=true;  
  while(getline(cin,s)){
    for(int i=0;i<s.size();i++){
        if(s[i]=='\"'&&v) {
            cout<<"``";
            v=false;
        }
        else if(s[i]=='\"'&&!v){
            cout<<"''";
            v=true;
        }
        else cout<<s[i];
      }
      cout<<'\n';
  }
    return 0;
}
