//AC - Common Permutation
#include<bits/stdc++.h>
using namespace std;
string s1,s2;

int main()
{
    while(getline(cin,s1)&&getline(cin,s2))
    {
        vector<char> v;
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0; i<s1.size(); i++)
        {
            mp1[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++)
        {
            mp2[s2[i]]++;
        }
        for(int i=0;i<26;i++){
            char c=char('a'+i);
            //cout<<c<<' '<<mp1[c]<<' '<<mp2[c]<<'\n';
            if(mp1[c]==0||mp2[c]==0) continue;
            int k=min(mp1[c],mp2[c]);
            for(int i=1;i<=k;i++){
                v.push_back(c);
            }
        }
        sort(v.begin(),v.end());
        for(auto i:v) cout<<i;
        cout<<'\n';
    }

    return 0;
}
