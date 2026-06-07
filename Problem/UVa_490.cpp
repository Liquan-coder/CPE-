//E - Rotating Sentences
#include<bits/stdc++.h>
using namespace std;
string s;
vector<string> v;
vector<int> row;
int main(){
  int cnt=0;
  while(getline(cin,s)){
    if(!s.size()) break;
    int k=s.size();
    cnt = max(cnt, k);
    row.push_back(k);
    v.push_back(s);
 }
   for(int i=0;i<cnt;i++){
     for(int j=v.size()-1;j>=0;j--){
        if(row[j]<=i) cout<<' '; 
        else cout<<v[j][i];
     }
     cout<<'\n';
   }
 return 0;
}
