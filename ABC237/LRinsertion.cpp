#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    deque<int> d;
    d.push_back(N);
    for(int i=0; i < N; i++){
        if(s.at(i) == 'R'){
            d.push_front(N-1-i);
        }else{
            d.push_back(N-1-i);
        }
    }
    rep(i, 0, N+1){
        cout << d.front() << " ";
        d.pop_front();
    }
    cout << endl;
    return 0;
}