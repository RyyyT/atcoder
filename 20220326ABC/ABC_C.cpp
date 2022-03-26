#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    rep(i, 0, N) cin >> a[i];
    rep(i, 0, N) cin >> b[i];

    bool can = true;
    int ue = a[0], sita = b[0];
    for(int i = 0; i<N; i++){
        if(ue == -1 && sita == -1){ 
            break;
        }else if(ue == -1){
            if(abs(a[i+1] - sita) <= K) ue = a[i+1];
            else ue = -1;

            if(abs(b[i+1] - sita) <= K) sita = b[i+1];
            else sita = -1;            
        }else if(sita == -1){
            if(abs(a[i+1] - ue) <= K) ue = a[i+1];
            else ue = -1;

            if(abs(b[i+1] - ue) <= K) sita = b[i+1];
            else sita = -1;   
        }else{
            if(abs(a[i+1] - ue) <= K || abs(a[i+1] - sita) <= K) ue = a[i+1];
            else ue = -1;    

            if(abs(b[i+1] - ue) <= K || abs(b[i+1] - sita) <= K) sita = b[i+1];
            else sita = -1;            
        }
    }

    if(ue == -1 && sita == -1) can = false;
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}