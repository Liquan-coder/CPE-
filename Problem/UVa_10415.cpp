#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    unordered_map<char,string>finger=
    {
        {'c',"0111001111"},{'d',"0111001110"},
        {'e',"0111001100"},{'f',"0111001000"},
        {'g',"0111000000"},{'a',"0110000000"},
        {'b',"0100000000"},{'C',"0010000000"},
        {'D',"1111001110"},{'E',"1111001100"},
        {'F',"1111001000"},{'G',"1111000000"},
        {'A',"1110000000"},{'B',"1100000000"}
    };
    cin>>T;
    cin.ignore(); 
    while(T--)
    {
        string song,present;
        present.assign(10,'0'); 
        int cnt[10]; 
        fill(cnt,cnt+10,0); 

        getline(cin,song); 

        for(const auto& ch : song) 
        { 
            for(int i=0;i<10;i++)
            {
                cnt[i]+=max(0,finger[ch][i]-present[i]);
            }
            present=finger[ch];
        }
        
        for(int i=0;i<10;i++)
        {
            if(i) cout<<" ";
            cout<<cnt[i];
        }
        cout<<endl;
    }
}