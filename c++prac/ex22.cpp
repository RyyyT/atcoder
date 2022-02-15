#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, first, second;
    cin >> N;
    vector<pair<int, int>> a;
    for(int i=0; i<N; i++){
        pair<int, int> p;
        cin >> first >> second;
        p = make_pair(second, first);
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    for(auto v: a){
        cout << v.second << " " << v.first << endl;
    }
}
