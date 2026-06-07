//Cheapest Base
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T1,T2,X=1; 
    cin>>T1; 
    while(X<=T1)
    {
        cout<<"Case "<<X<<":\n";

    
        int cost[36];
        for(int i=0;i<36;i++) {
            cin>>cost[i]; } 

        cin>>T2; 
        while(T2--)
        {
            int Y;
            cin>>Y; 

          
            int r,min=0;
            int table[40]={0};
            for(int i=2;i<=36;i++) 
            {

                int a=Y,sum=0;
                while (a!=0) 
                {
                    r=a%i; 
                    sum+=cost[r];
                    a/=i;
                }
                if(min==0||sum<=min) 
                {
                    table[i]=sum;
                    min=sum;
                }
            }
            
            cout<<"Cheapest base(s) for number "<<Y<<":";
            for(int i=2;i<=36;i++)
            {
                if(table[i]==min) 
                {
                    cout<<" "<<i;
                }
            }
            cout<<"\n";
        }
        if(X<T1){
            cout<<"\n";}
        X++;
    }
}