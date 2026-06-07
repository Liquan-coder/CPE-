//List of Conquests
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string s;
    map<string,int> mp;

    cin>>T;
    while(T--)
    {
        cin>>s; 
        mp[s]++; 
        getline(cin,s); 
    }
    
    for(auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}