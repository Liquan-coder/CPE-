//P - Tell me the frequencies!
#include<bits/stdc++.h>
using namespace std;
string s;
typedef pair<int,int> PII;
bool cmp(PII x,PII y){
   if(x.second==y.second) return x.first>y.first;
   else return x.second<y.second;
}
bool v=true;
int main(){
   while(getline(cin,s)){
    if(!v) cout<<'\n';
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int c=0;
    PII a[111000];
    for(auto i:mp){
        a[c].first=int(i.first);
        a[c].second=i.second;
        c++;
    }
     sort(a,a+c,cmp);
    for(int i=0;i<c;i++){
       cout<<a[i].first<<' '<<a[i].second<<'\n';
    }
      v=false;
    }
    return 0;
}