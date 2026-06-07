//AQ - Cola
#include<bits/stdc++.h>
using namespace std;
int cola;
int main(){
    while(cin>>cola){
    int sum=0;
    int bottle=0;
    while(cola>0){
       sum+=cola;
       bottle+=cola;
       cola=bottle/3;
       bottle=bottle%3;
    }
    if(bottle==2) sum+=1;
    cout<<sum<<'\n';
    }
    return 0;
}