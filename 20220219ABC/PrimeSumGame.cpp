#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

bool is_prime(int n){
    switch(n){
        case 0:
        case 1: return false;
        case 2:
        case 3: return true;
    }
    if(n%2 == 0 || n%3 == 0) return false;

    for(int i = 5; i*i <= n; i+= 6){
        if(n%i == 0) return false;
        if(n%(i+2) == 0) return false;
    }
    return true;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    for(int i = A; i <= B; i++){
        bool allNotPrime = true;
        for(int j = C; j <= D; j++){
            if(is_prime(i + j)){
                allNotPrime = false;
            }
        }
        if(allNotPrime){
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
    return 0;
}