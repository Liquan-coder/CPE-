#include<bits/stdc++.h>
using namespace std;
int n,p;
int a[100];
int main(){
   cin>>p;
   while(p--){
      cin>>n;
      int res=0;
      for(int i=1;i<=n;i++) cin>>a[i];
      for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
           if(a[j]>a[j+1]) res++,swap(a[j],a[j+1]);
        }
      }
      cout<<"Optimal train swapping takes "<<res<<" swaps."<<'\n';
    }
    return 0;
}