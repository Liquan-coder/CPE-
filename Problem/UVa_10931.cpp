//Parity
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        
        bitset<32> bits(n); 
        int msb=31;
        while(bits[msb]!=1) msb--;
        cout<<"The parity of ";
        for(int i=msb;i>=0;i--) {
            cout<<bits[i]; }
        cout<<" is "<<bits.count()<<" (mod 2).\n"; 
    }
    return 0;
}