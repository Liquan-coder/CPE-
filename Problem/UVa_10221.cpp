#include <bits/stdc++.h>
using namespace std;
int main()
{
    double s,a,pi=3.14159265359;
    string str;
    while(cin>>s>>a>>str)
    {
        double R=s+6440;
        if(str=="min") 
            a/=60; 
        while(a>=360) 
        {
            a-=360;
        }
        if(a>180) 
            a=360-a;
        cout<<fixed<<setprecision(6)<<R*((a*pi)/180)<<" "<<sqrt(R*R+R*R-2*R*R*cos((a*pi)/180))<<endl;
        
    }
}