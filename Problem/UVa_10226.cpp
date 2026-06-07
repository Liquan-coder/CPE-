//Z - Hardwood Species
#include<bits/stdc++.h>
using namespace std;
#define int double
signed main(){
    string a;
    int total, t = 0;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while(t--){
        total = 0;
        map<string, int> n;
        while(getline(cin, a)){
            if(a=="") break;
            n[a]++;
            total++;
        }
        for(auto i : n){
            cout << i.first << " " << fixed << setprecision(4) << i.second / total * 100 << "\n" ;
        }
      if(t!=0)
        cout<<'\n';
    }
    return 0;
}