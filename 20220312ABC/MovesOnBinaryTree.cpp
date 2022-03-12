#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N; long long X;
    cin >> N >> X;
    string s;
    cin >> s;

    deque<int> lr;
    rep(i, 0, N){
        if(s[i] == 'L'){
            lr.push_back('L');
        }else if(s[i] == 'R'){
            lr.push_back('R');
        }else{
            if(lr.empty() || lr.back() == 'U'){
                lr.push_back('U');
            }else{
                lr.pop_back();
            }
        }
    }

    int length = lr.size();

    long long ans = X;
    rep(i, 0, length){
        char c = lr.front();
        lr.pop_front();
        if(c == 'U'){
            X /= 2;
        }else if(c == 'L'){
            X *= 2;
        }else{
            X = X*2 + 1;
        }
    }
    cout << X << endl;
    return 0;
}