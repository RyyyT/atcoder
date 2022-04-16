#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];
    int Q;
    cin >> Q;
    vector<int> L(Q), R(Q), X(Q);
    rep(i, 0, Q){
        cin >> L[i] >> R[i] >> X[i];
    }

    vector<vector<int>> v;
    rep(i, 0, N){
        vector<int> p = {a[i], i+1};
        v.push_back(p);
    }
    sort(v.begin(), v.end());

    vector<pair<int, vector<int>>> vec;
    using pivi = pair<int, vector<int>>;
    int youso = 0;
    rep(i, 0, N){
        int key = v[i][0];
        if(i != 0){
            if(vec[youso-1].first == key){
                vec[youso-1].second.push_back(v[i][1]);
            }else{
                vector<int> tmp = {v[i][1]};
                pivi p = make_pair(v[i][0], tmp); 
                vec.push_back(p);
                youso ++;
            }
        }else{
            vector<int> tmp = {v[i][1]};
            pivi p = make_pair(v[i][0], tmp); 
            vec.push_back(p);
            youso ++;
        }
    }

    rep(i, 0, Q){
        int left, right, search;
        left = L[i]; right = R[i]; search = X[i];
        int count = 0;
        rep(i, 0, youso){
            if(vec[i].first == search){
                rep(j, 0, sizeof(vec[i].second)/sizeof(int)){
                    if(left <= vec[i].second[j] && vec[i].second[j] <= right){
                        count++;
                    }
                }
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}