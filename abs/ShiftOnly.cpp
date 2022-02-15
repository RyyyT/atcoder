#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N, counter, min=100;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N){
        cin >> a.at(i);
    }
    rep(i, 0, N){
        counter = 0;
        while(a.at(i)%2 == 0){
            counter++;
            a.at(i) /= 2;
        }
        if(counter < min) min = counter;
    }
    cout << min << endl;
    return 0;
}