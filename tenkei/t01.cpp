#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int N, L, K;
vector<int> a;

bool judge(int m){
    int l, last=0;
    int pieces = 1;
    rep(i, 0, N){
        l = a.at(i) - last;
        if(l >= m && L - a.at(i) >= m){
            pieces++;
            last = a.at(i);
        }
    }
    if(pieces >= K+1) return true;
    else return false;
}

int main() {
    cin >> N >> L >> K;
    a = vector<int>(N);
    rep(i, 0, N) cin >> a.at(i);
    
    int left = -1, right = L+1;
    int mid;
    for(int i=0; right - left > 1; i++){
        mid  = left + (right - left)/2;
        if(judge(mid)){
            left = mid;
        }else{
            right = mid;
        }
    }
    cout << left << endl;
    return 0;
}