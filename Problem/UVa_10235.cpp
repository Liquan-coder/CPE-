//AA - Simply Emirp
#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x){
    for (int y = 2; y * y <= x; ++y){
        if (x % y == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);
    string N;
    
    while (cin >> N){
        
        int a = stoi(N);
        reverse(N.begin(), N.end());
        int b = stoi(N);
        
        if (is_prime(a)){
            if (a != b && is_prime(b)){
                cout << a << " is emirp.";
            }
            else{
                cout << a << " is prime.";
            }
        }
        else{
            cout << a << " is not prime.";
        }
        
        cout << "\n";
    }
    return 0;
}

