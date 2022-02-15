#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int N;
vector<vector<int>> height;
vector<int64_t> sec;

bool judge(int64_t m){
    sec = vector<int64_t>(N);
    rep(i, 0, N){
        if(height.at(i).at(0) > m) return false;
        int64_t s = (m - height.at(i).at(0))/height.at(i).at(1);
        sec.at(i) = s;
    }
    sort(sec.begin(), sec.end());
    rep(time, 0, N){
        if(sec.at(time) < time){
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N;
    height = vector<vector<int>>(N, vector<int>(2));
    rep(i, 0, N){
        rep(j, 0, 2){
            cin >> height.at(i).at(j);
        }
    }
    int64_t maxp=0;
    rep(i, 0, N){
        int64_t h;
        h = height.at(i).at(0) + (N-1)*height.at(i).at(1);
        if(h > maxp) maxp = h;
    }

    int64_t left = -1, right = maxp;
    while(right - left > 1){
        int64_t mid;
        mid = left + (right - left)/2;
        if(judge(mid)){
            right = mid;
        }else{
            left = mid;
        }
    }
    cout << right << endl;
    return 0;
}