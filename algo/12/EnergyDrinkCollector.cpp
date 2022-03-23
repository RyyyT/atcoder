#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, M;
    cin >> N >> M;
    vector<pair<long long, long long>> drink(N);
    rep(i, 0, N){
        cin >> drink[i].first >> drink[i].second;
    }
    long long money = 0, bottle = 0;
    sort(drink.begin(), drink.end());
    rep(i, 0, N){
        if(bottle + drink[i].second >= M){
            int need = M - bottle;
            money += drink[i].first * need;
            break;
        }else{
            money += drink[i].first * drink[i].second;
            bottle += drink[i].second;
        }
    }
    cout << money << endl;
    return 0;
}